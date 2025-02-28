#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_15(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Pawn, 7, 4);
	sBoard.createChessPiece(White, Pawn, 5, 4);
	sBoard.createChessPiece(Black, Bishop, 1, 5);
	sBoard.createChessPiece(White, Rook, 0, 3);
	sBoard.createChessPiece(Black, Rook, 6, 0);
	sBoard.createChessPiece(White, Bishop, 0, 0);
	sBoard.createChessPiece(Black, Rook, 7, 3);
	sBoard.createChessPiece(White, Rook, 7, 2);
	sBoard.createChessPiece(Black, Bishop, 6, 2);
	sBoard.createChessPiece(Black, Pawn, 6, 3);
	sBoard.createChessPiece(Black, Rook, 0, 5);
	sBoard.createChessPiece(White, Bishop, 0, 6);
	sBoard.createChessPiece(White, Pawn, 6, 7);
	sBoard.createChessPiece(White, Bishop, 7, 0);
	sBoard.createChessPiece(White, Bishop, 3, 6);
	sBoard.createChessPiece(Black, Pawn, 0, 2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
