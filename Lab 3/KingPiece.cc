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

    if((toRow >= row+2)||(toRow <= row-2)||(toColumn >= col+2)||(toColumn <= col-2)){
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