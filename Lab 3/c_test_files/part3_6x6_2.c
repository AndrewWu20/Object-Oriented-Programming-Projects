#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_6x6_2(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(White, Pawn, 4, 3);
	sBoard.createChessPiece(Black, Bishop, 0, 3);
	sBoard.createChessPiece(Black, Pawn, 2, 3);
	sBoard.createChessPiece(White, Bishop, 3, 2);
	sBoard.createChessPiece(Black, Bishop, 0, 2);
	sBoard.createChessPiece(Black, Rook, 3, 5);
	sBoard.createChessPiece(Black, King, 0, 0);
	sBoard.createChessPiece(White, King, 4, 0);
	sBoard.movePiece(3,2,5,0);
	sBoard.movePiece(3,5,3,1);
	sBoard.movePiece(4,0,3,1);
	sBoard.movePiece(0,0,0,1);
	sBoard.movePiece(4,1,1,4);
	sBoard.movePiece(3,1,4,1);
	sBoard.movePiece(0,1,1,1);
	sBoard.movePiece(4,1,5,1);
	sBoard.movePiece(0,2,2,4);
	sBoard.movePiece(3,5,0,2);
	sBoard.movePiece(5,1,4,0);
	sBoard.movePiece(0,3,1,2);
	sBoard.movePiece(5,0,3,2);
	sBoard.movePiece(1,1,0,2);
	sBoard.movePiece(3,5,2,0);
	sBoard.movePiece(3,2,2,3);
	sBoard.movePiece(2,4,3,3);
	sBoard.movePiece(2,3,0,5);
	sBoard.movePiece(1,2,0,3);
	sBoard.movePiece(5,5,3,3);
	sBoard.movePiece(0,5,5,0);
	sBoard.movePiece(0,3,1,4);
	sBoard.movePiece(5,0,3,2);
	sBoard.movePiece(3,3,1,1);
	sBoard.movePiece(3,3,3,4);
	sBoard.movePiece(3,2,4,1);
	sBoard.movePiece(0,2,0,3);
	sBoard.movePiece(4,3,3,3);
	sBoard.movePiece(0,3,1,3);
	sBoard.movePiece(5,0,3,3);
	sBoard.movePiece(4,1,5,2);
	sBoard.movePiece(1,1,2,0);
	sBoard.movePiece(5,2,4,3);
	sBoard.movePiece(2,0,4,2);
	sBoard.movePiece(2,3,5,2);
	sBoard.movePiece(4,3,2,1);
	sBoard.movePiece(1,4,2,5);
	sBoard.movePiece(2,1,5,4);
	sBoard.movePiece(2,5,5,2);
	sBoard.movePiece(3,3,4,1);
	sBoard.movePiece(5,4,3,2);
	sBoard.movePiece(5,2,4,1);
	sBoard.movePiece(3,3,2,3);
	sBoard.movePiece(4,1,5,0);
	sBoard.movePiece(0,3,1,2);
	sBoard.movePiece(3,2,5,4);
	sBoard.movePiece(5,0,4,1);
	sBoard.movePiece(5,4,4,5);
	sBoard.movePiece(1,3,2,4);
	sBoard.movePiece(3,0,0,5);
	sBoard.movePiece(2,3,1,3);
	sBoard.movePiece(4,1,5,0);
	sBoard.movePiece(4,5,1,2);
	sBoard.movePiece(2,4,3,5);
	sBoard.movePiece(2,5,3,2);
	sBoard.movePiece(1,2,2,3);
	sBoard.movePiece(4,2,3,3);
	sBoard.movePiece(2,3,4,5);
	sBoard.movePiece(3,3,1,5);
	sBoard.movePiece(4,3,0,1);
	sBoard.movePiece(4,5,0,1);
	sBoard.movePiece(3,5,2,4);
	sBoard.movePiece(4,0,5,1);
	sBoard.movePiece(5,0,0,5);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
