#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_5(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Rook, 5, 7);
	sBoard.createChessPiece(Black, Pawn, 1, 1);
	sBoard.createChessPiece(White, Pawn, 2, 3);
	sBoard.createChessPiece(Black, Pawn, 0, 7);
	sBoard.createChessPiece(Black, Bishop, 7, 3);
	sBoard.createChessPiece(Black, Bishop, 4, 3);
	sBoard.createChessPiece(Black, Rook, 4, 3);
	sBoard.createChessPiece(White, Pawn, 6, 3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
