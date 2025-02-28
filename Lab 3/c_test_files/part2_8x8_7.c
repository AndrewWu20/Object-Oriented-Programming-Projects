#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_7(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Pawn, 1, 2);
	sBoard.createChessPiece(White, Bishop, 1, 3);
	sBoard.createChessPiece(White, Bishop, 5, 2);
	sBoard.createChessPiece(Black, Rook, 4, 3);
	sBoard.createChessPiece(Black, Pawn, 1, 4);
	sBoard.createChessPiece(White, Bishop, 5, 1);
	sBoard.createChessPiece(White, Rook, 6, 3);
	sBoard.createChessPiece(Black, Rook, 1, 3);
	sBoard.movePiece(6,3,6,7);
	sBoard.movePiece(4,3,4,6);
	sBoard.movePiece(5,1,0,6);
	sBoard.movePiece(4,6,6,6);
	sBoard.movePiece(0,2,3,6);
	sBoard.movePiece(5,2,7,0);
	sBoard.movePiece(6,6,6,4);
	sBoard.movePiece(6,7,6,6);
	sBoard.movePiece(6,4,6,3);
	sBoard.movePiece(3,5,5,2);
	sBoard.movePiece(7,0,3,4);
	sBoard.movePiece(6,3,2,3);
	sBoard.movePiece(6,6,6,7);
	sBoard.movePiece(1,4,3,4);
	sBoard.movePiece(3,7,5,7);
	sBoard.movePiece(6,7,7,7);
	sBoard.movePiece(2,3,2,2);
	sBoard.movePiece(0,6,1,7);
	sBoard.movePiece(2,2,2,7);
	sBoard.movePiece(3,5,4,4);
	sBoard.movePiece(7,7,7,1);
	sBoard.movePiece(1,3,4,3);
	sBoard.movePiece(1,7,2,6);
	sBoard.movePiece(4,3,4,1);
	sBoard.movePiece(3,5,7,0);
	sBoard.movePiece(7,1,4,1);
	sBoard.movePiece(2,7,1,7);
	sBoard.movePiece(4,1,0,1);
	sBoard.movePiece(1,7,5,7);
	sBoard.movePiece(4,3,7,3);
	sBoard.movePiece(2,6,4,4);
	sBoard.movePiece(5,7,3,7);
	sBoard.movePiece(4,4,7,1);
	sBoard.movePiece(3,4,4,4);
	sBoard.movePiece(5,3,2,4);
	sBoard.movePiece(0,1,3,1);
	sBoard.movePiece(3,7,3,6);
	sBoard.movePiece(3,1,3,2);
	sBoard.movePiece(3,6,5,6);
	sBoard.movePiece(2,7,3,4);
	sBoard.movePiece(3,2,3,7);
	sBoard.movePiece(5,6,5,4);
	sBoard.movePiece(3,7,0,7);
	sBoard.movePiece(5,4,5,3);
	sBoard.movePiece(1,7,6,5);
	sBoard.movePiece(0,7,0,3);
	sBoard.movePiece(5,3,1,3);
	sBoard.movePiece(7,1,4,4);
	sBoard.movePiece(1,3,5,3);
	sBoard.movePiece(4,7,4,0);
	sBoard.movePiece(0,3,0,4);
	sBoard.movePiece(5,3,1,3);
	sBoard.movePiece(4,4,7,7);
	sBoard.movePiece(1,3,6,3);
	sBoard.movePiece(1,3,4,7);
	sBoard.movePiece(0,4,4,4);
	sBoard.movePiece(6,3,6,7);
	sBoard.movePiece(4,4,1,4);
	sBoard.movePiece(6,7,6,3);
	sBoard.movePiece(0,2,3,4);
	sBoard.movePiece(1,4,3,4);
	sBoard.movePiece(6,3,3,3);
	sBoard.movePiece(7,7,4,4);
	sBoard.movePiece(3,3,3,2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
