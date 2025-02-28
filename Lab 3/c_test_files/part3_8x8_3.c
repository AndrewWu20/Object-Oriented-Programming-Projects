#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_3(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Pawn, 3, 3);
	sBoard.createChessPiece(Black, Rook, 6, 0);
	sBoard.createChessPiece(White, Bishop, 0, 0);
	sBoard.createChessPiece(Black, Bishop, 5, 4);
	sBoard.createChessPiece(Black, Pawn, 6, 7);
	sBoard.createChessPiece(Black, Bishop, 4, 5);
	sBoard.createChessPiece(Black, Rook, 1, 3);
	sBoard.createChessPiece(Black, Pawn, 5, 2);
	sBoard.createChessPiece(Black, King, 5, 3);
	sBoard.createChessPiece(White, King, 3, 7);
	sBoard.movePiece(3,7,4,6);
	sBoard.movePiece(4,5,5,6);
	sBoard.movePiece(4,6,3,7);
	sBoard.movePiece(5,4,4,3);
	sBoard.movePiece(2,1,2,7);
	sBoard.movePiece(3,7,2,7);
	sBoard.movePiece(5,6,1,2);
	sBoard.movePiece(0,0,2,2);
	sBoard.movePiece(5,3,6,4);
	sBoard.movePiece(3,7,7,3);
	sBoard.movePiece(2,7,3,7);
	sBoard.movePiece(1,2,3,4);
	sBoard.movePiece(3,7,4,7);
	sBoard.movePiece(4,3,3,2);
	sBoard.movePiece(0,4,3,6);
	sBoard.movePiece(4,7,3,6);
	sBoard.movePiece(3,4,0,7);
	sBoard.movePiece(2,2,1,3);
	sBoard.movePiece(6,4,7,5);
	sBoard.movePiece(2,6,2,4);
	sBoard.movePiece(3,6,3,5);
	sBoard.movePiece(6,0,6,2);
	sBoard.movePiece(1,3,4,0);
	sBoard.movePiece(3,2,4,1);
	sBoard.movePiece(3,2,2,6);
	sBoard.movePiece(3,3,2,3);
	sBoard.movePiece(6,2,6,1);
	sBoard.movePiece(2,3,1,3);
	sBoard.movePiece(0,7,3,4);
	sBoard.movePiece(3,7,6,6);
	sBoard.movePiece(3,5,3,4);
	sBoard.movePiece(6,1,6,3);
	sBoard.movePiece(4,0,6,2);
	sBoard.movePiece(6,3,7,3);
	sBoard.movePiece(4,7,7,5);
	sBoard.movePiece(6,2,5,1);
	sBoard.movePiece(7,3,2,3);
	sBoard.movePiece(5,1,2,4);
	sBoard.movePiece(5,2,6,2);
	sBoard.movePiece(4,3,2,0);
	sBoard.movePiece(3,4,2,5);
	sBoard.movePiece(4,1,3,2);
	sBoard.movePiece(2,5,3,6);
	sBoard.movePiece(2,3,4,3);
	sBoard.movePiece(6,7,3,4);
	sBoard.movePiece(2,4,0,6);
	sBoard.movePiece(6,7,7,7);
	sBoard.movePiece(3,6,3,5);
	sBoard.movePiece(4,3,4,4);
	sBoard.movePiece(0,5,1,0);
	sBoard.movePiece(0,6,2,4);
	sBoard.movePiece(3,2,5,0);
	sBoard.movePiece(3,5,3,6);
	sBoard.movePiece(5,0,4,1);
	sBoard.movePiece(1,3,3,3);
	sBoard.movePiece(1,3,0,3);
	sBoard.movePiece(4,4,4,7);
	sBoard.movePiece(3,6,4,7);
	sBoard.movePiece(4,1,5,2);
	sBoard.movePiece(4,7,2,1);
	sBoard.movePiece(2,4,0,2);
	sBoard.movePiece(5,2,4,1);
	sBoard.movePiece(4,7,4,6);
	sBoard.movePiece(4,1,5,2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
