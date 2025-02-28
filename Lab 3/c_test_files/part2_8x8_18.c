#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_18(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Pawn, 0, 5);
	sBoard.createChessPiece(White, Pawn, 1, 7);
	sBoard.createChessPiece(White, Pawn, 7, 4);
	sBoard.createChessPiece(White, Pawn, 7, 3);
	sBoard.createChessPiece(White, Pawn, 3, 6);
	sBoard.createChessPiece(Black, Bishop, 5, 3);
	sBoard.createChessPiece(Black, Pawn, 7, 3);
	sBoard.createChessPiece(Black, Rook, 2, 0);
	sBoard.movePiece(1,7,0,7);
	sBoard.movePiece(5,3,3,5);
	sBoard.movePiece(3,6,2,6);
	sBoard.movePiece(3,5,1,3);
	sBoard.movePiece(7,6,7,0);
	sBoard.movePiece(7,4,6,4);
	sBoard.movePiece(2,0,2,3);
	sBoard.movePiece(6,4,4,4);
	sBoard.movePiece(2,3,6,3);
	sBoard.movePiece(4,6,2,0);
	sBoard.movePiece(2,6,1,6);
	sBoard.movePiece(6,3,6,1);
	sBoard.movePiece(1,6,0,5);
	sBoard.movePiece(6,1,6,2);
	sBoard.movePiece(6,5,5,2);
	sBoard.movePiece(4,4,3,4);
	sBoard.movePiece(6,2,6,4);
	sBoard.movePiece(3,4,2,4);
	sBoard.movePiece(6,4,6,7);
	sBoard.movePiece(2,3,4,3);
	sBoard.movePiece(2,4,1,3);
	sBoard.movePiece(6,7,6,2);
	sBoard.movePiece(1,3,0,3);
	sBoard.movePiece(6,2,0,2);
	sBoard.movePiece(6,2,4,7);
	sBoard.movePiece(7,1,6,5);
	sBoard.movePiece(6,5,1,4);
	sBoard.movePiece(3,2,1,1);
	sBoard.movePiece(6,1,5,5);
	sBoard.movePiece(2,5,6,4);
	sBoard.movePiece(4,4,3,3);
	sBoard.movePiece(3,2,6,3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
