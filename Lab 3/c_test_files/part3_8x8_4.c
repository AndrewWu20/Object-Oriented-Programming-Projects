#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_4(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Pawn, 3, 2);
	sBoard.createChessPiece(White, Bishop, 4, 4);
	sBoard.createChessPiece(Black, Pawn, 0, 2);
	sBoard.createChessPiece(White, Bishop, 6, 5);
	sBoard.createChessPiece(White, Rook, 1, 7);
	sBoard.createChessPiece(White, Rook, 1, 0);
	sBoard.createChessPiece(White, Bishop, 4, 3);
	sBoard.createChessPiece(Black, Rook, 7, 6);
	sBoard.createChessPiece(Black, King, 6, 5);
	sBoard.createChessPiece(White, King, 4, 1);
	sBoard.movePiece(1,7,7,7);
	sBoard.movePiece(6,5,5,6);
	sBoard.movePiece(4,4,2,6);
	sBoard.movePiece(7,6,7,3);
	sBoard.movePiece(0,5,7,4);
	sBoard.movePiece(4,3,3,4);
	sBoard.movePiece(5,6,5,5);
	sBoard.movePiece(2,6,1,5);
	sBoard.movePiece(5,5,4,6);
	sBoard.movePiece(1,1,3,6);
	sBoard.movePiece(3,2,2,2);
	sBoard.movePiece(4,6,3,6);
	sBoard.movePiece(4,1,3,2);
	sBoard.movePiece(3,6,3,5);
	sBoard.movePiece(5,4,6,5);
	sBoard.movePiece(3,4,7,0);
	sBoard.movePiece(3,5,4,4);
	sBoard.movePiece(7,7,1,7);
	sBoard.movePiece(7,3,3,3);
	sBoard.movePiece(0,1,6,5);
	sBoard.movePiece(3,2,4,2);
	sBoard.movePiece(3,3,4,3);
	sBoard.movePiece(4,2,5,1);
	sBoard.movePiece(0,2,1,2);
	sBoard.movePiece(6,0,3,6);
	sBoard.movePiece(1,0,6,0);
	sBoard.movePiece(4,4,3,5);
	sBoard.movePiece(6,0,0,0);
	sBoard.movePiece(4,3,4,4);
	sBoard.movePiece(2,7,6,4);
	sBoard.movePiece(0,0,4,0);
	sBoard.movePiece(4,4,4,5);
	sBoard.movePiece(1,5,4,2);
	sBoard.movePiece(4,5,6,5);
	sBoard.movePiece(5,1,7,2);
	sBoard.movePiece(7,0,1,6);
	sBoard.movePiece(6,5,6,7);
	sBoard.movePiece(4,2,2,0);
	sBoard.movePiece(6,7,3,7);
	sBoard.movePiece(5,7,7,1);
	sBoard.movePiece(5,1,4,1);
	sBoard.movePiece(3,7,2,7);
	sBoard.movePiece(2,0,1,1);
	sBoard.movePiece(2,7,2,6);
	sBoard.movePiece(6,1,4,6);
	sBoard.movePiece(1,6,5,2);
	sBoard.movePiece(3,5,2,4);
	sBoard.movePiece(4,0,2,0);
	sBoard.movePiece(2,6,6,6);
	sBoard.movePiece(7,4,5,4);
	sBoard.movePiece(2,0,4,0);
	sBoard.movePiece(6,6,3,6);
	sBoard.movePiece(4,0,3,0);
	sBoard.movePiece(3,6,2,6);
	sBoard.movePiece(5,7,1,4);
	sBoard.movePiece(3,0,3,4);
	sBoard.movePiece(2,4,2,3);
	sBoard.movePiece(3,4,7,4);
	sBoard.movePiece(2,3,3,3);
	sBoard.movePiece(3,6,4,5);
	sBoard.movePiece(5,2,4,3);
	sBoard.movePiece(2,6,0,6);
	sBoard.movePiece(4,3,2,5);
	sBoard.movePiece(0,6,2,6);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
