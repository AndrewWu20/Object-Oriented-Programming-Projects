#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_1(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Rook, 7, 6);
	sBoard.createChessPiece(Black, Bishop, 1, 7);
	sBoard.createChessPiece(Black, Rook, 1, 5);
	sBoard.createChessPiece(White, Rook, 2, 3);
	sBoard.createChessPiece(Black, Rook, 4, 2);
	sBoard.createChessPiece(White, Bishop, 3, 0);
	sBoard.createChessPiece(Black, Rook, 6, 2);
	sBoard.createChessPiece(White, Bishop, 3, 7);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
