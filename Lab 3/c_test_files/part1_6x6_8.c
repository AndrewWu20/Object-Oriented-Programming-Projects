#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_6x6_8(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(Black, Rook, 2, 4);
	sBoard.createChessPiece(White, Bishop, 5, 2);
	sBoard.createChessPiece(White, Rook, 5, 1);
	sBoard.createChessPiece(White, Rook, 4, 5);
	sBoard.createChessPiece(Black, Rook, 5, 5);
	sBoard.createChessPiece(White, Rook, 2, 1);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
