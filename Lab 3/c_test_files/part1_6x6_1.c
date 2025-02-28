#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_6x6_1(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(White, Rook, 1, 4);
	sBoard.createChessPiece(Black, Bishop, 5, 1);
	sBoard.createChessPiece(Black, Rook, 3, 1);
	sBoard.createChessPiece(White, Rook, 2, 1);
	sBoard.createChessPiece(Black, Rook, 0, 0);
	sBoard.createChessPiece(White, Bishop, 5, 2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
