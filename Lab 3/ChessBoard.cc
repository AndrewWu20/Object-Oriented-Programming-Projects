#include "ChessBoard.hh"
#include "PawnPiece.hh"
#include "RookPiece.hh"
#include "BishopPiece.hh"
#include "QueenPiece.hh"
#include "KnightPiece.hh"
#include "KingPiece.hh"
#include <iostream>

using Student::ChessBoard;

std::ostringstream ChessBoard::displayBoard()
{
    std::ostringstream outputString;
    // top scale
    outputString << "  ";
    for (int i = 0; i < numCols; i++)
    {
        outputString << i;
    }
    outputString << std::endl
                 << "  ";
    // top border
    for (int i = 0; i < numCols; i++)
    {
        outputString << "-";
    }
    outputString << std::endl;

    for (int row = 0; row < numRows; row++)
    {
        outputString << row << "|";
        for (int column = 0; column < numCols; column++)
        {
            ChessPiece *piece = board.at(row).at(column);
            outputString << (piece == nullptr ? " " : piece->toString());
        }
        outputString << "|" << std::endl;
    }

    // bottom border
    outputString << "  ";
    for (int i = 0; i < numCols; i++)
    {
        outputString << "-";
    }
    outputString << std::endl
                 << std::endl;

    return outputString;
}


ChessBoard::ChessBoard(int numRow, int numCol){
    numRows = numRow;
    numCols = numCol;
    turn = White;

    for (int c = 0; c < numCol; c++) { 
       
        std::vector<ChessPiece *> vcol;  // Vector to store column elements 
  
        for (int r = 0; r < numRow; r++) { 
            vcol.push_back(nullptr); 
        } 
  
        board.push_back(vcol); // Pushing 1D vector 
    } 

    return;
}

ChessBoard::ChessBoard(ChessBoard &other){
    numRows = other.numRows;
    numCols = other.numCols;
    turn = other.turn;

    for (int c = 0; c < numCols; c++) { 
        std::vector<ChessPiece *> vcol;  // Vector to store column elements 
        for (int r = 0; r < numRows; r++) { 
            vcol.push_back(nullptr); 
        } 
  
        board.push_back(vcol); // Pushing 1D vector 
    } 

    for (int c = 0; c < numCols; c++) { 
        std::vector<ChessPiece *> vcol;  // Vector to store column elements 
        for (int r = 0; r < numRows; r++) { 
            if(other.getPiece(r, c) != nullptr){
                Color colr = other.getPiece(r, c)->getColor();
                Type pc = other.getPiece(r, c)->getType();
                int rw = other.getPiece(r, c)->getRow();
                int cl = other.getPiece(r, c)->getColumn();

                createChessPiece(colr, pc, rw, cl);
            }
            
            
        } 
    } 
}

ChessBoard::~ChessBoard(){
    for (int c = 0; c < numCols; c++) { 
       
        std::vector<ChessPiece *> vcol;  // Vector to store column elements 
  
        for (int r = 0; r < numRows; r++) { 
            delete board.at(r).at(c);
        } 
    } 
}

void ChessBoard::createChessPiece(Color col, Type ty, int startRow, int startColumn){
    if(board.at(startRow).at(startColumn) != nullptr){ //there is a piece in that position
        delete board.at(startRow).at(startColumn); //free piece that is currently there
    }

    ChessPiece *newPiece;
    if(ty == Pawn){
        newPiece = new Student::PawnPiece(*this, col, startRow, startColumn);
    }
    else if(ty == Rook){
        newPiece = new Student::RookPiece(*this, col, startRow, startColumn);
    }
    else if(ty == Bishop){
        newPiece = new Student::BishopPiece(*this, col, startRow, startColumn);
    }
    else if(ty == Queen){
        newPiece = new Student::QueenPiece(*this, col, startRow, startColumn);
    }
    else if(ty == Knight){
        newPiece = new Student::KnightPiece(*this, col, startRow, startColumn);        
    }
    else{ //King
        newPiece = new Student::KingPiece(*this, col, startRow, startColumn);
    }

    board.at(startRow).at(startColumn) = newPiece;
    return;
}

