#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_1(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Rook, 7, 6);
	sBoard.createChessPiece(Black, Bishop, 1, 7);
	sBoard.createChessPiece(Black, Rook, 1, 5);
	sBoard.createChessPiece(White, Rook, 2, 3);
	sBoard.createChessPiece(Black, Rook, 4, 2);
	sBoard.createChessPiece(White, Bishop, 3, 0);
	sBoard.createChessPiece(Black, Rook, 6, 2);
	sBoard.createChessPiece(White, Bishop, 3, 7);
	sBoard.movePiece(7,6,1,6);
	sBoard.movePiece(1,5,4,5);
	sBoard.movePiece(2,3,2,1);
	sBoard.movePiece(6,2,7,2);
	sBoard.movePiece(2,2,6,2);
	sBoard.movePiece(3,0,7,4);
	sBoard.movePiece(4,5,4,3);
	sBoard.movePiece(2,1,2,0);
	sBoard.movePiece(1,7,6,2);
	sBoard.movePiece(4,1,5,4);
	sBoard.movePiece(3,7,6,4);
	sBoard.movePiece(4,3,6,3);
	sBoard.movePiece(2,0,2,2);
	sBoard.movePiece(6,3,7,3);
	sBoard.movePiece(1,4,2,7);
	sBoard.movePiece(6,4,4,2);
	sBoard.movePiece(7,3,1,3);
	sBoard.movePiece(2,2,2,3);
	sBoard.movePiece(7,2,7,0);
	sBoard.movePiece(3,6,5,0);
	sBoard.movePiece(1,6,4,6);
	sBoard.movePiece(6,2,4,4);
	sBoard.movePiece(4,6,1,6);
	sBoard.movePiece(4,4,6,2);
	sBoard.movePiece(6,4,0,1);
	sBoard.movePiece(4,2,6,0);
	sBoard.movePiece(6,2,7,3);
	sBoard.movePiece(7,4,5,6);
	sBoard.movePiece(7,3,5,5);
	sBoard.movePiece(3,0,6,0);
	sBoard.movePiece(1,6,1,7);
	sBoard.movePiece(5,5,7,7);
	sBoard.movePiece(2,3,2,2);
	sBoard.movePiece(7,0,7,3);
	sBoard.movePiece(4,0,6,0);
	sBoard.movePiece(1,7,4,7);
	sBoard.movePiece(1,3,5,3);
	sBoard.movePiece(6,0,5,1);
	sBoard.movePiece(7,3,7,4);
	sBoard.movePiece(7,6,6,2);
	sBoard.movePiece(4,7,7,7);
	sBoard.movePiece(7,4,3,4);
	sBoard.movePiece(7,7,7,4);
	sBoard.movePiece(3,4,3,2);
	sBoard.movePiece(5,3,1,3);
	sBoard.movePiece(7,4,6,4);
	sBoard.movePiece(3,2,3,3);
	sBoard.movePiece(2,2,2,4);
	sBoard.movePiece(5,3,5,2);
	sBoard.movePiece(0,7,5,6);
	sBoard.movePiece(2,4,4,4);
	sBoard.movePiece(3,3,2,3);
	sBoard.movePiece(4,4,4,3);
	sBoard.movePiece(2,3,2,6);
	sBoard.movePiece(5,7,3,3);
	sBoard.movePiece(5,1,3,3);
	sBoard.movePiece(2,6,2,2);
	sBoard.movePiece(3,3,5,5);
	sBoard.movePiece(5,2,4,2);
	sBoard.movePiece(2,1,2,0);
	sBoard.movePiece(5,6,6,7);
	sBoard.movePiece(2,2,2,0);
	sBoard.movePiece(6,4,3,4);
	sBoard.movePiece(2,0,2,3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
