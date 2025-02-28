#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_10(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Rook, 2, 1);
	sBoard.createChessPiece(Black, Pawn, 3, 1);
	sBoard.createChessPiece(Black, Rook, 0, 2);
	sBoard.createChessPiece(Black, Pawn, 5, 7);
	sBoard.createChessPiece(White, Pawn, 7, 6);
	sBoard.createChessPiece(White, Bishop, 3, 5);
	sBoard.createChessPiece(White, Rook, 2, 2);
	sBoard.createChessPiece(Black, Pawn, 4, 7);
	sBoard.createChessPiece(Black, Rook, 0, 2);
	sBoard.createChessPiece(Black, Pawn, 4, 4);
	sBoard.createChessPiece(White, Bishop, 6, 2);
	sBoard.createChessPiece(White, Pawn, 2, 7);
	sBoard.createChessPiece(Black, Pawn, 5, 6);
	sBoard.createChessPiece(Black, Rook, 3, 3);
	sBoard.createChessPiece(Black, Bishop, 5, 3);
	sBoard.createChessPiece(Black, Rook, 2, 6);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
