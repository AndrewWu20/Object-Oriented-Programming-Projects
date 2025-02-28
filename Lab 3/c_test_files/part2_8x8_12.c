#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_12(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Pawn, 4, 4);
	sBoard.createChessPiece(White, Bishop, 2, 7);
	sBoard.createChessPiece(Black, Bishop, 5, 7);
	sBoard.createChessPiece(White, Rook, 4, 6);
	sBoard.createChessPiece(White, Pawn, 4, 5);
	sBoard.createChessPiece(Black, Bishop, 4, 7);
	sBoard.createChessPiece(White, Bishop, 0, 6);
	sBoard.createChessPiece(White, Pawn, 0, 1);
	sBoard.movePiece(4,6,3,6);
	sBoard.movePiece(5,7,0,2);
	sBoard.movePiece(0,6,5,1);
	sBoard.movePiece(4,4,5,4);
	sBoard.movePiece(3,5,6,0);
	sBoard.movePiece(5,1,6,2);
	sBoard.movePiece(0,2,2,0);
	sBoard.movePiece(4,5,3,5);
	sBoard.movePiece(2,0,4,2);
	sBoard.movePiece(1,5,2,2);
	sBoard.movePiece(3,6,6,6);
	sBoard.movePiece(4,2,1,5);
	sBoard.movePiece(2,7,1,6);
	sBoard.movePiece(4,7,5,6);
	sBoard.movePiece(5,2,3,7);
	sBoard.movePiece(6,6,6,5);
	sBoard.movePiece(5,6,3,4);
	sBoard.movePiece(6,2,7,1);
	sBoard.movePiece(1,5,0,6);
	sBoard.movePiece(5,1,0,7);
	sBoard.movePiece(7,1,4,4);
	sBoard.movePiece(0,6,5,1);
	sBoard.movePiece(6,5,6,4);
	sBoard.movePiece(5,1,4,0);
	sBoard.movePiece(0,4,5,1);
	sBoard.movePiece(6,4,7,4);
	sBoard.movePiece(4,0,2,2);
	sBoard.movePiece(3,5,2,5);
	sBoard.movePiece(3,4,5,2);
	sBoard.movePiece(0,5,7,6);
	sBoard.movePiece(4,4,7,7);
	sBoard.movePiece(2,2,5,5);
	sBoard.movePiece(7,4,6,4);
	sBoard.movePiece(5,5,3,3);
	sBoard.movePiece(6,0,5,1);
	sBoard.movePiece(1,6,2,7);
	sBoard.movePiece(5,2,4,3);
	sBoard.movePiece(6,4,6,0);
	sBoard.movePiece(4,3,2,1);
	sBoard.movePiece(3,1,0,7);
	sBoard.movePiece(2,7,5,4);
	sBoard.movePiece(3,3,2,2);
	sBoard.movePiece(6,0,2,0);
	sBoard.movePiece(2,2,0,4);
	sBoard.movePiece(6,1,2,2);
	sBoard.movePiece(5,4,6,5);
	sBoard.movePiece(0,4,1,3);
	sBoard.movePiece(2,0,5,0);
	sBoard.movePiece(1,3,3,5);
	sBoard.movePiece(2,6,0,4);
	sBoard.movePiece(5,0,5,3);
	sBoard.movePiece(2,1,4,3);
	sBoard.movePiece(6,5,4,3);
	sBoard.movePiece(3,5,4,4);
	sBoard.movePiece(4,4,2,2);
	sBoard.movePiece(5,3,5,7);
	sBoard.movePiece(4,4,2,2);
	sBoard.movePiece(7,7,3,3);
	sBoard.movePiece(2,2,1,3);
	sBoard.movePiece(5,4,2,1);
	sBoard.movePiece(3,3,4,4);
	sBoard.movePiece(1,3,2,4);
	sBoard.movePiece(5,7,2,7);
	sBoard.movePiece(2,4,0,6);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
