#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_6x6_4(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(Black, Bishop, 0, 3);
	sBoard.createChessPiece(White, Pawn, 2, 2);
	sBoard.createChessPiece(Black, Pawn, 1, 0);
	sBoard.createChessPiece(White, Pawn, 2, 0);
	sBoard.createChessPiece(Black, Bishop, 2, 1);
	sBoard.createChessPiece(White, Rook, 2, 0);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
