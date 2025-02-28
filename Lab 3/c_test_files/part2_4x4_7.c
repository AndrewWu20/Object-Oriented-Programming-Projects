#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_4x4_7(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(White, Bishop, 1, 3);
	sBoard.createChessPiece(White, Rook, 0, 0);
	sBoard.createChessPiece(White, Pawn, 1, 0);
	sBoard.createChessPiece(White, Rook, 1, 2);
	sBoard.movePiece(1,2,2,2);
	sBoard.movePiece(0,3,2,3);
	sBoard.movePiece(1,3,0,0);
	sBoard.movePiece(1,2,1,0);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
