#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_4x4_1(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(White, Rook, 3, 2);
	sBoard.createChessPiece(Black, Bishop, 1, 3);
	sBoard.createChessPiece(Black, Rook, 1, 1);
	sBoard.createChessPiece(White, Rook, 2, 3);
	sBoard.movePiece(3,2,3,1);
	sBoard.movePiece(1,1,1,2);
	sBoard.movePiece(2,3,2,1);
	sBoard.movePiece(1,2,0,2);
	sBoard.movePiece(0,0,2,3);
	sBoard.movePiece(2,1,0,1);
	sBoard.movePiece(1,3,2,2);
	sBoard.movePiece(3,1,3,0);
	sBoard.movePiece(2,2,3,1);
	sBoard.movePiece(0,2,1,0);
	sBoard.movePiece(3,0,3,1);
	sBoard.movePiece(0,2,2,2);
	sBoard.movePiece(3,1,3,0);
	sBoard.movePiece(2,2,1,2);
	sBoard.movePiece(1,1,2,3);
	sBoard.movePiece(3,0,0,0);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
