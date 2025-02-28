#include "ChessBoard.hh"
#include "RookPiece.hh"
#include <iostream>

using Student::RookPiece;

Type RookPiece::getType(){
    return type;
}


bool RookPiece::canMoveToLocation(int toRow, int toColumn){
    int row = getRow();
    int col = getColumn();
    ChessBoard &boards = getBoard();
    Color pieceColor = getColor();

    if((toRow < 0) || (toRow >= boards.getNumRows()) || (toColumn < 0) || (toColumn >= boards.getNumCols())){
        return false; //destination is out of bounds
    }
    

    if((col == toColumn) && (row != toRow)){ //moving vertically
        //check that all spaces clear between current position and destination
        if(toRow < row){ //moving up
            for(int i = row-1; i > toRow; i--){
                
                if(boards.getPiece(i, toColumn) != nullptr){ //a piece is in the way
                    return false;
                }
            }
        }
        else{ //moving down
            for(int i = row+1; i < toRow; i++){
                if(boards.getPiece(i, toColumn) != nullptr){ //a piece is in the way
                    return false;
                }
            }
        }

        if(boards.getPiece(toRow, toColumn) == nullptr){ //space is empty
            return true;
        }
        else if((boards.getPiece(toRow, toColumn)->getColor() == White) && (pieceColor == Black)){ //space can be taken
            return true;
        }
        else if((boards.getPiece(toRow, toColumn)->getColor() == Black) && (pieceColor == White)){ //space can be taken
            return true;
        }
        else{
            return false;
        }
    }
    else if((col != toColumn) && (row == toRow)){ //moving horizontally
        //check that all spaces clear between current position and destination
        if(toColumn < col){ //moving left
            for(int i = col-1; i > toColumn; i--){
                if(boards.getPiece(toRow, i) != nullptr){ //a piece is in the way
                    return false;
                }
            }
        }
        else{ //moving right
            for(int i = col+1; i < toColumn; i++){
                if(boards.getPiece(toRow, i) != nullptr){ //a piece is in the way
                    return false;
                }
            }
        }

        if(boards.getPiece(toRow, toColumn) == nullptr){ //space is empty
            return true;
        }
        else if((boards.getPiece(toRow, toColumn)->getColor() == White) && (pieceColor == Black)){ //space can be taken
            return true;
        }
        else if((boards.getPiece(toRow, toColumn)->getColor() == Black) && (pieceColor == White)){ //space can be taken
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

const char *RookPiece::toString(){
    if(getColor() == Black){
        return "\u265C";
    }
    else { //White
        return "\u2656";
    }
}