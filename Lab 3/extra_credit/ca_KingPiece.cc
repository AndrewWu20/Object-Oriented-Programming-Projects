#include "ChessBoard.hh"
#include "KingPiece.hh"
#include <iostream>

using Student::KingPiece;

Type KingPiece::getType(){
    return type;
}



bool KingPiece::canMoveToLocation(int toRow, int toColumn){
    
    int row = getRow();
    int col = getColumn();
    ChessBoard &boards = getBoard();
    Color pieceColor = getColor();

    if((toRow < 0) || (toRow >= boards.getNumRows()) || (toColumn < 0) || (toColumn >= boards.getNumCols())){
        return false; //destination is out of bounds
    }

    if(!getHasMoved() && !boards.isPieceUnderThreat(row, col) && (toColumn == col+2 && toRow == row)){ //check castling right side
        // std::cout << "Castling Right\n";
        int numcol = boards.getNumCols();
        for(int c = col+1; c < numcol; c++){
            Student::ChessPiece *tempPiece = boards.getPiece(toRow, c);

            if(tempPiece != nullptr && tempPiece->getColor() == pieceColor && tempPiece->getType() == Rook){
                if(getHasMoved() || (c <= toColumn)){
                    return false;
                }
                return true;

            }else if(tempPiece != nullptr){
                return false;
            }
        }
        return false;

    } else if(!getHasMoved() && !boards.isPieceUnderThreat(row, col) && (toColumn == col-2 && toRow == row)){ //check casting left side
        // std::cout << "Castling left\n";
        for(int c = col-1; c >= 0; c--){
            Student::ChessPiece *tempPiece = boards.getPiece(toRow, c);

            if(tempPiece != nullptr && tempPiece->getColor() == pieceColor && tempPiece->getType() == Rook){
                if(getHasMoved() || (c >= toColumn)){
                    return false;
                }
                return true;

            }else if(tempPiece != nullptr){
                return false;
            }
        }
        return false;
    }
    else if((toRow >= row+2)||(toRow <= row-2)||(toColumn >= col+2)||(toColumn <= col-2)){
        return false; //king cannot move that far
    }

    Student::ChessPiece *toPiece = boards.getPiece(toRow, toColumn);
    if((toPiece != nullptr) && (toPiece->getColor() == pieceColor)){
        return false;
    }
    
    return true;
}

const char *KingPiece::toString(){
    if(getColor() == Black){
        return "\u265A";
    }
    else { //White
        return "\u2654";
    }
}