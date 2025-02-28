#include "ChessPiece.hh"
#include "ChessBoard.hh"

using Student::ChessPiece;

ChessPiece::ChessPiece(ChessBoard &board, Color color, int row, int column, Type ty):board(board){
    this->color = color;
    this->row = row;
    this->column = column;
    type = ty;
    return;
}


Color ChessPiece::getColor(){
    return color;
}

int ChessPiece::getRow(){
    return row;
}

int ChessPiece::getColumn(){
    return column;
}

Student::ChessBoard &ChessPiece::getBoard(){
    return board;
}

Type ChessPiece::getType(){
    return type;
}

void ChessPiece::setPosition(int row, int column){
    this->row = row;
    this->column = column;
    return;
}


