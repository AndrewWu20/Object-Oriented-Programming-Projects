#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_6(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Pawn, 1, 4);
	sBoard.createChessPiece(White, Rook, 5, 1);
	sBoard.createChessPiece(White, Bishop, 4, 3);
	sBoard.createChessPiece(Black, Pawn, 5, 6);
	sBoard.createChessPiece(Black, Pawn, 5, 1);
	sBoard.createChessPiece(Black, Bishop, 5, 2);
	sBoard.createChessPiece(White, Bishop, 7, 1);
	sBoard.createChessPiece(Black, Bishop, 6, 1);
	sBoard.movePiece(4,3,3,2);
	sBoard.movePiece(5,2,6,3);
	sBoard.movePiece(3,2,6,5);
	sBoard.movePiece(6,1,0,7);
	sBoard.movePiece(7,2,0,4);
	sBoard.movePiece(6,5,3,2);
	sBoard.movePiece(6,3,4,1);
	sBoard.movePiece(3,2,1,0);
	sBoard.movePiece(4,1,2,3);
	sBoard.movePiece(4,0,6,3);
	sBoard.movePiece(1,0,7,6);
	sBoard.movePiece(0,7,5,2);
	sBoard.movePiece(7,6,6,5);
	sBoard.movePiece(5,2,3,4);
	sBoard.movePiece(5,3,6,2);
	sBoard.movePiece(7,1,2,6);
	sBoard.movePiece(3,4,0,7);
	sBoard.movePiece(2,6,4,4);
	sBoard.movePiece(0,7,5,2);
	sBoard.movePiece(3,6,4,2);
	sBoard.movePiece(4,4,0,0);
	sBoard.movePiece(5,2,0,7);
	sBoard.movePiece(0,0,3,3);
	sBoard.movePiece(2,3,3,4);
	sBoard.movePiece(4,0,6,7);
	sBoard.movePiece(3,3,0,0);
	sBoard.movePiece(5,6,6,6);
	sBoard.movePiece(6,5,7,4);
	sBoard.movePiece(1,4,2,4);
	sBoard.movePiece(6,3,6,7);
	sBoard.movePiece(0,0,5,5);
	sBoard.movePiece(5,1,6,1);
	sBoard.movePiece(5,5,3,3);
	sBoard.movePiece(3,4,5,2);
	sBoard.movePiece(4,5,0,5);
	sBoard.movePiece(3,3,4,4);
	sBoard.movePiece(5,2,7,4);
	sBoard.movePiece(4,4,2,2);
	sBoard.movePiece(2,4,3,4);
	sBoard.movePiece(7,7,6,5);
	sBoard.movePiece(2,2,6,6);
	sBoard.movePiece(7,4,4,7);
	sBoard.movePiece(6,6,2,2);
	sBoard.movePiece(0,7,2,5);
	sBoard.movePiece(6,4,3,4);
	sBoard.movePiece(2,2,3,3);
	sBoard.movePiece(4,7,7,4);
	sBoard.movePiece(3,3,5,1);
	sBoard.movePiece(7,4,6,3);
	sBoard.movePiece(3,5,3,2);
	sBoard.movePiece(5,1,6,2);
	sBoard.movePiece(6,3,5,2);
	sBoard.movePiece(6,2,3,5);
	sBoard.movePiece(5,2,3,0);
	sBoard.movePiece(7,4,0,2);
	sBoard.movePiece(3,5,0,2);
	sBoard.movePiece(2,5,3,6);
	sBoard.movePiece(0,2,5,7);
	sBoard.movePiece(3,6,6,3);
	sBoard.movePiece(4,0,1,3);
	sBoard.movePiece(5,7,4,6);
	sBoard.movePiece(3,0,4,1);
	sBoard.movePiece(4,6,7,3);
	sBoard.movePiece(6,3,7,4);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
