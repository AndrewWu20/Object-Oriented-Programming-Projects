#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_3(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Bishop, 0, 1);
	sBoard.createChessPiece(Black, Bishop, 1, 1);
	sBoard.createChessPiece(Black, Bishop, 6, 1);
	sBoard.createChessPiece(White, Pawn, 2, 4);
	sBoard.createChessPiece(Black, Pawn, 7, 0);
	sBoard.createChessPiece(White, Pawn, 4, 0);
	sBoard.createChessPiece(Black, Bishop, 2, 7);
	sBoard.createChessPiece(White, Rook, 4, 0);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
