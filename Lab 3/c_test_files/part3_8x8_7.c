#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_7(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Pawn, 1, 3);
	sBoard.createChessPiece(White, Rook, 6, 3);
	sBoard.createChessPiece(White, Pawn, 7, 5);
	sBoard.createChessPiece(Black, Pawn, 6, 6);
	sBoard.createChessPiece(Black, Rook, 1, 4);
	sBoard.createChessPiece(Black, Rook, 7, 3);
	sBoard.createChessPiece(Black, Bishop, 2, 4);
	sBoard.createChessPiece(Black, Bishop, 2, 6);
	sBoard.createChessPiece(Black, King, 1, 5);
	sBoard.createChessPiece(White, King, 0, 0);
	sBoard.movePiece(0,0,1,0);
	sBoard.movePiece(2,6,3,7);
	sBoard.movePiece(7,5,6,6);
	sBoard.movePiece(7,3,7,6);
	sBoard.movePiece(0,3,4,1);
	sBoard.movePiece(1,0,2,0);
	sBoard.movePiece(2,4,4,6);
	sBoard.movePiece(6,6,5,6);
	sBoard.movePiece(7,6,7,1);
	sBoard.movePiece(1,6,4,2);
	sBoard.movePiece(6,3,6,5);
	sBoard.movePiece(4,6,3,5);
	sBoard.movePiece(5,6,4,6);
	sBoard.movePiece(1,4,5,4);
	sBoard.movePiece(3,2,6,4);
	sBoard.movePiece(4,6,3,6);
	sBoard.movePiece(5,4,5,5);
	sBoard.movePiece(2,0,1,0);
	sBoard.movePiece(1,5,2,6);
	sBoard.movePiece(6,7,3,2);
	sBoard.movePiece(6,5,6,3);
	sBoard.movePiece(5,5,5,2);
	sBoard.movePiece(6,3,4,3);
	sBoard.movePiece(7,1,7,6);
	sBoard.movePiece(0,7,4,3);
	sBoard.movePiece(4,3,4,2);
	sBoard.movePiece(2,6,1,7);
	sBoard.movePiece(4,2,4,3);
	sBoard.movePiece(1,7,0,6);
	sBoard.movePiece(4,0,4,4);
	sBoard.movePiece(4,3,4,6);
	sBoard.movePiece(5,2,4,2);
	sBoard.movePiece(1,0,1,1);
	sBoard.movePiece(7,6,6,6);
	sBoard.movePiece(4,7,5,5);
	sBoard.movePiece(4,6,4,3);
	sBoard.movePiece(3,5,7,1);
	sBoard.movePiece(3,6,2,6);
	sBoard.movePiece(3,7,6,4);
	sBoard.movePiece(0,3,7,6);
	sBoard.movePiece(4,3,4,4);
	sBoard.movePiece(4,2,2,2);
	sBoard.movePiece(4,4,4,5);
	sBoard.movePiece(0,6,0,7);
	sBoard.movePiece(4,6,2,7);
	sBoard.movePiece(4,5,5,5);
	sBoard.movePiece(6,4,4,2);
	sBoard.movePiece(5,5,5,4);
	sBoard.movePiece(2,2,2,5);
	sBoard.movePiece(0,3,3,3);
	sBoard.movePiece(5,4,4,4);
	sBoard.movePiece(6,6,2,6);
	sBoard.movePiece(1,1,0,0);
	sBoard.movePiece(2,6,2,7);
	sBoard.movePiece(4,2,1,6);
	sBoard.movePiece(4,4,4,6);
	sBoard.movePiece(2,7,3,7);
	sBoard.movePiece(4,6,4,5);
	sBoard.movePiece(4,2,1,5);
	sBoard.movePiece(4,2,1,3);
	sBoard.movePiece(4,5,5,5);
	sBoard.movePiece(1,5,2,6);
	sBoard.movePiece(5,5,5,7);
	sBoard.movePiece(2,5,2,2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
