#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_5(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Rook, 5, 7);
	sBoard.createChessPiece(Black, Bishop, 1, 2);
	sBoard.createChessPiece(Black, Pawn, 0, 2);
	sBoard.createChessPiece(Black, Bishop, 0, 5);
	sBoard.createChessPiece(Black, Bishop, 0, 5);
	sBoard.createChessPiece(Black, Bishop, 6, 2);
	sBoard.createChessPiece(White, Rook, 1, 0);
	sBoard.createChessPiece(Black, Bishop, 5, 0);
	sBoard.movePiece(1,0,3,0);
	sBoard.movePiece(0,5,4,1);
	sBoard.movePiece(3,0,3,6);
	sBoard.movePiece(1,2,5,6);
	sBoard.movePiece(1,0,4,0);
	sBoard.movePiece(3,6,3,3);
	sBoard.movePiece(5,6,1,2);
	sBoard.movePiece(3,3,5,3);
	sBoard.movePiece(5,7,0,7);
	sBoard.movePiece(5,6,5,2);
	sBoard.movePiece(5,3,7,3);
	sBoard.movePiece(4,1,5,2);
	sBoard.movePiece(7,3,7,7);
	sBoard.movePiece(6,2,3,5);
	sBoard.movePiece(6,4,3,1);
	sBoard.movePiece(7,7,7,1);
	sBoard.movePiece(3,5,6,2);
	sBoard.movePiece(7,1,1,1);
	sBoard.movePiece(5,0,3,2);
	sBoard.movePiece(5,6,1,4);
	sBoard.movePiece(1,1,6,1);
	sBoard.movePiece(6,2,2,6);
	sBoard.movePiece(6,1,6,4);
	sBoard.movePiece(3,2,0,5);
	sBoard.movePiece(2,5,7,2);
	sBoard.movePiece(6,4,6,0);
	sBoard.movePiece(1,2,0,1);
	sBoard.movePiece(6,0,6,2);
	sBoard.movePiece(5,2,4,1);
	sBoard.movePiece(7,1,2,4);
	sBoard.movePiece(6,2,2,2);
	sBoard.movePiece(4,1,5,2);
	sBoard.movePiece(2,2,2,1);
	sBoard.movePiece(0,1,2,3);
	sBoard.movePiece(0,1,0,6);
	sBoard.movePiece(2,1,2,0);
	sBoard.movePiece(0,5,2,7);
	sBoard.movePiece(2,0,5,0);
	sBoard.movePiece(5,2,4,3);
	sBoard.movePiece(7,7,3,3);
	sBoard.movePiece(5,0,3,0);
	sBoard.movePiece(2,6,0,4);
	sBoard.movePiece(3,0,6,0);
	sBoard.movePiece(4,3,3,4);
	sBoard.movePiece(7,3,0,4);
	sBoard.movePiece(6,0,5,0);
	sBoard.movePiece(2,7,4,5);
	sBoard.movePiece(5,0,6,0);
	sBoard.movePiece(3,4,6,1);
	sBoard.movePiece(3,0,7,7);
	sBoard.movePiece(6,0,7,0);
	sBoard.movePiece(0,7,2,7);
	sBoard.movePiece(7,0,7,3);
	sBoard.movePiece(4,5,7,2);
	sBoard.movePiece(3,4,5,7);
	sBoard.movePiece(7,3,7,5);
	sBoard.movePiece(6,1,3,4);
	sBoard.movePiece(7,5,5,5);
	sBoard.movePiece(3,4,0,7);
	sBoard.movePiece(5,4,1,6);
	sBoard.movePiece(5,5,5,2);
	sBoard.movePiece(2,3,4,1);
	sBoard.movePiece(5,2,5,0);
	sBoard.movePiece(0,7,5,2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
