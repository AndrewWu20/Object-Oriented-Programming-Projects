#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_6x6_8(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(Black, Rook, 1, 3);
	sBoard.createChessPiece(White, Pawn, 1, 2);
	sBoard.createChessPiece(Black, Bishop, 0, 5);
	sBoard.createChessPiece(Black, Rook, 4, 0);
	sBoard.createChessPiece(White, Bishop, 5, 2);
	sBoard.createChessPiece(Black, Pawn, 2, 4);
	sBoard.movePiece(5,2,3,0);
	sBoard.movePiece(2,4,3,4);
	sBoard.movePiece(3,0,2,1);
	sBoard.movePiece(4,0,0,0);
	sBoard.movePiece(2,2,5,1);
	sBoard.movePiece(2,1,4,3);
	sBoard.movePiece(0,0,0,1);
	sBoard.movePiece(4,3,1,0);
	sBoard.movePiece(3,4,4,4);
	sBoard.movePiece(0,5,3,0);
	sBoard.movePiece(1,0,3,2);
	sBoard.movePiece(0,1,0,4);
	sBoard.movePiece(1,2,0,2);
	sBoard.movePiece(1,3,5,3);
	sBoard.movePiece(5,2,5,0);
	sBoard.movePiece(3,2,0,5);
	sBoard.movePiece(5,3,2,3);
	sBoard.movePiece(0,5,1,4);
	sBoard.movePiece(2,3,2,5);
	sBoard.movePiece(0,4,2,0);
	sBoard.movePiece(1,4,0,5);
	sBoard.movePiece(0,4,0,2);
	sBoard.movePiece(0,5,5,0);
	sBoard.movePiece(2,5,2,3);
	sBoard.movePiece(0,4,4,2);
	sBoard.movePiece(5,0,2,3);
	sBoard.movePiece(0,2,0,1);
	sBoard.movePiece(2,3,0,5);
	sBoard.movePiece(0,1,0,0);
	sBoard.movePiece(0,5,0,1);
	sBoard.movePiece(0,5,5,0);
	sBoard.movePiece(0,0,2,0);
	sBoard.movePiece(5,0,0,5);
	sBoard.movePiece(2,0,4,0);
	sBoard.movePiece(4,5,1,5);
	sBoard.movePiece(0,5,5,0);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
