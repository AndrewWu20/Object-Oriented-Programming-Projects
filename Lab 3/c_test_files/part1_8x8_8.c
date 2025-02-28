#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_8(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Pawn, 4, 6);
	sBoard.createChessPiece(White, Pawn, 2, 2);
	sBoard.createChessPiece(White, Bishop, 6, 0);
	sBoard.createChessPiece(Black, Pawn, 3, 4);
	sBoard.createChessPiece(White, Bishop, 6, 4);
	sBoard.createChessPiece(Black, Rook, 2, 0);
	sBoard.createChessPiece(White, Rook, 7, 2);
	sBoard.createChessPiece(Black, Pawn, 5, 2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
