#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_8x8_9(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Rook, 1, 6);
	sBoard.createChessPiece(White, Bishop, 3, 1);
	sBoard.createChessPiece(White, Rook, 5, 7);
	sBoard.createChessPiece(Black, Bishop, 3, 2);
	sBoard.createChessPiece(Black, Bishop, 0, 0);
	sBoard.createChessPiece(White, Pawn, 4, 6);
	sBoard.createChessPiece(White, Pawn, 2, 0);
	sBoard.createChessPiece(Black, Pawn, 6, 2);
	sBoard.createChessPiece(White, Bishop, 0, 0);
	sBoard.createChessPiece(White, Bishop, 1, 2);
	sBoard.createChessPiece(Black, Rook, 1, 6);
	sBoard.createChessPiece(White, Rook, 1, 3);
	sBoard.createChessPiece(Black, Bishop, 3, 7);
	sBoard.createChessPiece(Black, Pawn, 6, 5);
	sBoard.createChessPiece(White, Bishop, 5, 5);
	sBoard.createChessPiece(White, Rook, 7, 2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
