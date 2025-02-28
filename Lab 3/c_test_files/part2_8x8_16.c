#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_16(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Pawn, 3, 4);
	sBoard.createChessPiece(Black, Bishop, 1, 4);
	sBoard.createChessPiece(White, Pawn, 2, 2);
	sBoard.createChessPiece(White, Pawn, 5, 4);
	sBoard.createChessPiece(White, Pawn, 3, 1);
	sBoard.createChessPiece(White, Bishop, 4, 0);
	sBoard.createChessPiece(White, Pawn, 3, 6);
	sBoard.createChessPiece(White, Pawn, 1, 7);
	sBoard.movePiece(3,1,2,1);
	sBoard.movePiece(1,4,2,5);
	sBoard.movePiece(3,4,2,5);
	sBoard.movePiece(5,6,5,5);
	sBoard.movePiece(5,2,3,7);
	sBoard.movePiece(2,2,5,4);
	sBoard.movePiece(4,0,4,3);
	sBoard.movePiece(5,1,5,1);
	sBoard.movePiece(5,2,3,7);
	sBoard.movePiece(0,7,1,6);
	sBoard.movePiece(6,7,3,6);
	sBoard.movePiece(5,3,0,4);
	sBoard.movePiece(5,3,5,2);
	sBoard.movePiece(0,2,1,4);
	sBoard.movePiece(0,3,1,4);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
