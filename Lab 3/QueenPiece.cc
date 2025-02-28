#include "ChessBoard.hh"
#include "QueenPiece.hh"
#include <iostream>

using Student::QueenPiece;

Type QueenPiece::getType(){
    return type;
}

bool QueenPiece::canMoveToLocation(int toRow, int toColumn){
    int row = getRow();
    int col = getColumn();
    ChessBoard &boards = getBoard();
    Color pieceColor = getColor();

    if((toRow < 0) || (toRow >= boards.getNumRows()) || (toColumn < 0) || (toColumn >= boards.getNumCols())){
        return false; //destination is out of bounds
    }

    int r = row;
    int c = col;

    if((col == toColumn)&&(row != toRow)){ //moving vertically
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

    } else if((col != toColumn) && (row == toRow)){ //moving horizontally
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

    } else if((toColumn > col) && (toRow < row)){ //moving NE
        r--;
        c++;
        while((r > toRow) && (c < toColumn)){ //check all spaces diagnolly from here to destination
            if(boards.getPiece(r, c) != nullptr){ //there is a piece in the way
                return false;
            }
            r--;
            c++;
        }

        if((r != toRow) || (c != toColumn)){ //to location not diagonal
            return false;
        }

    } else if((toColumn < col) && (toRow < row)){ //moving NW
        r--;
        c--;
        while((r > toRow) && (c > toColumn)){ //check all spaces diagnolly from here to destination
            if(boards.getPiece(r, c) != nullptr){ //there is a piece in the way
                return false;
            }
            r--;
            c--;
        }

        if((r != toRow) || (c != toColumn)){ //to location not diagonal
            return false;
        }

    } else if((toColumn > col) && (toRow > row)){ //moving SE
        r++;
        c++;
        while((r < toRow) && (c < toColumn)){ //check all spaces diagnolly from here to destination
            if(boards.getPiece(r, c) != nullptr){ //there is a piece in the way
                return false;
            }
            r++;
            c++;
        }

        if((r != toRow) || (c != toColumn)){ //to location not diagonal
            return false;
        }

    } else if((toColumn < col) && (toRow > row)){ //moving SW
        r++;
        c--;
        while((r < toRow) && (c > toColumn)){ //check all spaces diagnolly from here to destination
            if(boards.getPiece(r, c) != nullptr){ //there is a piece in the way
                return false;
            }
            r++;
            c--;
        }

        if((r != toRow) || (c != toColumn)){ //to location not diagonal
            return false;
        }
        
    } else{
        return false;
    } 

    //Piece can get to location. Check if a piece exists at the location
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

const char *QueenPiece::toString(){
    if(getColor() == Black){
        return "\u265B";
    }
    else { //White
        return "\u2655";
    }
}