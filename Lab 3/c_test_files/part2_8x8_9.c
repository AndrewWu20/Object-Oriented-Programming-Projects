#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_9(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Bishop, 0, 3);
	sBoard.createChessPiece(White, Bishop, 5, 5);
	sBoard.createChessPiece(Black, Bishop, 3, 5);
	sBoard.createChessPiece(Black, Bishop, 7, 5);
	sBoard.createChessPiece(Black, Rook, 7, 5);
	sBoard.createChessPiece(White, Bishop, 2, 3);
	sBoard.createChessPiece(Black, Pawn, 5, 1);
	sBoard.createChessPiece(Black, Bishop, 3, 2);
	sBoard.movePiece(2,3,6,7);
	sBoard.movePiece(3,2,2,3);
	sBoard.movePiece(0,3,3,0);
	sBoard.movePiece(7,5,7,2);
	sBoard.movePiece(2,2,7,2);
	sBoard.movePiece(5,5,1,1);
	sBoard.movePiece(7,2,7,5);
	sBoard.movePiece(1,1,3,3);
	sBoard.movePiece(7,5,7,7);
	sBoard.movePiece(6,7,3,7);
	sBoard.movePiece(3,3,5,5);
	sBoard.movePiece(5,1,6,1);
	sBoard.movePiece(5,5,3,3);
	sBoard.movePiece(2,3,3,2);
	sBoard.movePiece(1,5,1,4);
	sBoard.movePiece(3,0,2,1);
	sBoard.movePiece(3,5,5,3);
	sBoard.movePiece(2,1,0,3);
	sBoard.movePiece(5,3,3,1);
	sBoard.movePiece(0,3,0,7);
	sBoard.movePiece(6,7,7,6);
	sBoard.movePiece(3,2,7,6);
	sBoard.movePiece(0,3,2,1);
	sBoard.movePiece(3,1,2,0);
	sBoard.movePiece(2,5,3,5);
	sBoard.movePiece(2,1,7,6);
	sBoard.movePiece(7,7,3,7);
	sBoard.movePiece(3,3,7,7);
	sBoard.movePiece(3,7,3,0);
	sBoard.movePiece(7,4,1,0);
	sBoard.movePiece(7,6,6,5);
	sBoard.movePiece(2,0,1,1);
	sBoard.movePiece(6,5,5,6);
	sBoard.movePiece(1,1,7,7);
	sBoard.movePiece(7,0,4,7);
	sBoard.movePiece(5,6,1,2);
	sBoard.movePiece(3,0,4,0);
	sBoard.movePiece(1,2,0,1);
	sBoard.movePiece(4,0,4,2);
	sBoard.movePiece(7,5,0,2);
	sBoard.movePiece(0,1,1,0);
	sBoard.movePiece(4,2,1,2);
	sBoard.movePiece(1,0,5,4);
	sBoard.movePiece(1,2,1,1);
	sBoard.movePiece(3,3,4,7);
	sBoard.movePiece(5,4,4,3);
	sBoard.movePiece(1,1,1,3);
	sBoard.movePiece(4,3,6,1);
	sBoard.movePiece(1,3,1,5);
	sBoard.movePiece(2,2,7,6);
	sBoard.movePiece(6,1,0,7);
	sBoard.movePiece(1,5,1,7);
	sBoard.movePiece(0,7,4,3);
	sBoard.movePiece(1,7,3,7);
	sBoard.movePiece(3,5,1,3);
	sBoard.movePiece(4,3,3,2);
	sBoard.movePiece(3,7,1,7);
	sBoard.movePiece(3,2,5,4);
	sBoard.movePiece(7,7,0,0);
	sBoard.movePiece(2,6,0,4);
	sBoard.movePiece(5,4,4,5);
	sBoard.movePiece(1,7,2,7);
	sBoard.movePiece(4,5,5,6);
	sBoard.movePiece(2,7,2,4);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
