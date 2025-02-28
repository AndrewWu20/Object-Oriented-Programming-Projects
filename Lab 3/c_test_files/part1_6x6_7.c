#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part1_6x6_7(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(Black, Bishop, 3, 5);
	sBoard.createChessPiece(Black, Bishop, 4, 5);
	sBoard.createChessPiece(Black, Rook, 0, 5);
	sBoard.createChessPiece(White, Pawn, 2, 3);
	sBoard.createChessPiece(Black, Pawn, 5, 4);
	sBoard.createChessPiece(White, Rook, 1, 2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
