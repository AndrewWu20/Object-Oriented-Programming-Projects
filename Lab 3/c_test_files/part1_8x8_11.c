#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_11(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Bishop, 0, 2);
	sBoard.createChessPiece(Black, Pawn, 6, 6);
	sBoard.createChessPiece(White, Rook, 1, 5);
	sBoard.createChessPiece(Black, Pawn, 4, 6);
	sBoard.createChessPiece(White, Bishop, 4, 2);
	sBoard.createChessPiece(Black, Rook, 5, 1);
	sBoard.createChessPiece(Black, Pawn, 5, 2);
	sBoard.createChessPiece(Black, Pawn, 0, 5);
	sBoard.createChessPiece(White, Pawn, 7, 0);
	sBoard.createChessPiece(White, Rook, 6, 5);
	sBoard.createChessPiece(Black, Rook, 3, 4);
	sBoard.createChessPiece(White, Rook, 2, 6);
	sBoard.createChessPiece(White, Rook, 0, 2);
	sBoard.createChessPiece(Black, Bishop, 4, 1);
	sBoard.createChessPiece(Black, Bishop, 3, 4);
	sBoard.createChessPiece(White, Rook, 1, 2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
