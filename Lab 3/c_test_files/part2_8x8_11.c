#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_11(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Bishop, 4, 4);
	sBoard.createChessPiece(Black, Pawn, 7, 5);
	sBoard.createChessPiece(White, Pawn, 0, 2);
	sBoard.createChessPiece(White, Bishop, 0, 6);
	sBoard.createChessPiece(White, Pawn, 3, 0);
	sBoard.createChessPiece(White, Bishop, 2, 5);
	sBoard.createChessPiece(Black, Bishop, 2, 7);
	sBoard.createChessPiece(Black, Pawn, 1, 3);
	sBoard.movePiece(4,4,2,6);
	sBoard.movePiece(1,3,2,3);
	sBoard.movePiece(2,6,3,5);
	sBoard.movePiece(2,7,6,3);
	sBoard.movePiece(4,4,6,1);
	sBoard.movePiece(3,5,6,2);
	sBoard.movePiece(6,3,7,2);
	sBoard.movePiece(2,5,3,6);
	sBoard.movePiece(7,2,4,5);
	sBoard.movePiece(1,7,1,0);
	sBoard.movePiece(3,6,1,4);
	sBoard.movePiece(4,5,6,3);
	sBoard.movePiece(3,0,2,0);
	sBoard.movePiece(6,3,7,4);
	sBoard.movePiece(3,5,4,3);
	sBoard.movePiece(0,6,4,2);
	sBoard.movePiece(7,4,6,5);
	sBoard.movePiece(4,2,6,4);
	sBoard.movePiece(6,5,7,6);
	sBoard.movePiece(0,7,3,1);
	sBoard.movePiece(6,4,7,3);
	sBoard.movePiece(2,3,3,3);
	sBoard.movePiece(1,4,2,5);
	sBoard.movePiece(7,6,1,0);
	sBoard.movePiece(5,4,5,0);
	sBoard.movePiece(2,5,4,7);
	sBoard.movePiece(1,0,3,2);
	sBoard.movePiece(4,7,3,6);
	sBoard.movePiece(3,2,2,1);
	sBoard.movePiece(4,7,3,4);
	sBoard.movePiece(7,3,6,4);
	sBoard.movePiece(2,1,5,4);
	sBoard.movePiece(3,6,2,5);
	sBoard.movePiece(5,4,2,1);
	sBoard.movePiece(5,6,0,6);
	sBoard.movePiece(6,4,4,6);
	sBoard.movePiece(2,1,3,0);
	sBoard.movePiece(2,5,1,6);
	sBoard.movePiece(3,0,6,3);
	sBoard.movePiece(1,3,7,7);
	sBoard.movePiece(4,6,3,7);
	sBoard.movePiece(6,3,4,1);
	sBoard.movePiece(6,2,5,3);
	sBoard.movePiece(3,3,4,3);
	sBoard.movePiece(6,2,6,5);
	sBoard.movePiece(1,6,4,3);
	sBoard.movePiece(4,1,6,3);
	sBoard.movePiece(5,3,4,2);
	sBoard.movePiece(6,3,3,0);
	sBoard.movePiece(0,2,2,3);
	sBoard.movePiece(3,7,4,6);
	sBoard.movePiece(3,0,5,2);
	sBoard.movePiece(4,2,3,1);
	sBoard.movePiece(5,2,3,0);
	sBoard.movePiece(4,2,3,1);
	sBoard.movePiece(4,3,7,6);
	sBoard.movePiece(3,0,1,2);
	sBoard.movePiece(7,6,1,0);
	sBoard.movePiece(1,2,0,1);
	sBoard.movePiece(4,1,7,7);
	sBoard.movePiece(1,0,5,4);
	sBoard.movePiece(0,1,5,6);
	sBoard.movePiece(5,4,3,2);
	sBoard.movePiece(5,6,4,5);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
