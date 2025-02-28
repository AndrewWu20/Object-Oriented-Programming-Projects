#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_19(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Pawn, 7, 3);
	sBoard.createChessPiece(Black, Bishop, 2, 5);
	sBoard.createChessPiece(Black, Bishop, 3, 5);
	sBoard.createChessPiece(White, Rook, 5, 3);
	sBoard.createChessPiece(Black, Pawn, 0, 5);
	sBoard.createChessPiece(White, Rook, 1, 4);
	sBoard.createChessPiece(White, Rook, 1, 5);
	sBoard.createChessPiece(Black, Pawn, 2, 4);
	sBoard.movePiece(5,3,5,0);
	sBoard.movePiece(2,5,3,4);
	sBoard.movePiece(5,0,0,0);
	sBoard.movePiece(3,4,0,7);
	sBoard.movePiece(0,0,0,6);
	sBoard.movePiece(1,5,3,5);
	sBoard.movePiece(0,7,4,3);
	sBoard.movePiece(0,0,0,5);
	sBoard.movePiece(4,3,1,6);
	sBoard.movePiece(0,7,1,3);
	sBoard.movePiece(3,5,7,5);
	sBoard.movePiece(1,6,5,2);
	sBoard.movePiece(0,5,5,5);
	sBoard.movePiece(5,2,2,5);
	sBoard.movePiece(5,7,0,0);
	sBoard.movePiece(1,4,1,2);
	sBoard.movePiece(2,4,3,4);
	sBoard.movePiece(7,5,7,4);
	sBoard.movePiece(2,5,0,7);
	sBoard.movePiece(4,2,3,0);
	sBoard.movePiece(5,5,2,5);
	sBoard.movePiece(0,7,1,6);
	sBoard.movePiece(7,4,7,3);
	sBoard.movePiece(3,4,4,4);
	sBoard.movePiece(6,1,4,7);
	sBoard.movePiece(1,2,6,2);
	sBoard.movePiece(1,6,2,7);
	sBoard.movePiece(6,2,6,1);
	sBoard.movePiece(2,7,0,5);
	sBoard.movePiece(4,0,4,7);
	sBoard.movePiece(7,3,4,3);
	sBoard.movePiece(0,5,1,4);
	sBoard.movePiece(2,5,1,5);
	sBoard.movePiece(1,4,0,3);
	sBoard.movePiece(2,7,7,6);
	sBoard.movePiece(1,5,1,2);
	sBoard.movePiece(0,3,1,4);
	sBoard.movePiece(1,2,1,1);
	sBoard.movePiece(4,4,5,4);
	sBoard.movePiece(4,3,4,3);
	sBoard.movePiece(4,3,4,4);
	sBoard.movePiece(1,4,5,0);
	sBoard.movePiece(4,4,4,1);
	sBoard.movePiece(5,0,6,1);
	sBoard.movePiece(4,1,0,1);
	sBoard.movePiece(4,1,6,1);
	sBoard.movePiece(5,4,6,4);
	sBoard.movePiece(6,1,2,1);
	sBoard.movePiece(6,4,7,4);
	sBoard.movePiece(6,1,3,3);
	sBoard.movePiece(2,1,2,3);
	sBoard.movePiece(3,3,2,2);
	sBoard.movePiece(4,7,4,5);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
