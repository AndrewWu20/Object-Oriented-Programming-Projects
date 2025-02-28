#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_2(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Pawn, 2, 2);
	sBoard.createChessPiece(Black, Rook, 3, 2);
	sBoard.createChessPiece(White, Pawn, 3, 1);
	sBoard.createChessPiece(Black, Pawn, 5, 4);
	sBoard.createChessPiece(Black, Rook, 5, 0);
	sBoard.createChessPiece(Black, Pawn, 1, 1);
	sBoard.createChessPiece(White, Rook, 0, 1);
	sBoard.createChessPiece(White, Pawn, 1, 3);
	sBoard.movePiece(3,1,2,2);
	sBoard.movePiece(5,0,4,0);
	sBoard.movePiece(2,2,1,2);
	sBoard.movePiece(4,0,1,0);
	sBoard.movePiece(2,2,1,7);
	sBoard.movePiece(0,1,0,4);
	sBoard.movePiece(1,0,7,0);
	sBoard.movePiece(0,4,1,4);
	sBoard.movePiece(7,0,0,0);
	sBoard.movePiece(1,0,2,5);
	sBoard.movePiece(1,4,5,4);
	sBoard.movePiece(3,2,3,7);
	sBoard.movePiece(5,4,5,1);
	sBoard.movePiece(3,7,3,2);
	sBoard.movePiece(5,4,1,2);
	sBoard.movePiece(5,1,7,1);
	sBoard.movePiece(3,2,1,2);
	sBoard.movePiece(7,1,7,5);
	sBoard.movePiece(0,0,0,7);
	sBoard.movePiece(6,1,7,4);
	sBoard.movePiece(7,5,7,6);
	sBoard.movePiece(0,7,5,7);
	sBoard.movePiece(7,6,7,2);
	sBoard.movePiece(5,7,5,6);
	sBoard.movePiece(6,2,0,1);
	sBoard.movePiece(7,2,7,5);
	sBoard.movePiece(1,2,0,2);
	sBoard.movePiece(7,5,3,5);
	sBoard.movePiece(5,6,5,5);
	sBoard.movePiece(1,5,1,1);
	sBoard.movePiece(3,5,3,7);
	sBoard.movePiece(0,2,0,6);
	sBoard.movePiece(3,7,7,7);
	sBoard.movePiece(5,5,6,5);
	sBoard.movePiece(7,7,0,3);
	sBoard.movePiece(7,7,7,0);
	sBoard.movePiece(0,6,0,1);
	sBoard.movePiece(7,0,4,0);
	sBoard.movePiece(6,5,6,4);
	sBoard.movePiece(3,1,4,6);
	sBoard.movePiece(4,0,7,0);
	sBoard.movePiece(0,1,0,3);
	sBoard.movePiece(7,0,7,2);
	sBoard.movePiece(6,4,0,4);
	sBoard.movePiece(3,3,7,5);
	sBoard.movePiece(1,3,0,3);
	sBoard.movePiece(0,4,4,4);
	sBoard.movePiece(7,2,7,0);
	sBoard.movePiece(4,4,1,4);
	sBoard.movePiece(6,3,2,1);
	sBoard.movePiece(7,0,3,0);
	sBoard.movePiece(1,1,2,1);
	sBoard.movePiece(3,0,2,0);
	sBoard.movePiece(1,4,5,4);
	sBoard.movePiece(5,4,1,5);
	sBoard.movePiece(2,0,4,0);
	sBoard.movePiece(5,4,4,4);
	sBoard.movePiece(4,0,5,0);
	sBoard.movePiece(4,4,4,5);
	sBoard.movePiece(6,2,6,5);
	sBoard.movePiece(5,0,0,0);
	sBoard.movePiece(4,5,4,6);
	sBoard.movePiece(0,0,7,0);
	sBoard.movePiece(4,6,4,2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
