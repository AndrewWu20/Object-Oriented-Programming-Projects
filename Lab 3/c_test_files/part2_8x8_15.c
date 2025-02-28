#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_15(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Pawn, 4, 5);
	sBoard.createChessPiece(White, Rook, 3, 3);
	sBoard.createChessPiece(Black, Pawn, 5, 5);
	sBoard.createChessPiece(Black, Rook, 2, 5);
	sBoard.createChessPiece(Black, Pawn, 2, 5);
	sBoard.createChessPiece(White, Rook, 7, 5);
	sBoard.createChessPiece(White, Pawn, 0, 4);
	sBoard.createChessPiece(White, Bishop, 5, 3);
	sBoard.movePiece(5,3,4,4);
	sBoard.movePiece(2,5,3,5);
	sBoard.movePiece(4,4,6,2);
	sBoard.movePiece(5,5,6,5);
	sBoard.movePiece(4,7,0,6);
	sBoard.movePiece(3,3,2,3);
	sBoard.movePiece(5,0,5,3);
	sBoard.movePiece(6,6,4,3);
	sBoard.movePiece(0,6,3,7);
	sBoard.movePiece(6,4,3,5);
	sBoard.movePiece(3,2,5,2);
	sBoard.movePiece(4,0,6,1);
	sBoard.movePiece(2,6,0,2);
	sBoard.movePiece(7,2,4,4);
	sBoard.movePiece(7,7,7,2);
	sBoard.movePiece(5,3,3,4);
	sBoard.movePiece(0,5,3,2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
