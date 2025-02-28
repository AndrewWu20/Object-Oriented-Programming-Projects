#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_4x4_2(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(Black, Rook, 3, 3);
	sBoard.createChessPiece(Black, Bishop, 0, 0);
	sBoard.createChessPiece(Black, Bishop, 3, 0);
	sBoard.createChessPiece(White, Rook, 2, 3);
	sBoard.createChessPiece(Black, King, 3, 1);
	sBoard.createChessPiece(White, King, 1, 0);
	sBoard.movePiece(2,3,2,0);
	sBoard.movePiece(3,3,0,3);
	sBoard.movePiece(2,0,2,2);
	sBoard.movePiece(0,0,1,1);
	sBoard.movePiece(2,1,2,1);
	sBoard.movePiece(2,2,3,2);
	sBoard.movePiece(3,1,3,2);
	sBoard.movePiece(1,0,1,1);
	sBoard.movePiece(3,2,2,3);
	sBoard.movePiece(3,3,2,1);
	sBoard.movePiece(1,1,1,0);
	sBoard.movePiece(0,3,0,2);
	sBoard.movePiece(1,0,2,0);
	sBoard.movePiece(3,0,0,3);
	sBoard.movePiece(2,1,3,0);
	sBoard.movePiece(2,0,3,1);
	sBoard.movePiece(0,3,1,2);
	sBoard.movePiece(3,1,2,0);
	sBoard.movePiece(2,3,3,3);
	sBoard.movePiece(3,0,1,2);
	sBoard.movePiece(2,0,1,0);
	sBoard.movePiece(1,2,2,1);
	sBoard.movePiece(1,0,2,1);
	sBoard.movePiece(0,2,3,2);
	sBoard.movePiece(1,2,0,2);
	sBoard.movePiece(2,1,2,0);
	sBoard.movePiece(3,2,1,2);
	sBoard.movePiece(2,0,3,1);
	sBoard.movePiece(1,2,2,2);
	sBoard.movePiece(0,0,3,2);
	sBoard.movePiece(3,1,3,0);
	sBoard.movePiece(3,3,3,2);
	sBoard.movePiece(1,2,1,0);
	sBoard.movePiece(2,3,3,1);
	sBoard.movePiece(0,1,3,3);
	sBoard.movePiece(0,2,0,3);
	sBoard.movePiece(0,1,3,2);
	sBoard.movePiece(2,2,2,0);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
