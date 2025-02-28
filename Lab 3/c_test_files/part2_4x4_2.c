#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_4x4_2(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(White, Bishop, 2, 2);
	sBoard.createChessPiece(White, Rook, 1, 0);
	sBoard.createChessPiece(White, Pawn, 1, 1);
	sBoard.createChessPiece(Black, Pawn, 0, 1);
	sBoard.movePiece(1,0,3,0);
	sBoard.movePiece(0,1,1,1);
	sBoard.movePiece(2,2,3,3);
	sBoard.movePiece(1,1,2,1);
	sBoard.movePiece(2,3,0,3);
	sBoard.movePiece(3,0,3,2);
	sBoard.movePiece(2,1,3,1);
	sBoard.movePiece(3,2,2,2);
	sBoard.movePiece(0,0,3,2);
	sBoard.movePiece(2,0,0,2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
