#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_4x4_3(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(White, Bishop, 2, 2);
	sBoard.createChessPiece(White, Rook, 1, 0);
	sBoard.createChessPiece(White, Pawn, 1, 1);
	sBoard.createChessPiece(Black, Pawn, 0, 1);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
