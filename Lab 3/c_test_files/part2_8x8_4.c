#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_4(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Bishop, 3, 4);
	sBoard.createChessPiece(Black, Rook, 5, 4);
	sBoard.createChessPiece(Black, Bishop, 6, 2);
	sBoard.createChessPiece(Black, Bishop, 2, 4);
	sBoard.createChessPiece(White, Bishop, 0, 3);
	sBoard.createChessPiece(White, Pawn, 3, 2);
	sBoard.createChessPiece(White, Bishop, 4, 4);
	sBoard.createChessPiece(Black, Pawn, 0, 2);
	sBoard.movePiece(4,4,3,5);
	sBoard.movePiece(5,4,5,5);
	sBoard.movePiece(3,5,4,6);
	sBoard.movePiece(6,2,4,0);
	sBoard.movePiece(4,7,6,3);
	sBoard.movePiece(4,6,3,7);
	sBoard.movePiece(5,5,1,5);
	sBoard.movePiece(3,4,2,5);
	sBoard.movePiece(4,0,3,1);
	sBoard.movePiece(2,7,2,5);
	sBoard.movePiece(3,7,2,6);
	sBoard.movePiece(1,5,1,6);
	sBoard.movePiece(2,6,0,4);
	sBoard.movePiece(1,6,1,5);
	sBoard.movePiece(7,4,1,7);
	sBoard.movePiece(2,5,5,2);
	sBoard.movePiece(3,1,0,4);
	sBoard.movePiece(0,3,2,1);
	sBoard.movePiece(2,4,3,5);
	sBoard.movePiece(5,4,2,2);
	sBoard.movePiece(2,1,0,3);
	sBoard.movePiece(3,5,2,4);
	sBoard.movePiece(0,3,2,5);
	sBoard.movePiece(2,4,6,0);
	sBoard.movePiece(5,5,4,5);
	sBoard.movePiece(5,2,7,4);
	sBoard.movePiece(0,4,3,1);
	sBoard.movePiece(7,4,4,1);
	sBoard.movePiece(1,5,1,2);
	sBoard.movePiece(2,0,6,6);
	sBoard.movePiece(2,5,4,3);
	sBoard.movePiece(1,2,1,0);
	sBoard.movePiece(4,3,3,4);
	sBoard.movePiece(3,1,2,0);
	sBoard.movePiece(0,0,1,3);
	sBoard.movePiece(3,4,6,1);
	sBoard.movePiece(1,0,1,7);
	sBoard.movePiece(4,1,5,0);
	sBoard.movePiece(6,0,1,5);
	sBoard.movePiece(4,5,6,2);
	sBoard.movePiece(6,1,7,0);
	sBoard.movePiece(1,7,4,7);
	sBoard.movePiece(5,0,6,1);
	sBoard.movePiece(4,7,4,0);
	sBoard.movePiece(6,2,5,5);
	sBoard.movePiece(6,1,2,5);
	sBoard.movePiece(0,2,1,2);
	sBoard.movePiece(2,5,0,7);
	sBoard.movePiece(1,5,5,1);
	sBoard.movePiece(2,5,4,2);
	sBoard.movePiece(7,0,2,5);
	sBoard.movePiece(2,0,7,5);
	sBoard.movePiece(3,2,2,2);
	sBoard.movePiece(7,5,6,6);
	sBoard.movePiece(0,0,3,1);
	sBoard.movePiece(2,5,4,7);
	sBoard.movePiece(1,2,2,2);
	sBoard.movePiece(4,7,2,5);
	sBoard.movePiece(4,0,4,3);
	sBoard.movePiece(3,4,0,6);
	sBoard.movePiece(2,5,1,6);
	sBoard.movePiece(4,3,3,3);
	sBoard.movePiece(1,6,2,5);
	sBoard.movePiece(3,3,3,1);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
