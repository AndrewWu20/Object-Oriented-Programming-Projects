#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_6(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Pawn, 4, 1);
	sBoard.createChessPiece(Black, Rook, 5, 6);
	sBoard.createChessPiece(Black, Bishop, 4, 2);
	sBoard.createChessPiece(Black, Rook, 4, 0);
	sBoard.createChessPiece(White, Rook, 2, 2);
	sBoard.createChessPiece(White, Rook, 3, 0);
	sBoard.createChessPiece(Black, Rook, 1, 3);
	sBoard.createChessPiece(Black, Pawn, 6, 3);
	sBoard.createChessPiece(Black, King, 4, 7);
	sBoard.createChessPiece(White, King, 2, 1);
	sBoard.movePiece(2,2,2,3);
	sBoard.movePiece(1,3,1,1);
	sBoard.movePiece(2,1,3,2);
	sBoard.movePiece(4,0,5,0);
	sBoard.movePiece(7,2,6,2);
	sBoard.movePiece(2,3,2,4);
	sBoard.movePiece(5,6,5,3);
	sBoard.movePiece(2,4,2,2);
	sBoard.movePiece(5,3,4,3);
	sBoard.movePiece(1,2,0,6);
	sBoard.movePiece(3,0,1,0);
	sBoard.movePiece(4,2,6,4);
	sBoard.movePiece(2,2,2,0);
	sBoard.movePiece(6,4,7,3);
	sBoard.movePiece(0,3,6,4);
	sBoard.movePiece(1,0,0,0);
	sBoard.movePiece(5,0,5,6);
	sBoard.movePiece(2,0,2,6);
	sBoard.movePiece(4,7,3,7);
	sBoard.movePiece(6,5,3,3);
	sBoard.movePiece(2,6,5,6);
	sBoard.movePiece(1,1,1,7);
	sBoard.movePiece(0,0,0,2);
	sBoard.movePiece(4,3,4,6);
	sBoard.movePiece(3,4,2,7);
	sBoard.movePiece(0,2,0,3);
	sBoard.movePiece(4,6,1,6);
	sBoard.movePiece(0,3,3,3);
	sBoard.movePiece(1,6,3,6);
	sBoard.movePiece(3,3,1,4);
	sBoard.movePiece(5,6,5,1);
	sBoard.movePiece(3,6,3,3);
	sBoard.movePiece(3,2,3,3);
	sBoard.movePiece(1,7,1,2);
	sBoard.movePiece(1,1,5,6);
	sBoard.movePiece(5,1,5,4);
	sBoard.movePiece(3,7,4,7);
	sBoard.movePiece(3,3,4,4);
	sBoard.movePiece(7,3,3,7);
	sBoard.movePiece(7,3,6,5);
	sBoard.movePiece(4,4,5,3);
	sBoard.movePiece(1,2,7,2);
	sBoard.movePiece(5,4,1,4);
	sBoard.movePiece(4,7,5,7);
	sBoard.movePiece(4,7,6,1);
	sBoard.movePiece(1,4,1,0);
	sBoard.movePiece(7,2,7,5);
	sBoard.movePiece(5,3,6,2);
	sBoard.movePiece(7,5,4,5);
	sBoard.movePiece(1,1,2,5);
	sBoard.movePiece(6,2,7,1);
	sBoard.movePiece(3,7,4,6);
	sBoard.movePiece(1,0,1,5);
	sBoard.movePiece(4,6,6,4);
	sBoard.movePiece(3,4,1,0);
	sBoard.movePiece(1,5,1,3);
	sBoard.movePiece(4,5,4,7);
	sBoard.movePiece(7,1,6,0);
	sBoard.movePiece(6,4,2,0);
	sBoard.movePiece(4,0,3,7);
	sBoard.movePiece(6,0,7,1);
	sBoard.movePiece(5,7,6,7);
	sBoard.movePiece(7,1,6,2);
	sBoard.movePiece(4,1,5,1);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
