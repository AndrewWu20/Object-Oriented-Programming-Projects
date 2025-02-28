#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_8(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Bishop, 6, 2);
	sBoard.createChessPiece(Black, Pawn, 3, 7);
	sBoard.createChessPiece(White, Bishop, 2, 0);
	sBoard.createChessPiece(White, Bishop, 1, 5);
	sBoard.createChessPiece(White, Rook, 4, 3);
	sBoard.createChessPiece(White, Pawn, 4, 7);
	sBoard.createChessPiece(White, Pawn, 3, 7);
	sBoard.createChessPiece(White, Bishop, 7, 2);
	sBoard.createChessPiece(Black, King, 1, 0);
	sBoard.createChessPiece(White, King, 4, 3);
	sBoard.movePiece(2,0,3,1);
	sBoard.movePiece(1,0,1,1);
	sBoard.movePiece(1,5,2,6);
	sBoard.movePiece(1,1,0,0);
	sBoard.movePiece(5,3,3,0);
	sBoard.movePiece(6,2,5,3);
	sBoard.movePiece(0,0,1,0);
	sBoard.movePiece(3,1,1,3);
	sBoard.movePiece(1,0,1,1);
	sBoard.movePiece(1,2,4,6);
	sBoard.movePiece(5,3,7,5);
	sBoard.movePiece(1,1,1,0);
	sBoard.movePiece(7,5,3,1);
	sBoard.movePiece(1,0,0,0);
	sBoard.movePiece(3,7,5,6);
	sBoard.movePiece(4,3,4,2);
	sBoard.movePiece(0,0,1,0);
	sBoard.movePiece(7,2,6,1);
	sBoard.movePiece(1,0,2,1);
	sBoard.movePiece(6,2,5,3);
	sBoard.movePiece(6,1,7,0);
	sBoard.movePiece(2,1,1,2);
	sBoard.movePiece(3,1,2,2);
	sBoard.movePiece(1,2,2,1);
	sBoard.movePiece(3,7,5,2);
	sBoard.movePiece(2,2,1,1);
	sBoard.movePiece(2,1,3,0);
	sBoard.movePiece(1,1,3,3);
	sBoard.movePiece(3,0,2,0);
	sBoard.movePiece(2,7,3,1);
	sBoard.movePiece(3,3,4,4);
	sBoard.movePiece(2,0,2,1);
	sBoard.movePiece(1,3,2,2);
	sBoard.movePiece(2,1,3,0);
	sBoard.movePiece(7,5,6,2);
	sBoard.movePiece(4,4,5,5);
	sBoard.movePiece(3,0,2,0);
	sBoard.movePiece(2,6,6,2);
	sBoard.movePiece(2,0,2,1);
	sBoard.movePiece(5,2,3,7);
	sBoard.movePiece(7,0,5,2);
	sBoard.movePiece(2,1,1,0);
	sBoard.movePiece(5,2,1,6);
	sBoard.movePiece(1,0,2,0);
	sBoard.movePiece(5,6,2,0);
	sBoard.movePiece(2,2,0,4);
	sBoard.movePiece(2,0,2,1);
	sBoard.movePiece(5,5,4,4);
	sBoard.movePiece(2,1,2,0);
	sBoard.movePiece(3,0,0,2);
	sBoard.movePiece(6,2,5,3);
	sBoard.movePiece(2,0,3,0);
	sBoard.movePiece(4,4,2,6);
	sBoard.movePiece(3,0,2,1);
	sBoard.movePiece(2,6,5,1);
	sBoard.movePiece(5,3,6,2);
	sBoard.movePiece(2,1,3,0);
	sBoard.movePiece(1,6,4,3);
	sBoard.movePiece(3,0,2,0);
	sBoard.movePiece(7,4,6,2);
	sBoard.movePiece(3,7,2,7);
	sBoard.movePiece(2,0,3,0);
	sBoard.movePiece(4,3,5,4);
	sBoard.movePiece(3,0,2,0);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
