#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_6x6_2(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(Black, Rook, 2, 2);
	sBoard.createChessPiece(White, Bishop, 1, 1);
	sBoard.createChessPiece(White, Bishop, 0, 0);
	sBoard.createChessPiece(White, Rook, 1, 4);
	sBoard.createChessPiece(White, Pawn, 3, 3);
	sBoard.createChessPiece(Black, Pawn, 2, 1);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
