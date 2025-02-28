#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_6x6_5(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(Black, Pawn, 4, 0);
	sBoard.createChessPiece(Black, Rook, 3, 4);
	sBoard.createChessPiece(White, Pawn, 5, 3);
	sBoard.createChessPiece(Black, Pawn, 3, 0);
	sBoard.createChessPiece(Black, Rook, 1, 2);
	sBoard.createChessPiece(Black, Pawn, 3, 5);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
