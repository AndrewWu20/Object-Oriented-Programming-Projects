#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_4x4_6(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(Black, Pawn, 3, 0);
	sBoard.createChessPiece(White, Pawn, 0, 0);
	sBoard.createChessPiece(Black, Bishop, 2, 3);
	sBoard.createChessPiece(White, Rook, 0, 0);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
