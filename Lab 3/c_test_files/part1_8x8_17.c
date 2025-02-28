#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_17(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Bishop, 0, 1);
	sBoard.createChessPiece(White, Bishop, 6, 1);
	sBoard.createChessPiece(Black, Rook, 3, 5);
	sBoard.createChessPiece(Black, Bishop, 5, 2);
	sBoard.createChessPiece(White, Pawn, 3, 2);
	sBoard.createChessPiece(White, Pawn, 7, 5);
	sBoard.createChessPiece(Black, Bishop, 7, 0);
	sBoard.createChessPiece(Black, Pawn, 5, 3);
	sBoard.createChessPiece(White, Pawn, 4, 3);
	sBoard.createChessPiece(White, Rook, 4, 1);
	sBoard.createChessPiece(White, Rook, 6, 1);
	sBoard.createChessPiece(Black, Rook, 4, 4);
	sBoard.createChessPiece(Black, Bishop, 6, 6);
	sBoard.createChessPiece(White, Rook, 3, 1);
	sBoard.createChessPiece(Black, Bishop, 1, 6);
	sBoard.createChessPiece(White, Bishop, 1, 7);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
