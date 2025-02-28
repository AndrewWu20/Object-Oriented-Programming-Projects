#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_4(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Pawn, 2, 2);
	sBoard.createChessPiece(Black, Rook, 3, 2);
	sBoard.createChessPiece(White, Pawn, 3, 1);
	sBoard.createChessPiece(Black, Pawn, 5, 4);
	sBoard.createChessPiece(Black, Rook, 5, 0);
	sBoard.createChessPiece(Black, Pawn, 1, 1);
	sBoard.createChessPiece(White, Rook, 0, 1);
	sBoard.createChessPiece(White, Pawn, 1, 3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
