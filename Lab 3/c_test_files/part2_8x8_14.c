#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_14(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Bishop, 1, 6);
	sBoard.createChessPiece(Black, Rook, 1, 5);
	sBoard.createChessPiece(White, Rook, 6, 5);
	sBoard.createChessPiece(Black, Rook, 0, 2);
	sBoard.createChessPiece(Black, Rook, 0, 1);
	sBoard.createChessPiece(White, Rook, 0, 6);
	sBoard.createChessPiece(White, Pawn, 4, 4);
	sBoard.createChessPiece(White, Bishop, 5, 5);
	sBoard.movePiece(0,6,0,4);
	sBoard.movePiece(1,5,0,5);
	sBoard.movePiece(0,4,0,2);
	sBoard.movePiece(0,1,4,1);
	sBoard.movePiece(1,3,2,3);
	sBoard.movePiece(5,5,6,4);
	sBoard.movePiece(0,5,6,5);
	sBoard.movePiece(6,4,5,5);
	sBoard.movePiece(1,6,2,5);
	sBoard.movePiece(7,1,3,3);
	sBoard.movePiece(0,2,0,6);
	sBoard.movePiece(2,5,0,3);
	sBoard.movePiece(0,6,0,7);
	sBoard.movePiece(6,5,6,6);
	sBoard.movePiece(2,0,1,0);
	sBoard.movePiece(5,5,3,7);
	sBoard.movePiece(0,3,1,2);
	sBoard.movePiece(3,7,5,5);
	sBoard.movePiece(1,2,6,7);
	sBoard.movePiece(0,4,2,0);
	sBoard.movePiece(0,7,4,7);
	sBoard.movePiece(6,6,6,5);
	sBoard.movePiece(5,5,4,6);
	sBoard.movePiece(4,1,1,1);
	sBoard.movePiece(0,0,3,6);
	sBoard.movePiece(4,6,0,2);
	sBoard.movePiece(6,5,3,5);
	sBoard.movePiece(0,2,1,3);
	sBoard.movePiece(3,5,0,5);
	sBoard.movePiece(3,6,5,7);
	sBoard.movePiece(4,7,1,7);
	sBoard.movePiece(6,7,4,5);
	sBoard.movePiece(1,7,1,5);
	sBoard.movePiece(1,1,4,1);
	sBoard.movePiece(5,5,5,6);
	sBoard.movePiece(1,3,4,6);
	sBoard.movePiece(4,1,2,1);
	sBoard.movePiece(1,5,1,3);
	sBoard.movePiece(2,1,4,1);
	sBoard.movePiece(3,7,5,5);
	sBoard.movePiece(1,3,1,7);
	sBoard.movePiece(4,1,0,1);
	sBoard.movePiece(1,7,3,7);
	sBoard.movePiece(4,5,6,7);
	sBoard.movePiece(2,4,7,4);
	sBoard.movePiece(4,6,5,7);
	sBoard.movePiece(0,5,5,5);
	sBoard.movePiece(4,4,3,4);
	sBoard.movePiece(5,5,5,4);
	sBoard.movePiece(5,0,3,2);
	sBoard.movePiece(3,7,2,7);
	sBoard.movePiece(0,1,4,1);
	sBoard.movePiece(2,7,1,7);
	sBoard.movePiece(4,1,4,5);
	sBoard.movePiece(5,1,3,4);
	sBoard.movePiece(5,7,7,5);
	sBoard.movePiece(4,5,4,7);
	sBoard.movePiece(1,7,1,6);
	sBoard.movePiece(6,7,5,6);
	sBoard.movePiece(2,6,0,6);
	sBoard.movePiece(7,5,2,0);
	sBoard.movePiece(5,6,4,5);
	sBoard.movePiece(1,6,3,6);
	sBoard.movePiece(4,7,2,7);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
