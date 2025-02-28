#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_2(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Bishop, 6, 2);
	sBoard.createChessPiece(White, Rook, 1, 0);
	sBoard.createChessPiece(White, Pawn, 5, 5);
	sBoard.createChessPiece(Black, Pawn, 0, 1);
	sBoard.createChessPiece(White, Rook, 3, 2);
	sBoard.createChessPiece(Black, Bishop, 3, 4);
	sBoard.createChessPiece(Black, Rook, 6, 2);
	sBoard.createChessPiece(Black, Bishop, 1, 5);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
