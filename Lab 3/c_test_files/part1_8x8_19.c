#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_19(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Pawn, 5, 0);
	sBoard.createChessPiece(White, Rook, 2, 4);
	sBoard.createChessPiece(White, Bishop, 2, 6);
	sBoard.createChessPiece(Black, Pawn, 5, 3);
	sBoard.createChessPiece(White, Rook, 4, 3);
	sBoard.createChessPiece(Black, Bishop, 6, 6);
	sBoard.createChessPiece(Black, Rook, 7, 6);
	sBoard.createChessPiece(Black, Pawn, 7, 0);
	sBoard.createChessPiece(Black, Rook, 0, 3);
	sBoard.createChessPiece(Black, Bishop, 7, 6);
	sBoard.createChessPiece(White, Pawn, 4, 5);
	sBoard.createChessPiece(Black, Bishop, 0, 6);
	sBoard.createChessPiece(Black, Pawn, 1, 5);
	sBoard.createChessPiece(White, Rook, 3, 4);
	sBoard.createChessPiece(Black, Rook, 3, 7);
	sBoard.createChessPiece(Black, Pawn, 7, 2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
