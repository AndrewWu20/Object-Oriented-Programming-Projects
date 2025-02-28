#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_13(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Rook, 3, 7);
	sBoard.createChessPiece(Black, Bishop, 7, 0);
	sBoard.createChessPiece(White, Bishop, 5, 5);
	sBoard.createChessPiece(White, Pawn, 1, 5);
	sBoard.createChessPiece(Black, Bishop, 3, 2);
	sBoard.createChessPiece(Black, Bishop, 6, 3);
	sBoard.createChessPiece(White, Pawn, 7, 1);
	sBoard.createChessPiece(White, Rook, 7, 5);
	sBoard.createChessPiece(Black, Rook, 5, 2);
	sBoard.createChessPiece(White, Pawn, 2, 4);
	sBoard.createChessPiece(Black, Rook, 2, 6);
	sBoard.createChessPiece(Black, Rook, 3, 3);
	sBoard.createChessPiece(Black, Pawn, 6, 4);
	sBoard.createChessPiece(Black, Rook, 0, 2);
	sBoard.createChessPiece(White, Bishop, 4, 6);
	sBoard.createChessPiece(White, Rook, 3, 6);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
