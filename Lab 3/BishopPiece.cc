#include "ChessBoard.hh"
#include "BishopPiece.hh"

using Student::BishopPiece;

Type BishopPiece::getType(){
    return type;
}

bool BishopPiece::canMoveToLocation(int toRow, int toColumn){
    int row = getRow();
    int col = getColumn();
    ChessBoard &boards = getBoard();
    Color pieceColor = getColor();

    if((toRow < 0) || (toRow >= boards.getNumRows()) || (toColumn < 0) || (toColumn >= boards.getNumCols())){
        return false; //destination is out of bounds
    }
    
    int r = row;
    int c = col;

    if((toColumn > col) && (toRow < row)){ //moving NE
        r--;
        c++;
        while((r > toRow) && (c < toColumn)){ //check all spaces diagnolly from here to destination
            if(boards.getPiece(r, c) != nullptr){ //there is a piece in the way
                return false;
            }
            r--;
            c++;
        }
    }
    else if((toColumn < col) && (toRow < row)){ //moving NW
        r--;
        c--;
        while((r > toRow) && (c > toColumn)){ //check all spaces diagnolly from here to destination
            if(boards.getPiece(r, c) != nullptr){ //there is a piece in the way
                return false;
            }
            r--;
            c--;
        }
    }
    else if((toColumn > col) && (toRow > row)){ //moving SE
        r++;
        c++;
        while((r < toRow) && (c < toColumn)){ //check all spaces diagnolly from here to destination
            if(boards.getPiece(r, c) != nullptr){ //there is a piece in the way
                return false;
            }
            r++;
            c++;
        }
    }
    else if((toColumn < col) && (toRow > row)){ //moving SW
        r++;
        c--;
        while((r < toRow) && (c > toColumn)){ //check all spaces diagnolly from here to destination
            if(boards.getPiece(r, c) != nullptr){ //there is a piece in the way
                return false;
            }
            r++;
            c--;
        }
    }
    else{
        return false;
    }

    if((r == toRow) && (c == toColumn)){ //r and c from iterating diagnolly until r or c matches toRow or toColumn
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

const char *BishopPiece::toString(){
    if(getColor() == Black){
        return "\u265D";
    }
    else { //White
        return "\u2657";
    }
}