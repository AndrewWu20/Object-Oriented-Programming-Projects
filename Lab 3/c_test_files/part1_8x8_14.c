#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_14(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Bishop, 0, 1);
	sBoard.createChessPiece(White, Bishop, 6, 4);
	sBoard.createChessPiece(White, Pawn, 2, 5);
	sBoard.createChessPiece(Black, Bishop, 1, 5);
	sBoard.createChessPiece(White, Pawn, 2, 4);
	sBoard.createChessPiece(White, Rook, 7, 4);
	sBoard.createChessPiece(Black, Rook, 2, 0);
	sBoard.createChessPiece(Black, Rook, 6, 3);
	sBoard.createChessPiece(Black, Bishop, 4, 3);
	sBoard.createChessPiece(Black, Bishop, 7, 1);
	sBoard.createChessPiece(Black, Rook, 7, 5);
	sBoard.createChessPiece(White, Rook, 3, 3);
	sBoard.createChessPiece(White, Bishop, 7, 2);
	sBoard.createChessPiece(White, Rook, 6, 0);
	sBoard.createChessPiece(Black, Bishop, 0, 7);
	sBoard.createChessPiece(Black, Pawn, 2, 4);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