bool ChessBoard::movePiece(int fromRow, int fromColumn, int toRow, int toColumn){
    Student::ChessPiece *movingPiece = getPiece(fromRow, fromColumn);
    Student::ChessPiece *toLocPiece = getPiece(toRow, toColumn);
    
    if(movingPiece != nullptr){ //a piece is there to move
        Color pieceColor = movingPiece->getColor();
        Type ty = movingPiece->getType();
        if(movingPiece->getColor() == turn){
            // if(movingPiece->canMoveToLocation(toRow, toColumn) == true){
            if(isValidMove(fromRow, fromColumn, toRow, toColumn) == true){

                for(int r = 0; r < numRows; r++){
                    for(int c = 0; c < numCols; c++){
                        if((board.at(r).at(c) != nullptr)){
                            Student::ChessPiece *tempPiece = getPiece(r, c);
                            if((tempPiece->getColor() == pieceColor) && (tempPiece->getType() == King)){
                                Student::ChessBoard tempBoard = *this;
                                tempBoard.tempMove(r, c, toRow, toColumn);

                                if(ty == King){
                                    if(tempBoard.isPieceUnderThreat(toRow, toColumn) == true){
                                        return false;
                                    }
                                }
                                else{
                                    if(tempBoard.isPieceUnderThreat(r, c) == true){
                                        return false;
                                    }
                                }
                            }
                        }
                    }
                }

                if(toLocPiece != nullptr){ //take piece at move loc
                    delete board.at(toRow).at(toColumn);
                }
                board.at(toRow).at(toColumn) = movingPiece;
                movingPiece->setPosition(toRow, toColumn);
                board.at(fromRow).at(fromColumn) = nullptr;
                switchTurn();

                return true;
            }
        }
    }

    return false;
}

bool ChessBoard::isValidMove(int fromRow, int fromColumn, int toRow, int toColumn){
    Student::ChessPiece *testPiece = getPiece(fromRow, fromColumn);
    if(testPiece != nullptr){ //Piece exists in location
        bool valid = testPiece->canMoveToLocation(toRow, toColumn);
        if(valid == 0){
            return false;
        }

        Color pieceColor = testPiece->getColor();
        Type ty = testPiece->getType();
        
        for(int r = 0; r < numRows; r++){
            for(int c = 0; c < numCols; c++){
                if((board.at(r).at(c) != nullptr)){
                    Student::ChessPiece *tempPiece = getPiece(r, c);
                    if((tempPiece->getColor() == pieceColor) && (tempPiece->getType() == King)){
                        Student::ChessBoard tempBoard = *this;

                        tempBoard.tempMove(fromRow, fromColumn, toRow, toColumn);

                        if(ty == King){
                            if(tempBoard.isPieceUnderThreat(toRow, toColumn) == true){
                                return false;
                            }
                        }
                        else{
                            if(tempBoard.isPieceUnderThreat(r, c) == true){
                                return false;
                            }
                        }
                        
                        
                    }
                }
            }
        }

        return true;
    }   

    return false;
}   

bool ChessBoard::isPieceUnderThreat(int row, int column){
    Student::ChessPiece *currPiece = getPiece(row, column);
    if(currPiece == nullptr){ //no piece
        return false;
    }

    for(int r = 0; r < numRows; r++){
        for(int c = 0; c < numCols; c++){
            if((r != row || c != column) && (board.at(r).at(c) != nullptr)){
                Student::ChessPiece *tempPiece = getPiece(r, c);
                // std::cout <<"\nCurr: "<<row <<", "<<column<<", threat: "<< r<<", "<<c << "\n";
                if(tempPiece->getColor() != currPiece->getColor()){
                    if(tempPiece->canMoveToLocation(row, column)){
                        tempPiece = getPiece(r, c);
                        return true;
                    }
                }
            }
        }
    }

    return false;
}


Color ChessBoard::getTurn(){
    return turn;
}

void ChessBoard::switchTurn(){
    if(turn == White){
        turn = Black;
    }
    else{
        turn = White;
    }
    return;
}

