#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_4x4_2(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(Black, Rook, 0, 2);
	sBoard.createChessPiece(White, Bishop, 3, 0);
	sBoard.createChessPiece(Black, Rook, 2, 2);
	sBoard.createChessPiece(White, Bishop, 3, 3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
