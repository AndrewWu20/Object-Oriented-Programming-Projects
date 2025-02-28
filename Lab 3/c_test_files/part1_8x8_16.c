#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_16(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Pawn, 4, 4);
	sBoard.createChessPiece(White, Rook, 7, 3);
	sBoard.createChessPiece(Black, Pawn, 0, 7);
	sBoard.createChessPiece(White, Rook, 5, 1);
	sBoard.createChessPiece(White, Pawn, 1, 2);
	sBoard.createChessPiece(White, Pawn, 2, 2);
	sBoard.createChessPiece(White, Bishop, 0, 0);
	sBoard.createChessPiece(Black, Pawn, 2, 7);
	sBoard.createChessPiece(Black, Bishop, 3, 3);
	sBoard.createChessPiece(Black, Rook, 6, 5);
	sBoard.createChessPiece(Black, Rook, 4, 2);
	sBoard.createChessPiece(Black, Pawn, 4, 7);
	sBoard.createChessPiece(White, Pawn, 2, 1);
	sBoard.createChessPiece(Black, Rook, 3, 5);
	sBoard.createChessPiece(White, Pawn, 5, 1);
	sBoard.createChessPiece(White, Rook, 1, 5);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
