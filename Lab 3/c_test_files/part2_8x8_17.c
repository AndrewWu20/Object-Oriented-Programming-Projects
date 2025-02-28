#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_17(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Bishop, 5, 5);
	sBoard.createChessPiece(Black, Rook, 2, 2);
	sBoard.createChessPiece(White, Pawn, 5, 6);
	sBoard.createChessPiece(Black, Pawn, 7, 6);
	sBoard.createChessPiece(White, Bishop, 2, 1);
	sBoard.createChessPiece(White, Pawn, 1, 4);
	sBoard.createChessPiece(White, Pawn, 3, 2);
	sBoard.createChessPiece(Black, Rook, 4, 5);
	sBoard.movePiece(5,6,4,5);
	sBoard.movePiece(5,5,6,4);
	sBoard.movePiece(2,1,0,3);
	sBoard.movePiece(2,2,2,1);
	sBoard.movePiece(0,4,4,6);
	sBoard.movePiece(3,2,2,1);
	sBoard.movePiece(6,4,2,0);
	sBoard.movePiece(2,1,1,1);
	sBoard.movePiece(2,0,7,5);
	sBoard.movePiece(2,7,5,4);
	sBoard.movePiece(4,5,3,5);
	sBoard.movePiece(7,5,6,4);
	sBoard.movePiece(0,3,2,1);
	sBoard.movePiece(6,4,5,3);
	sBoard.movePiece(7,3,1,2);
	sBoard.movePiece(2,1,1,2);
	sBoard.movePiece(5,3,7,5);
	sBoard.movePiece(1,4,0,4);
	sBoard.movePiece(7,5,4,2);
	sBoard.movePiece(5,3,5,5);
	sBoard.movePiece(1,2,5,6);
	sBoard.movePiece(4,2,3,1);
	sBoard.movePiece(5,6,2,3);
	sBoard.movePiece(3,1,4,2);
	sBoard.movePiece(2,4,2,6);
	sBoard.movePiece(2,3,4,5);
	sBoard.movePiece(4,2,2,4);
	sBoard.movePiece(4,5,5,6);
	sBoard.movePiece(2,4,0,2);
	sBoard.movePiece(0,2,2,0);
	sBoard.movePiece(5,6,4,7);
	sBoard.movePiece(0,2,3,5);
	sBoard.movePiece(4,7,6,5);
	sBoard.movePiece(3,5,7,1);
	sBoard.movePiece(6,1,6,2);
	sBoard.movePiece(6,5,4,7);
	sBoard.movePiece(7,1,1,7);
	sBoard.movePiece(4,7,2,5);
	sBoard.movePiece(1,7,5,3);
	sBoard.movePiece(0,7,3,5);
	sBoard.movePiece(2,5,0,7);
	sBoard.movePiece(5,3,3,5);
	sBoard.movePiece(0,7,5,2);
	sBoard.movePiece(3,5,6,2);
	sBoard.movePiece(5,4,4,1);
	sBoard.movePiece(5,2,2,5);
	sBoard.movePiece(6,2,1,7);
	sBoard.movePiece(2,5,4,7);
	sBoard.movePiece(1,7,0,6);
	sBoard.movePiece(4,5,2,1);
	sBoard.movePiece(1,1,0,1);
	sBoard.movePiece(0,6,1,7);
	sBoard.movePiece(4,7,7,4);
	sBoard.movePiece(1,7,7,1);
	sBoard.movePiece(1,3,0,6);
	sBoard.movePiece(7,4,5,6);
	sBoard.movePiece(7,1,6,2);
	sBoard.movePiece(5,6,4,7);
	sBoard.movePiece(6,2,1,7);
	sBoard.movePiece(5,5,7,3);
	sBoard.movePiece(4,7,3,6);
	sBoard.movePiece(1,7,4,4);
	sBoard.movePiece(3,6,4,7);
	sBoard.movePiece(4,4,0,0);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
