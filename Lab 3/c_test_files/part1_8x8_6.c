#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_6(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Pawn, 3, 0);
	sBoard.createChessPiece(White, Rook, 1, 6);
	sBoard.createChessPiece(Black, Rook, 2, 4);
	sBoard.createChessPiece(White, Bishop, 3, 0);
	sBoard.createChessPiece(White, Rook, 3, 5);
	sBoard.createChessPiece(White, Rook, 0, 7);
	sBoard.createChessPiece(Black, Rook, 3, 7);
	sBoard.createChessPiece(White, Rook, 2, 3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
