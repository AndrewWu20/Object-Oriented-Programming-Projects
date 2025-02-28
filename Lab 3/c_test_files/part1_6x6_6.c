#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_6x6_6(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(White, Rook, 4, 3);
	sBoard.createChessPiece(White, Pawn, 3, 5);
	sBoard.createChessPiece(White, Rook, 3, 1);
	sBoard.createChessPiece(Black, Pawn, 5, 3);
	sBoard.createChessPiece(White, Pawn, 4, 5);
	sBoard.createChessPiece(Black, Pawn, 4, 3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
