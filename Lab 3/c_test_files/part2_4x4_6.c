#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_4x4_6(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(White, Bishop, 1, 1);
	sBoard.createChessPiece(White, Bishop, 3, 1);
	sBoard.createChessPiece(White, Bishop, 0, 1);
	sBoard.createChessPiece(White, Pawn, 1, 2);
	sBoard.movePiece(1,1,2,2);
	sBoard.movePiece(1,0,2,0);
	sBoard.movePiece(1,0,1,3);
	sBoard.movePiece(1,2,1,0);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