void ChessBoard::tempMove(int fromRow, int fromColumn, int toRow, int toColumn){
    // Student::ChessPiece *movingPiece = getPiece(fromRow, fromColumn);
    // board.at(toRow).at(toColumn) = movingPiece;
    // movingPiece->setPosition(toRow, toColumn);
    // board.at(fromRow).at(fromColumn) = nullptr;
    
    delete board.at(toRow).at(toColumn);
    board.at(toRow).at(toColumn) = board.at(fromRow).at(fromColumn);
    board.at(fromRow).at(fromColumn) = nullptr;
    board.at(toRow).at(toColumn)->setPosition(toRow, toColumn);
    return;
}

float ChessBoard::scoreBoard(){
    float blackScore = 0.0;
    float whiteScore = 0.0;
    float final = 0.0;

    for(int fr = 0; fr < numRows; fr++){ //count pieces
        for(int fc = 0; fc < numCols; fc++){
            Student::ChessPiece *tempPiece = getPiece(fr, fc);
            if(tempPiece != nullptr){
                if(tempPiece->getColor() == White){

                    if(tempPiece->getType() == King){
                        whiteScore += 200.0;
                    }else if(tempPiece->getType() == Queen){
                        whiteScore += 9.0;
                    }else if(tempPiece->getType() == Rook){
                        whiteScore += 5.0;
                    }else if((tempPiece->getType() == Knight) || (tempPiece->getType() == Bishop)){
                        whiteScore += 3.0;
                    }else{ //Pawn
                        whiteScore += 1.0;
                    }
                }
                else{
                    if(tempPiece->getType() == King){
                        blackScore += 200.0;
                    }else if(tempPiece->getType() == Queen){
                        blackScore += 9.0;
                    }else if(tempPiece->getType() == Rook){
                        blackScore += 5.0;
                    }else if((tempPiece->getType() == Knight) || (tempPiece->getType() == Bishop)){
                        blackScore += 3.0;
                    }else{ //Pawn
                        blackScore += 1.0;
                    }

                }
            }
        }
    }

    bool valid;
    for(int fr = 0; fr < numRows; fr++){ //go through every board position
        for(int fc = 0; fc < numCols; fc++){
            for(int tr = 0; tr < numRows; tr++){ //go through every board position
                for(int tc = 0; tc < numCols; tc++){
            
                    valid = isValidMove(fr, fc, tr, tc);
                    if(valid){
                        Student::ChessPiece *tempPiece = getPiece(fr, fc);
                        // std::cout << "("<<fr<<", "<<fc<<") -> ("<<tr<<", "<<tc<<")\n";
                        if(tempPiece->getColor() == White){
                            whiteScore += 0.1;
                        } else{
                            blackScore += 0.1;
                        }
                    }
                }
            }
        }
    }

    // std::cout <<"Final white score: "<< whiteScore << "\n";
    // std::cout <<"Final black score: "<< blackScore << "\n";

    if(turn == White){
        final = whiteScore - blackScore;
    }else{
        final = blackScore - whiteScore;
    }

    return final;
}

float ChessBoard::getHighestNextScore(){
    float maxscore = -10000.0;
    bool valid;
    for(int fr = 0; fr < numRows; fr++){ //go through every board position
        for(int fc = 0; fc < numCols; fc++){
            Student::ChessPiece *tempPiece = getPiece(fr, fc);
            if((tempPiece != nullptr) && (tempPiece->getColor() == turn)){

                for(int tr = 0; tr < numRows; tr++){ //go through every board position
                    for(int tc = 0; tc < numCols; tc++){
                
                        valid = isValidMove(fr, fc, tr, tc);
                        if(valid){
                            Student::ChessBoard tempBoard = *this;

                            tempBoard.tempMove(fr, fc, tr, tc);
                            float tempscore = tempBoard.scoreBoard();
                            
                            if(tempscore > maxscore){
                                maxscore = tempscore;
                            }

                        }
                    }
                }
            }
        }
    }

    return maxscore;
}