#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_4x4_1(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(White, Rook, 3, 2);
	sBoard.createChessPiece(Black, Bishop, 1, 3);
	sBoard.createChessPiece(Black, Rook, 1, 1);
	sBoard.createChessPiece(White, Rook, 2, 3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
