#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_12(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Rook, 2, 0);
	sBoard.createChessPiece(Black, Pawn, 6, 2);
	sBoard.createChessPiece(Black, Bishop, 6, 3);
	sBoard.createChessPiece(Black, Rook, 1, 1);
	sBoard.createChessPiece(White, Rook, 4, 3);
	sBoard.createChessPiece(White, Bishop, 4, 7);
	sBoard.createChessPiece(Black, Pawn, 4, 1);
	sBoard.createChessPiece(Black, Pawn, 4, 5);
	sBoard.createChessPiece(White, Pawn, 6, 5);
	sBoard.createChessPiece(White, Pawn, 7, 0);
	sBoard.createChessPiece(White, Pawn, 3, 5);
	sBoard.createChessPiece(Black, Rook, 7, 3);
	sBoard.createChessPiece(White, Rook, 6, 6);
	sBoard.createChessPiece(White, Rook, 5, 4);
	sBoard.createChessPiece(White, Rook, 5, 3);
	sBoard.createChessPiece(Black, Bishop, 1, 5);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
