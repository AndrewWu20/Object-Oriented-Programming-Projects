#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_7(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Pawn, 3, 1);
	sBoard.createChessPiece(Black, Bishop, 7, 3);
	sBoard.createChessPiece(White, Rook, 0, 4);
	sBoard.createChessPiece(Black, Rook, 5, 2);
	sBoard.createChessPiece(Black, Bishop, 0, 2);
	sBoard.createChessPiece(White, Bishop, 1, 5);
	sBoard.createChessPiece(Black, Pawn, 4, 7);
	sBoard.createChessPiece(Black, Pawn, 2, 3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
