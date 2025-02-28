#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_3(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Pawn, 3, 1);
	sBoard.createChessPiece(Black, Bishop, 7, 3);
	sBoard.createChessPiece(White, Rook, 0, 4);
	sBoard.createChessPiece(Black, Rook, 5, 2);
	sBoard.createChessPiece(Black, Bishop, 0, 2);
	sBoard.createChessPiece(White, Bishop, 1, 5);
	sBoard.createChessPiece(Black, Pawn, 4, 7);
	sBoard.createChessPiece(Black, Pawn, 2, 3);
	sBoard.movePiece(0,4,0,7);
	sBoard.movePiece(0,2,1,1);
	sBoard.movePiece(0,7,0,5);
	sBoard.movePiece(7,3,3,7);
	sBoard.movePiece(3,7,3,2);
	sBoard.movePiece(1,5,2,6);
	sBoard.movePiece(3,7,5,5);
	sBoard.movePiece(0,5,0,6);
	sBoard.movePiece(1,1,2,2);
	sBoard.movePiece(0,1,5,3);
	sBoard.movePiece(0,6,0,2);
	sBoard.movePiece(3,1,4,1);
	sBoard.movePiece(2,6,0,4);
	sBoard.movePiece(5,5,4,6);
	sBoard.movePiece(4,7,6,6);
	sBoard.movePiece(0,2,0,1);
	sBoard.movePiece(2,2,1,1);
	sBoard.movePiece(0,1,0,0);
	sBoard.movePiece(5,2,7,2);
	sBoard.movePiece(7,5,0,6);
	sBoard.movePiece(0,4,4,0);
	sBoard.movePiece(1,1,7,7);
	sBoard.movePiece(0,0,0,6);
	sBoard.movePiece(7,7,5,5);
	sBoard.movePiece(5,7,1,1);
	sBoard.movePiece(0,6,4,6);
	sBoard.movePiece(7,2,7,5);
	sBoard.movePiece(4,0,1,3);
	sBoard.movePiece(4,1,5,1);
	sBoard.movePiece(1,2,5,0);
	sBoard.movePiece(4,6,0,6);
	sBoard.movePiece(7,5,7,0);
	sBoard.movePiece(1,3,2,4);
	sBoard.movePiece(7,0,7,4);
	sBoard.movePiece(1,1,5,7);
	sBoard.movePiece(0,6,0,1);
	sBoard.movePiece(7,4,6,4);
	sBoard.movePiece(2,4,0,6);
	sBoard.movePiece(6,4,4,4);
	sBoard.movePiece(1,1,7,0);
	sBoard.movePiece(0,6,1,5);
	sBoard.movePiece(4,4,1,4);
	sBoard.movePiece(0,1,0,5);
	sBoard.movePiece(1,4,1,0);
	sBoard.movePiece(2,1,2,4);
	sBoard.movePiece(1,5,5,1);
	sBoard.movePiece(5,5,2,2);
	sBoard.movePiece(0,5,4,5);
	sBoard.movePiece(2,2,1,3);
	sBoard.movePiece(7,3,1,1);
	sBoard.movePiece(4,5,4,0);
	sBoard.movePiece(1,0,0,0);
	sBoard.movePiece(5,1,6,2);
	sBoard.movePiece(1,3,3,1);
	sBoard.movePiece(5,2,7,3);
	sBoard.movePiece(4,0,4,4);
	sBoard.movePiece(0,0,0,7);
	sBoard.movePiece(4,4,0,4);
	sBoard.movePiece(3,1,2,0);
	sBoard.movePiece(7,0,6,2);
	sBoard.movePiece(6,2,2,6);
	sBoard.movePiece(0,7,1,7);
	sBoard.movePiece(0,4,0,6);
	sBoard.movePiece(1,7,1,5);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
