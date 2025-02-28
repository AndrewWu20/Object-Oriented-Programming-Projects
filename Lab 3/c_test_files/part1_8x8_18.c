#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_18(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Bishop, 2, 7);
	sBoard.createChessPiece(White, Pawn, 0, 5);
	sBoard.createChessPiece(Black, Pawn, 7, 6);
	sBoard.createChessPiece(Black, Rook, 2, 4);
	sBoard.createChessPiece(White, Rook, 2, 1);
	sBoard.createChessPiece(Black, Bishop, 2, 7);
	sBoard.createChessPiece(Black, Rook, 5, 3);
	sBoard.createChessPiece(Black, Bishop, 2, 6);
	sBoard.createChessPiece(White, Rook, 5, 5);
	sBoard.createChessPiece(White, Rook, 2, 2);
	sBoard.createChessPiece(Black, Pawn, 1, 5);
	sBoard.createChessPiece(Black, Bishop, 2, 7);
	sBoard.createChessPiece(Black, Bishop, 0, 1);
	sBoard.createChessPiece(Black, Rook, 0, 3);
	sBoard.createChessPiece(Black, Bishop, 6, 1);
	sBoard.createChessPiece(Black, Rook, 7, 0);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
