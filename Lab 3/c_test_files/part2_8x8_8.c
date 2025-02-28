#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_8(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Bishop, 3, 7);
	sBoard.createChessPiece(White, Pawn, 5, 0);
	sBoard.createChessPiece(Black, Rook, 5, 2);
	sBoard.createChessPiece(White, Pawn, 5, 6);
	sBoard.createChessPiece(Black, Bishop, 6, 1);
	sBoard.createChessPiece(Black, Bishop, 7, 2);
	sBoard.createChessPiece(Black, Pawn, 3, 1);
	sBoard.createChessPiece(Black, Pawn, 0, 7);
	sBoard.movePiece(3,7,0,4);
	sBoard.movePiece(7,2,6,3);
	sBoard.movePiece(0,4,2,2);
	sBoard.movePiece(5,2,5,3);
	sBoard.movePiece(3,7,1,7);
	sBoard.movePiece(2,2,1,3);
	sBoard.movePiece(3,1,4,1);
	sBoard.movePiece(5,6,4,6);
	sBoard.movePiece(5,3,5,2);
	sBoard.movePiece(4,6,5,4);
	sBoard.movePiece(1,3,3,5);
	sBoard.movePiece(5,2,5,6);
	sBoard.movePiece(3,5,1,7);
	sBoard.movePiece(6,1,5,2);
	sBoard.movePiece(1,1,0,7);
	sBoard.movePiece(1,7,7,1);
	sBoard.movePiece(6,3,7,4);
	sBoard.movePiece(7,1,3,5);
	sBoard.movePiece(5,6,5,7);
	sBoard.movePiece(6,7,3,6);
	sBoard.movePiece(3,5,5,3);
	sBoard.movePiece(0,7,1,7);
	sBoard.movePiece(5,3,4,4);
	sBoard.movePiece(5,2,7,0);
	sBoard.movePiece(1,0,0,1);
	sBoard.movePiece(4,4,3,3);
	sBoard.movePiece(5,7,5,2);
	sBoard.movePiece(3,3,0,6);
	sBoard.movePiece(7,4,5,6);
	sBoard.movePiece(0,4,1,1);
	sBoard.movePiece(0,6,5,1);
	sBoard.movePiece(1,7,2,7);
	sBoard.movePiece(4,6,3,6);
	sBoard.movePiece(4,1,5,1);
	sBoard.movePiece(7,1,4,3);
	sBoard.movePiece(5,0,4,0);
	sBoard.movePiece(5,6,0,1);
	sBoard.movePiece(4,0,3,0);
	sBoard.movePiece(0,1,6,7);
	sBoard.movePiece(4,4,6,7);
	sBoard.movePiece(3,6,2,6);
	sBoard.movePiece(6,7,2,3);
	sBoard.movePiece(3,0,2,0);
	sBoard.movePiece(2,3,5,6);
	sBoard.movePiece(7,5,4,2);
	sBoard.movePiece(2,6,1,6);
	sBoard.movePiece(5,2,3,2);
	sBoard.movePiece(1,6,0,6);
	sBoard.movePiece(7,0,3,4);
	sBoard.movePiece(4,3,7,5);
	sBoard.movePiece(2,0,1,0);
	sBoard.movePiece(3,4,1,6);
	sBoard.movePiece(1,0,0,0);
	sBoard.movePiece(3,2,3,7);
	sBoard.movePiece(2,0,4,4);
	sBoard.movePiece(1,5,1,4);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
