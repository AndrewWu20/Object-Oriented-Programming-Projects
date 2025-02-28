#include "ChessBoard.hh"
#include "PawnPiece.hh"
#include <iostream>

using Student::PawnPiece;

Type PawnPiece::getType(){
    return type;
}

bool PawnPiece::canMoveToLocation(int toRow, int toColumn){
    int row = getRow();
    int col = getColumn();
    ChessBoard &boards = getBoard();
    Color pieceColor = getColor();

    if((toRow < 0) || (toRow >= boards.getNumRows()) || (toColumn < 0) || (toColumn >= boards.getNumCols())){
        return false; //destination is out of bounds
    }

    if(pieceColor == Black){
        if((col == toColumn) && (row != toRow)){ //moving straight forward
            if(toRow == row+1){ //move forward once
                if(boards.getPiece(toRow, toColumn) == nullptr){ //no piece in space
                    enpassant = 0;
                    return true;
                }
                else{
                    return false;
                }
            }
            else if((toRow == row+2) && (row == 1)){ //move forward 2 for first move
                if((boards.getPiece(toRow, toColumn) == nullptr) && (boards.getPiece(toRow-1, toColumn) == nullptr)){ //no piece both spaces in front of pawn
                    enpassant = 1;
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        else if(((toColumn == col-1) || (toColumn == col+1)) && (toRow == (row + 1))){ //attempting to take a piece
            if((boards.getPiece(toRow, toColumn) != nullptr) && (boards.getPiece(toRow, toColumn)->getColor() == White)){ //there is a white piece
                return true; 
            }
            else if((boards.getPiece(toRow, toColumn) == nullptr) && (boards.getPiece(toRow-1, toColumn) != nullptr)
                    && (boards.getPiece(toRow-1, toColumn)->getType() == Pawn) && (boards.getPiece(toRow-1, toColumn)->getColor() == White)
                    && (((Student::PawnPiece *)boards.getPiece(toRow-1, toColumn))->getEnPassant() == 1)){
                std::cout<<"EnPassant Black\n";
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    
    }
    else{ //White
        if((col == toColumn) && (row != toRow)){ //moving straight forward
            if(toRow == row-1){ //move forward once
                if(boards.getPiece(toRow, toColumn) == nullptr){ //no piece in space
                    enpassant = 0;
                    return true;
                }
                else{
                    return false;
                }
            }
            else if((toRow == row-2) && (row == (boards.getNumRows()-2))){ //move forward 2 for first move
                if((boards.getPiece(toRow, toColumn) == nullptr) && boards.getPiece(toRow+1, toColumn) == nullptr){ //no piece both spaces in front of pawn
                    enpassant = 1;
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        else if(((toColumn == col-1) || (toColumn == col+1)) && (toRow == (row - 1))){ //attempting to take a piece
            if((boards.getPiece(toRow, toColumn) != nullptr) && (boards.getPiece(toRow, toColumn)->getColor() == Black)){ //there is a black piece
                return true; 
            }
            else if((boards.getPiece(toRow, toColumn) == nullptr) && (boards.getPiece(toRow+1, toColumn) != nullptr)
                    && (boards.getPiece(toRow+1, toColumn)->getType() == Pawn) && (boards.getPiece(toRow+1, toColumn)->getColor() == Black)
                    && (((Student::PawnPiece *)boards.getPiece(toRow+1, toColumn))->getEnPassant() == 1)){
                std::cout<<"EnPassant White\n";
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
}

int PawnPiece::getEnPassant(){
    return enpassant;
}

const char *PawnPiece::toString(){
    if(getColor() == Black){
        return "\u265F";
    }
    else { //White
        return "\u2659";
    }
}