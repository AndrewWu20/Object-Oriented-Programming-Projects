#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_4x4_7(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(Black, Pawn, 2, 2);
	sBoard.createChessPiece(Black, Rook, 3, 2);
	sBoard.createChessPiece(White, Pawn, 3, 1);
	sBoard.createChessPiece(Black, Pawn, 1, 0);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
