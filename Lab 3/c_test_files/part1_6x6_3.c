#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_6x6_3(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(White, Rook, 5, 0);
	sBoard.createChessPiece(Black, Bishop, 1, 2);
	sBoard.createChessPiece(Black, Rook, 2, 2);
	sBoard.createChessPiece(Black, Bishop, 3, 3);
	sBoard.createChessPiece(Black, Bishop, 2, 5);
	sBoard.createChessPiece(Black, Bishop, 1, 5);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
