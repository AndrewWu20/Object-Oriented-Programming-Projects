#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_13(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Pawn, 4, 5);
	sBoard.createChessPiece(Black, Pawn, 6, 3);
	sBoard.createChessPiece(Black, Rook, 2, 3);
	sBoard.createChessPiece(White, Pawn, 0, 3);
	sBoard.createChessPiece(Black, Rook, 4, 5);
	sBoard.createChessPiece(White, Bishop, 0, 7);
	sBoard.createChessPiece(Black, Rook, 7, 0);
	sBoard.createChessPiece(White, Pawn, 3, 2);
	sBoard.movePiece(3,2,2,2);
	sBoard.movePiece(2,3,2,6);
	sBoard.movePiece(0,7,2,5);
	sBoard.movePiece(4,5,5,5);
	sBoard.movePiece(3,7,5,0);
	sBoard.movePiece(2,5,7,0);
	sBoard.movePiece(2,6,7,6);
	sBoard.movePiece(7,0,5,2);
	sBoard.movePiece(5,5,5,2);
	sBoard.movePiece(2,1,2,4);
	sBoard.movePiece(2,2,1,2);
	sBoard.movePiece(7,6,1,6);
	sBoard.movePiece(1,2,0,2);
	sBoard.movePiece(5,2,4,2);
	sBoard.movePiece(1,5,4,0);
	sBoard.movePiece(7,4,1,5);
	sBoard.movePiece(1,7,5,5);
	sBoard.movePiece(4,3,0,6);
	sBoard.movePiece(4,7,3,5);
	sBoard.movePiece(1,7,1,5);
	sBoard.movePiece(6,6,1,5);
	sBoard.movePiece(3,4,6,0);
	sBoard.movePiece(3,5,5,2);
	sBoard.movePiece(4,4,2,5);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
