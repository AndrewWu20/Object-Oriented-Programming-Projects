#include "ChessBoard.hh"
#include "KnightPiece.hh"
#include <iostream>

using Student::KnightPiece;

Type KnightPiece::getType(){
    return type;
}

bool KnightPiece::canMoveToLocation(int toRow, int toColumn){
    int row = getRow();
    int col = getColumn();
    ChessBoard &boards = getBoard();
    Color pieceColor = getColor();

    if((toRow < 0) || (toRow >= boards.getNumRows()) || (toColumn < 0) || (toColumn >= boards.getNumCols())){
        return false; //destination is out of bounds
    }

    //Check the eight possible moves for the Knight
    if(((toRow == row-1)&&(toColumn == col-2)) || ((toRow == row-2)&&(toColumn == col-1)) ||  //moving NW
            ((toRow == row-1)&&(toColumn == col+2)) || ((toRow == row-2)&&(toColumn == col+1)) || //moving NE
            ((toRow == row+1)&&(toColumn == col-2)) || ((toRow == row+2)&&(toColumn == col-1)) || //moving SE
            ((toRow == row+1)&&(toColumn == col+2)) || ((toRow == row+2)&&(toColumn == col+1))){  //moving SW

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

const char *KnightPiece::toString(){
    if(getColor() == Black){
        return "\u265E";
    }
    else { //White
        return "\u2658";
    }
}