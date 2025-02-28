#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_8x8_10(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Bishop, 0, 4);
	sBoard.createChessPiece(Black, Bishop, 2, 7);
	sBoard.createChessPiece(White, Bishop, 3, 4);
	sBoard.createChessPiece(Black, Rook, 7, 2);
	sBoard.createChessPiece(White, Bishop, 0, 5);
	sBoard.createChessPiece(White, Pawn, 2, 5);
	sBoard.createChessPiece(White, Bishop, 2, 2);
	sBoard.createChessPiece(White, Rook, 3, 3);
	sBoard.movePiece(3,3,5,3);
	sBoard.movePiece(7,2,7,1);
	sBoard.movePiece(0,5,4,1);
	sBoard.movePiece(2,7,7,2);
	sBoard.movePiece(0,4,0,7);
	sBoard.movePiece(4,1,7,4);
	sBoard.movePiece(7,2,6,3);
	sBoard.movePiece(3,4,5,2);
	sBoard.movePiece(7,1,7,4);
	sBoard.movePiece(1,6,3,6);
	sBoard.movePiece(5,3,1,3);
	sBoard.movePiece(0,4,2,6);
	sBoard.movePiece(5,2,6,1);
	sBoard.movePiece(7,4,7,7);
	sBoard.movePiece(4,0,6,7);
	sBoard.movePiece(1,3,0,3);
	sBoard.movePiece(6,3,3,6);
	sBoard.movePiece(0,3,2,3);
	sBoard.movePiece(7,7,7,0);
	sBoard.movePiece(3,1,2,6);
	sBoard.movePiece(2,3,6,3);
	sBoard.movePiece(7,0,5,0);
	sBoard.movePiece(2,2,3,3);
	sBoard.movePiece(5,0,1,0);
	sBoard.movePiece(2,1,6,1);
	sBoard.movePiece(3,3,1,5);
	sBoard.movePiece(2,6,4,4);
	sBoard.movePiece(1,5,0,6);
	sBoard.movePiece(3,6,2,7);
	sBoard.movePiece(6,0,4,1);
	sBoard.movePiece(0,6,6,0);
	sBoard.movePiece(4,4,7,1);
	sBoard.movePiece(6,1,7,2);
	sBoard.movePiece(1,0,4,0);
	sBoard.movePiece(0,6,4,5);
	sBoard.movePiece(6,3,3,3);
	sBoard.movePiece(4,0,4,7);
	sBoard.movePiece(7,2,4,5);
	sBoard.movePiece(4,7,7,7);
	sBoard.movePiece(0,6,5,6);
	sBoard.movePiece(4,5,5,4);
	sBoard.movePiece(7,1,2,6);
	sBoard.movePiece(3,3,3,2);
	sBoard.movePiece(2,6,3,7);
	sBoard.movePiece(2,4,0,3);
	sBoard.movePiece(5,4,6,3);
	sBoard.movePiece(7,7,7,0);
	sBoard.movePiece(3,2,3,6);
	sBoard.movePiece(3,7,6,4);
	sBoard.movePiece(0,3,7,1);
	sBoard.movePiece(6,3,7,2);
	sBoard.movePiece(7,0,7,1);
	sBoard.movePiece(3,6,3,0);
	sBoard.movePiece(6,4,2,0);
	sBoard.movePiece(1,1,5,2);
	sBoard.movePiece(3,0,5,0);
	sBoard.movePiece(2,0,1,1);
	sBoard.movePiece(6,0,2,4);
	sBoard.movePiece(2,7,1,6);
	sBoard.movePiece(4,6,4,0);
	sBoard.movePiece(2,4,4,2);
	sBoard.movePiece(7,1,3,1);
	sBoard.movePiece(5,0,5,4);
	sBoard.movePiece(3,1,3,3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
