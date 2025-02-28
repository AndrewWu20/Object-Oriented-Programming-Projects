#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_1(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Rook, 7, 6);
	sBoard.createChessPiece(Black, Bishop, 1, 7);
	sBoard.createChessPiece(Black, Rook, 1, 5);
	sBoard.createChessPiece(White, Rook, 2, 3);
	sBoard.createChessPiece(Black, Rook, 4, 2);
	sBoard.createChessPiece(White, Bishop, 3, 0);
	sBoard.createChessPiece(Black, Rook, 6, 2);
	sBoard.createChessPiece(White, Bishop, 3, 7);
	sBoard.createChessPiece(Black, King, 6, 2);
	sBoard.createChessPiece(White, King, 5, 7);
	sBoard.movePiece(5,7,6,7);
	sBoard.movePiece(4,2,4,3);
	sBoard.movePiece(7,6,7,2);
	sBoard.movePiece(6,2,6,1);
	sBoard.movePiece(0,2,1,5);
	sBoard.movePiece(6,7,5,7);
	sBoard.movePiece(1,5,4,5);
	sBoard.movePiece(7,2,7,0);
	sBoard.movePiece(4,5,3,5);
	sBoard.movePiece(0,5,7,1);
	sBoard.movePiece(7,0,4,0);
	sBoard.movePiece(4,3,4,2);
	sBoard.movePiece(2,3,5,3);
	sBoard.movePiece(3,5,3,1);
	sBoard.movePiece(6,4,3,7);
	sBoard.movePiece(5,3,5,2);
	sBoard.movePiece(4,2,4,5);
	sBoard.movePiece(4,0,4,5);
	sBoard.movePiece(3,1,5,1);
	sBoard.movePiece(7,1,0,4);
	sBoard.movePiece(5,7,5,6);
	sBoard.movePiece(6,1,5,0);
	sBoard.movePiece(3,7,0,4);
	sBoard.movePiece(1,7,2,6);
	sBoard.movePiece(0,0,7,5);
	sBoard.movePiece(4,5,4,7);
	sBoard.movePiece(2,6,7,1);
	sBoard.movePiece(4,7,4,0);
	sBoard.movePiece(5,0,6,1);
	sBoard.movePiece(1,0,5,7);
	sBoard.movePiece(5,6,6,6);
	sBoard.movePiece(7,1,5,3);
	sBoard.movePiece(4,0,4,4);
	sBoard.movePiece(6,1,7,1);
	sBoard.movePiece(4,2,3,7);
	sBoard.movePiece(4,4,4,1);
	sBoard.movePiece(7,1,6,0);
	sBoard.movePiece(5,2,3,2);
	sBoard.movePiece(5,3,7,1);
	sBoard.movePiece(2,5,5,6);
	sBoard.movePiece(4,1,5,1);
	sBoard.movePiece(7,1,3,5);
	sBoard.movePiece(3,2,3,4);
	sBoard.movePiece(3,5,1,3);
	sBoard.movePiece(4,4,6,2);
	sBoard.movePiece(3,4,2,4);
	sBoard.movePiece(1,3,3,1);
	sBoard.movePiece(6,6,7,6);
	sBoard.movePiece(3,1,2,2);
	sBoard.movePiece(6,3,1,5);
	sBoard.movePiece(0,4,2,6);
	sBoard.movePiece(2,2,0,0);
	sBoard.movePiece(7,6,7,5);
	sBoard.movePiece(0,0,2,2);
	sBoard.movePiece(1,1,4,4);
	sBoard.movePiece(2,4,6,4);
	sBoard.movePiece(6,0,5,1);
	sBoard.movePiece(7,5,6,5);
	sBoard.movePiece(2,2,4,4);
	sBoard.movePiece(1,0,3,5);
	sBoard.movePiece(2,6,1,5);
	sBoard.movePiece(4,4,3,3);
	sBoard.movePiece(6,4,6,0);
	sBoard.movePiece(5,1,6,0);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
