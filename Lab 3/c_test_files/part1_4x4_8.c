#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_4x4_8(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(Black, Rook, 1, 0);
	sBoard.createChessPiece(Black, Pawn, 1, 1);
	sBoard.createChessPiece(White, Rook, 0, 1);
	sBoard.createChessPiece(White, Pawn, 1, 3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
