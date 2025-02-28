#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_5(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Pawn, 7, 5);
	sBoard.createChessPiece(White, Bishop, 2, 2);
	sBoard.createChessPiece(Black, Bishop, 0, 1);
	sBoard.createChessPiece(White, Rook, 4, 5);
	sBoard.createChessPiece(White, Pawn, 7, 1);
	sBoard.createChessPiece(Black, Bishop, 5, 4);
	sBoard.createChessPiece(White, Pawn, 0, 4);
	sBoard.createChessPiece(Black, Bishop, 5, 1);
	sBoard.createChessPiece(Black, King, 2, 4);
	sBoard.createChessPiece(White, King, 4, 6);
	sBoard.movePiece(4,6,3,6);
	sBoard.movePiece(5,1,7,3);
	sBoard.movePiece(2,2,3,3);
	sBoard.movePiece(2,4,3,3);
	sBoard.movePiece(6,7,1,7);
	sBoard.movePiece(7,1,6,1);
	sBoard.movePiece(5,4,6,5);
	sBoard.movePiece(3,6,2,7);
	sBoard.movePiece(7,3,5,1);
	sBoard.movePiece(5,4,3,7);
	sBoard.movePiece(4,5,6,5);
	sBoard.movePiece(5,1,6,2);
	sBoard.movePiece(6,5,6,7);
	sBoard.movePiece(6,2,7,3);
	sBoard.movePiece(1,6,4,7);
	sBoard.movePiece(6,7,3,7);
	sBoard.movePiece(3,3,2,4);
	sBoard.movePiece(2,7,2,6);
	sBoard.movePiece(0,1,5,6);
	sBoard.movePiece(4,6,4,6);
	sBoard.movePiece(3,7,5,7);
	sBoard.movePiece(7,3,5,1);
	sBoard.movePiece(2,6,3,6);
	sBoard.movePiece(5,1,6,0);
	sBoard.movePiece(4,3,0,4);
	sBoard.movePiece(5,7,0,7);
	sBoard.movePiece(5,6,2,3);
	sBoard.movePiece(0,7,5,7);
	sBoard.movePiece(6,0,4,2);
	sBoard.movePiece(6,4,7,1);
	sBoard.movePiece(6,1,5,1);
	sBoard.movePiece(4,2,5,3);
	sBoard.movePiece(5,7,3,7);
	sBoard.movePiece(5,3,4,2);
	sBoard.movePiece(7,2,3,2);
	sBoard.movePiece(3,7,2,7);
	sBoard.movePiece(2,4,1,5);
	sBoard.movePiece(7,5,6,5);
	sBoard.movePiece(4,2,7,5);
	sBoard.movePiece(0,0,2,4);
	sBoard.movePiece(5,1,4,1);
	sBoard.movePiece(1,5,0,6);
	sBoard.movePiece(2,7,2,3);
	sBoard.movePiece(7,5,5,3);
	sBoard.movePiece(4,0,4,4);
	sBoard.movePiece(2,3,2,1);
	sBoard.movePiece(0,6,1,5);
	sBoard.movePiece(2,1,2,0);
	sBoard.movePiece(5,3,1,7);
	sBoard.movePiece(1,6,5,6);
	sBoard.movePiece(3,6,4,5);
	sBoard.movePiece(1,7,5,3);
	sBoard.movePiece(4,5,3,4);
	sBoard.movePiece(5,3,3,5);
	sBoard.movePiece(4,2,0,1);
	sBoard.movePiece(2,0,1,0);
	sBoard.movePiece(1,5,0,4);
	sBoard.movePiece(1,0,5,0);
	sBoard.movePiece(0,4,1,5);
	sBoard.movePiece(7,1,3,7);
	sBoard.movePiece(5,0,7,0);
	sBoard.movePiece(3,5,5,3);
	sBoard.movePiece(6,5,5,5);
	sBoard.movePiece(5,3,1,7);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
