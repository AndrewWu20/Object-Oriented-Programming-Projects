#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_6x6_7(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(White, Bishop, 5, 4);
	sBoard.createChessPiece(White, Rook, 5, 1);
	sBoard.createChessPiece(Black, Rook, 2, 4);
	sBoard.createChessPiece(Black, Bishop, 2, 2);
	sBoard.createChessPiece(White, Pawn, 2, 1);
	sBoard.createChessPiece(Black, Bishop, 5, 5);
	sBoard.createChessPiece(Black, King, 3, 4);
	sBoard.createChessPiece(White, King, 1, 5);
	sBoard.movePiece(5,1,5,2);
	sBoard.movePiece(2,2,4,4);
	sBoard.movePiece(5,4,4,3);
	sBoard.movePiece(3,4,4,3);
	sBoard.movePiece(3,1,1,5);
	sBoard.movePiece(5,2,1,2);
	sBoard.movePiece(4,4,1,1);
	sBoard.movePiece(1,5,0,5);
	sBoard.movePiece(4,3,4,4);
	sBoard.movePiece(1,0,3,0);
	sBoard.movePiece(1,2,5,2);
	sBoard.movePiece(4,4,3,3);
	sBoard.movePiece(0,5,1,5);
	sBoard.movePiece(1,1,0,0);
	sBoard.movePiece(0,3,3,3);
	sBoard.movePiece(5,2,5,4);
	sBoard.movePiece(3,3,4,2);
	sBoard.movePiece(5,4,3,4);
	sBoard.movePiece(0,0,1,1);
	sBoard.movePiece(5,3,1,1);
	sBoard.movePiece(3,4,4,4);
	sBoard.movePiece(4,2,5,3);
	sBoard.movePiece(4,4,4,1);
	sBoard.movePiece(2,4,2,1);
	sBoard.movePiece(2,4,1,0);
	sBoard.movePiece(1,5,1,4);
	sBoard.movePiece(1,1,0,2);
	sBoard.movePiece(1,4,0,4);
	sBoard.movePiece(5,5,2,2);
	sBoard.movePiece(4,0,5,4);
	sBoard.movePiece(0,4,1,4);
	sBoard.movePiece(5,3,5,2);
	sBoard.movePiece(1,4,1,5);
	sBoard.movePiece(2,2,1,3);
	sBoard.movePiece(4,0,1,1);
	sBoard.movePiece(4,1,3,1);
	sBoard.movePiece(5,2,4,3);
	sBoard.movePiece(3,1,3,2);
	sBoard.movePiece(1,3,3,1);
	sBoard.movePiece(1,5,4,4);
	sBoard.movePiece(1,5,0,5);
	sBoard.movePiece(2,1,1,1);
	sBoard.movePiece(3,2,3,5);
	sBoard.movePiece(4,3,5,3);
	sBoard.movePiece(0,4,0,4);
	sBoard.movePiece(3,5,5,5);
	sBoard.movePiece(5,3,4,4);
	sBoard.movePiece(5,5,5,2);
	sBoard.movePiece(3,1,1,3);
	sBoard.movePiece(1,3,3,1);
	sBoard.movePiece(5,2,5,4);
	sBoard.movePiece(4,4,3,5);
	sBoard.movePiece(5,4,5,0);
	sBoard.movePiece(3,5,3,4);
	sBoard.movePiece(2,1,2,5);
	sBoard.movePiece(0,5,1,5);
	sBoard.movePiece(3,4,2,3);
	sBoard.movePiece(5,0,5,2);
	sBoard.movePiece(1,3,2,4);
	sBoard.movePiece(3,2,5,2);
	sBoard.movePiece(1,5,2,5);
	sBoard.movePiece(1,1,2,1);
	sBoard.movePiece(5,2,1,2);
	sBoard.movePiece(2,4,4,2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
