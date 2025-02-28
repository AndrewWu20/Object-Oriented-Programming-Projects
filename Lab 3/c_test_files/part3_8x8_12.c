#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_12(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Bishop, 1, 6);
	sBoard.createChessPiece(Black, Bishop, 0, 0);
	sBoard.createChessPiece(White, Bishop, 7, 3);
	sBoard.createChessPiece(White, Pawn, 5, 5);
	sBoard.createChessPiece(Black, Rook, 7, 3);
	sBoard.createChessPiece(White, Pawn, 2, 7);
	sBoard.createChessPiece(White, Bishop, 1, 7);
	sBoard.createChessPiece(White, Pawn, 6, 6);
	sBoard.createChessPiece(Black, Pawn, 4, 2);
	sBoard.createChessPiece(Black, Pawn, 2, 0);
	sBoard.createChessPiece(Black, Rook, 3, 1);
	sBoard.createChessPiece(Black, Pawn, 6, 3);
	sBoard.createChessPiece(Black, Bishop, 7, 0);
	sBoard.createChessPiece(Black, Bishop, 0, 7);
	sBoard.createChessPiece(White, Bishop, 6, 3);
	sBoard.createChessPiece(White, Rook, 1, 5);
	sBoard.createChessPiece(Black, King, 7, 3);
	sBoard.createChessPiece(White, King, 3, 1);
	sBoard.movePiece(3,1,2,0);
	sBoard.movePiece(0,0,3,3);
	sBoard.movePiece(1,6,4,3);
	sBoard.movePiece(5,6,1,0);
	sBoard.movePiece(3,3,1,1);
	sBoard.movePiece(2,0,3,1);
	sBoard.movePiece(0,7,2,5);
	sBoard.movePiece(1,1,4,3);
	sBoard.movePiece(6,3,7,2);
	sBoard.movePiece(1,1,0,0);
	sBoard.movePiece(4,3,5,2);
	sBoard.movePiece(0,1,2,4);
	sBoard.movePiece(2,5,0,7);
	sBoard.movePiece(1,7,2,6);
	sBoard.movePiece(0,0,2,2);
	sBoard.movePiece(4,0,7,0);
	sBoard.movePiece(3,1,2,1);
	sBoard.movePiece(2,2,0,0);
	sBoard.movePiece(5,2,3,0);
	sBoard.movePiece(2,4,6,4);
	sBoard.movePiece(7,0,4,3);
	sBoard.movePiece(2,1,2,0);
	sBoard.movePiece(7,3,6,4);
	sBoard.movePiece(3,7,6,6);
	sBoard.movePiece(7,2,3,6);
	sBoard.movePiece(4,2,5,2);
	sBoard.movePiece(3,0,0,3);
	sBoard.movePiece(6,5,4,3);
	sBoard.movePiece(4,3,1,0);
	sBoard.movePiece(3,6,2,5);
	sBoard.movePiece(0,7,1,6);
	sBoard.movePiece(0,7,7,0);
	sBoard.movePiece(1,5,1,6);
	sBoard.movePiece(0,0,4,4);
	sBoard.movePiece(2,6,1,7);
	sBoard.movePiece(7,3,4,6);
	sBoard.movePiece(1,0,6,5);
	sBoard.movePiece(0,3,1,2);
	sBoard.movePiece(4,4,6,2);
	sBoard.movePiece(0,4,2,7);
	sBoard.movePiece(1,6,1,4);
	sBoard.movePiece(6,5,5,4);
	sBoard.movePiece(1,2,2,3);
	sBoard.movePiece(5,5,7,2);
	sBoard.movePiece(6,2,4,4);
	sBoard.movePiece(2,5,0,7);
	sBoard.movePiece(4,4,5,3);
	sBoard.movePiece(4,1,4,7);
	sBoard.movePiece(2,0,3,0);
	sBoard.movePiece(6,4,6,5);
	sBoard.movePiece(0,7,1,6);
	sBoard.movePiece(1,6,2,3);
	sBoard.movePiece(5,2,6,2);
	sBoard.movePiece(1,4,5,4);
	sBoard.movePiece(5,3,6,4);
	sBoard.movePiece(5,1,3,7);
	sBoard.movePiece(1,6,0,5);
	sBoard.movePiece(6,5,7,6);
	sBoard.movePiece(2,3,6,7);
	sBoard.movePiece(1,7,6,3);
	sBoard.movePiece(7,6,6,5);
	sBoard.movePiece(0,5,3,2);
	sBoard.movePiece(6,2,7,2);
	sBoard.movePiece(7,1,7,0);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
