#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_6x6_1(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(White, Rook, 1, 4);
	sBoard.createChessPiece(Black, Bishop, 5, 1);
	sBoard.createChessPiece(Black, Rook, 3, 1);
	sBoard.createChessPiece(White, Rook, 2, 1);
	sBoard.createChessPiece(Black, Rook, 0, 0);
	sBoard.createChessPiece(White, Bishop, 5, 2);
	sBoard.movePiece(1,4,1,0);
	sBoard.movePiece(3,1,3,2);
	sBoard.movePiece(2,1,2,0);
	sBoard.movePiece(3,2,3,5);
	sBoard.movePiece(2,2,3,1);
	sBoard.movePiece(1,0,1,1);
	sBoard.movePiece(5,1,4,2);
	sBoard.movePiece(1,1,1,2);
	sBoard.movePiece(0,0,2,0);
	sBoard.movePiece(4,5,2,5);
	sBoard.movePiece(1,2,1,3);
	sBoard.movePiece(3,5,3,4);
	sBoard.movePiece(1,3,1,0);
	sBoard.movePiece(2,0,3,0);
	sBoard.movePiece(5,1,2,3);
	sBoard.movePiece(5,2,4,1);
	sBoard.movePiece(3,0,3,3);
	sBoard.movePiece(1,0,5,0);
	sBoard.movePiece(3,4,1,4);
	sBoard.movePiece(3,2,4,5);
	sBoard.movePiece(5,0,5,5);
	sBoard.movePiece(1,4,1,0);
	sBoard.movePiece(4,1,3,0);
	sBoard.movePiece(4,2,5,1);
	sBoard.movePiece(2,0,4,5);
	sBoard.movePiece(5,5,3,5);
	sBoard.movePiece(3,3,3,2);
	sBoard.movePiece(3,5,4,5);
	sBoard.movePiece(3,2,3,3);
	sBoard.movePiece(3,0,2,2);
	sBoard.movePiece(4,5,4,2);
	sBoard.movePiece(3,3,3,2);
	sBoard.movePiece(3,0,2,1);
	sBoard.movePiece(3,2,1,2);
	sBoard.movePiece(3,4,5,4);
	sBoard.movePiece(2,1,1,2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
