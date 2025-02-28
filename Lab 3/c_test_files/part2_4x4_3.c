#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_4x4_3(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(White, Bishop, 0, 1);
	sBoard.createChessPiece(Black, Pawn, 0, 3);
	sBoard.createChessPiece(White, Pawn, 2, 1);
	sBoard.createChessPiece(Black, Bishop, 0, 3);
	sBoard.movePiece(0,1,2,3);
	sBoard.movePiece(0,3,2,1);
	sBoard.movePiece(2,3,3,2);
	sBoard.movePiece(2,1,3,2);
	sBoard.movePiece(1,2,2,3);
	sBoard.movePiece(2,1,1,2);
	sBoard.movePiece(2,0,3,3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
