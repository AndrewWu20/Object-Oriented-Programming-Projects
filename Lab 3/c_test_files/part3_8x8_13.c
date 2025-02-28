#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_13(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Pawn, 6, 2);
	sBoard.createChessPiece(White, Bishop, 1, 6);
	sBoard.createChessPiece(White, Rook, 3, 7);
	sBoard.createChessPiece(Black, Rook, 2, 2);
	sBoard.createChessPiece(Black, Pawn, 1, 5);
	sBoard.createChessPiece(White, Rook, 3, 4);
	sBoard.createChessPiece(Black, Rook, 4, 4);
	sBoard.createChessPiece(White, Rook, 5, 0);
	sBoard.createChessPiece(White, Bishop, 2, 3);
	sBoard.createChessPiece(White, Rook, 2, 6);
	sBoard.createChessPiece(White, Rook, 6, 6);
	sBoard.createChessPiece(White, Rook, 0, 5);
	sBoard.createChessPiece(Black, Bishop, 2, 3);
	sBoard.createChessPiece(White, Bishop, 0, 3);
	sBoard.createChessPiece(Black, Bishop, 7, 1);
	sBoard.createChessPiece(White, Bishop, 1, 6);
	sBoard.createChessPiece(Black, King, 7, 3);
	sBoard.createChessPiece(White, King, 5, 6);
	sBoard.movePiece(5,0,2,0);
	sBoard.movePiece(2,3,1,2);
	sBoard.movePiece(5,6,5,7);
	sBoard.movePiece(3,2,6,0);
	sBoard.movePiece(1,2,2,3);
	sBoard.movePiece(3,4,3,0);
	sBoard.movePiece(2,3,1,4);
	sBoard.movePiece(3,5,3,5);
	sBoard.movePiece(0,3,1,2);
	sBoard.movePiece(1,4,4,1);
	sBoard.movePiece(6,6,6,2);
	sBoard.movePiece(5,2,3,2);
	sBoard.movePiece(1,5,2,6);
	sBoard.movePiece(0,5,0,2);
	sBoard.movePiece(7,1,6,0);
	sBoard.movePiece(2,4,7,0);
	sBoard.movePiece(3,7,3,5);
	sBoard.movePiece(4,1,5,0);
	sBoard.movePiece(6,2,7,2);
	sBoard.movePiece(7,7,2,5);
	sBoard.movePiece(7,3,6,4);
	sBoard.movePiece(3,0,5,0);
	sBoard.movePiece(2,2,2,1);
	sBoard.movePiece(0,3,7,7);
	sBoard.movePiece(3,5,2,5);
	sBoard.movePiece(4,4,4,5);
	sBoard.movePiece(2,0,0,0);
	sBoard.movePiece(1,7,1,5);
	sBoard.movePiece(6,0,5,1);
	sBoard.movePiece(0,0,0,1);
	sBoard.movePiece(4,5,4,4);
	sBoard.movePiece(4,1,5,0);
	sBoard.movePiece(2,5,7,5);
	sBoard.movePiece(2,1,2,3);
	sBoard.movePiece(7,5,6,5);
	sBoard.movePiece(1,1,2,0);
	sBoard.movePiece(6,4,5,3);
	sBoard.movePiece(1,6,0,7);
	sBoard.movePiece(4,4,0,4);
	sBoard.movePiece(2,1,3,0);
	sBoard.movePiece(5,7,4,7);
	sBoard.movePiece(0,4,0,5);
	sBoard.movePiece(7,2,3,2);
	sBoard.movePiece(1,0,0,5);
	sBoard.movePiece(0,5,0,6);
	sBoard.movePiece(5,0,3,0);
	sBoard.movePiece(0,6,0,5);
	sBoard.movePiece(5,5,3,6);
	sBoard.movePiece(0,2,0,5);
	sBoard.movePiece(2,3,3,3);
	sBoard.movePiece(0,5,2,5);
	sBoard.movePiece(3,5,6,6);
	sBoard.movePiece(5,3,4,3);
	sBoard.movePiece(6,5,6,7);
	sBoard.movePiece(3,3,3,6);
	sBoard.movePiece(0,0,2,7);
	sBoard.movePiece(2,5,2,2);
	sBoard.movePiece(4,3,4,4);
	sBoard.movePiece(0,1,4,1);
	sBoard.movePiece(1,3,2,4);
	sBoard.movePiece(4,4,5,3);
	sBoard.movePiece(4,1,4,5);
	sBoard.movePiece(5,1,4,0);
	sBoard.movePiece(4,1,3,5);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
