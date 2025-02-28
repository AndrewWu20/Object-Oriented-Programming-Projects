#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_17(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Bishop, 0, 6);
	sBoard.createChessPiece(Black, Pawn, 5, 5);
	sBoard.createChessPiece(Black, Pawn, 1, 5);
	sBoard.createChessPiece(White, Bishop, 4, 2);
	sBoard.createChessPiece(White, Bishop, 7, 0);
	sBoard.createChessPiece(Black, Rook, 3, 6);
	sBoard.createChessPiece(White, Bishop, 6, 6);
	sBoard.createChessPiece(White, Pawn, 4, 0);
	sBoard.createChessPiece(White, Rook, 6, 5);
	sBoard.createChessPiece(White, Rook, 2, 5);
	sBoard.createChessPiece(White, Rook, 3, 6);
	sBoard.createChessPiece(White, Bishop, 0, 6);
	sBoard.createChessPiece(White, Bishop, 6, 2);
	sBoard.createChessPiece(White, Bishop, 0, 4);
	sBoard.createChessPiece(White, Rook, 2, 1);
	sBoard.createChessPiece(White, Rook, 1, 3);
	sBoard.createChessPiece(Black, King, 0, 0);
	sBoard.createChessPiece(White, King, 3, 2);
	sBoard.movePiece(1,3,4,3);
	sBoard.movePiece(5,5,6,6);
	sBoard.movePiece(3,6,3,7);
	sBoard.movePiece(1,6,0,1);
	sBoard.movePiece(6,6,7,6);
	sBoard.movePiece(6,5,7,5);
	sBoard.movePiece(0,0,1,0);
	sBoard.movePiece(0,6,2,0);
	sBoard.movePiece(3,2,2,3);
	sBoard.movePiece(1,0,0,0);
	sBoard.movePiece(0,4,3,1);
	sBoard.movePiece(6,6,2,3);
	sBoard.movePiece(0,0,1,0);
	sBoard.movePiece(4,2,6,0);
	sBoard.movePiece(1,0,2,1);
	sBoard.movePiece(3,2,7,2);
	sBoard.movePiece(6,2,7,1);
	sBoard.movePiece(2,1,3,0);
	sBoard.movePiece(7,1,5,3);
	sBoard.movePiece(5,7,6,0);
	sBoard.movePiece(3,0,2,1);
	sBoard.movePiece(3,7,3,6);
	sBoard.movePiece(2,1,3,0);
	sBoard.movePiece(2,3,5,1);
	sBoard.movePiece(2,5,4,5);
	sBoard.movePiece(1,5,3,5);
	sBoard.movePiece(7,0,6,1);
	sBoard.movePiece(2,1,0,7);
	sBoard.movePiece(3,0,2,1);
	sBoard.movePiece(7,5,6,5);
	sBoard.movePiece(2,1,1,1);
	sBoard.movePiece(3,5,4,2);
	sBoard.movePiece(6,1,5,0);
	sBoard.movePiece(1,1,0,1);
	sBoard.movePiece(6,0,2,4);
	sBoard.movePiece(3,5,1,2);
	sBoard.movePiece(0,1,1,0);
	sBoard.movePiece(5,3,7,1);
	sBoard.movePiece(1,0,1,1);
	sBoard.movePiece(6,0,6,0);
	sBoard.movePiece(3,6,1,6);
	sBoard.movePiece(1,1,0,1);
	sBoard.movePiece(1,6,1,3);
	sBoard.movePiece(2,1,6,3);
	sBoard.movePiece(0,1,0,0);
	sBoard.movePiece(4,5,4,7);
	sBoard.movePiece(0,0,0,1);
	sBoard.movePiece(7,5,2,6);
	sBoard.movePiece(4,7,3,7);
	sBoard.movePiece(0,1,0,2);
	sBoard.movePiece(3,7,4,7);
	sBoard.movePiece(7,6,2,3);
	sBoard.movePiece(3,5,4,5);
	sBoard.movePiece(4,3,4,4);
	sBoard.movePiece(4,5,5,5);
	sBoard.movePiece(7,7,1,3);
	sBoard.movePiece(1,3,1,0);
	sBoard.movePiece(0,2,0,3);
	sBoard.movePiece(1,0,2,0);
	sBoard.movePiece(1,6,5,5);
	sBoard.movePiece(5,0,5,4);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
