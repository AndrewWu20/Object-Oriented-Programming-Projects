#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_4x4_5(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(Black, Pawn, 0, 2);
	sBoard.createChessPiece(White, Bishop, 2, 1);
	sBoard.createChessPiece(White, Rook, 1, 3);
	sBoard.createChessPiece(White, Rook, 1, 0);
	sBoard.createChessPiece(Black, King, 1, 0);
	sBoard.createChessPiece(White, King, 3, 2);
	sBoard.movePiece(1,3,2,3);
	sBoard.movePiece(1,0,1,1);
	sBoard.movePiece(2,1,0,3);
	sBoard.movePiece(0,2,1,2);
	sBoard.movePiece(2,3,2,3);
	sBoard.movePiece(2,3,3,3);
	sBoard.movePiece(1,1,0,2);
	sBoard.movePiece(3,2,2,2);
	sBoard.movePiece(0,2,0,1);
	sBoard.movePiece(3,3,1,1);
	sBoard.movePiece(3,3,3,1);
	sBoard.movePiece(0,1,0,0);
	sBoard.movePiece(2,2,1,3);
	sBoard.movePiece(1,2,3,2);
	sBoard.movePiece(0,2,2,1);
	sBoard.movePiece(3,1,2,1);
	sBoard.movePiece(0,0,1,0);
	sBoard.movePiece(2,1,2,0);
	sBoard.movePiece(1,0,1,1);
	sBoard.movePiece(0,2,3,0);
	sBoard.movePiece(2,0,2,3);
	sBoard.movePiece(1,1,1,0);
	sBoard.movePiece(2,3,2,2);
	sBoard.movePiece(1,0,1,1);
	sBoard.movePiece(3,0,2,2);
	sBoard.movePiece(0,3,1,2);
	sBoard.movePiece(1,1,1,0);
	sBoard.movePiece(2,2,2,1);
	sBoard.movePiece(1,0,0,0);
	sBoard.movePiece(0,2,3,2);
	sBoard.movePiece(2,1,2,3);
	sBoard.movePiece(0,0,1,1);
	sBoard.movePiece(2,3,2,0);
	sBoard.movePiece(1,1,2,0);
	sBoard.movePiece(2,0,1,3);
	sBoard.movePiece(1,3,2,3);
	sBoard.movePiece(2,0,1,0);
	sBoard.movePiece(1,2,0,1);
	sBoard.movePiece(1,0,0,0);
	sBoard.movePiece(3,0,3,2);
	sBoard.movePiece(2,3,1,2);
	sBoard.movePiece(3,2,3,2);
	sBoard.movePiece(2,1,2,3);
	sBoard.movePiece(2,3,3,0);
	sBoard.movePiece(3,2,2,1);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
