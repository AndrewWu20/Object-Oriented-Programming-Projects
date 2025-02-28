#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_10(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Rook, 4, 5);
	sBoard.createChessPiece(Black, Rook, 5, 6);
	sBoard.createChessPiece(White, Pawn, 1, 5);
	sBoard.createChessPiece(Black, Bishop, 7, 6);
	sBoard.createChessPiece(White, Pawn, 5, 5);
	sBoard.createChessPiece(White, Rook, 3, 6);
	sBoard.createChessPiece(Black, Bishop, 7, 1);
	sBoard.createChessPiece(Black, Bishop, 0, 2);
	sBoard.createChessPiece(Black, Rook, 7, 6);
	sBoard.createChessPiece(White, Pawn, 4, 2);
	sBoard.createChessPiece(White, Rook, 0, 0);
	sBoard.createChessPiece(Black, Bishop, 7, 5);
	sBoard.createChessPiece(White, Rook, 2, 1);
	sBoard.createChessPiece(White, Rook, 0, 7);
	sBoard.createChessPiece(White, Bishop, 0, 4);
	sBoard.createChessPiece(White, Bishop, 6, 7);
	sBoard.createChessPiece(Black, King, 1, 2);
	sBoard.createChessPiece(White, King, 0, 1);
	sBoard.movePiece(0,1,1,2);
	sBoard.movePiece(0,2,2,0);
	sBoard.movePiece(0,7,0,6);
	sBoard.movePiece(5,4,0,6);
	sBoard.movePiece(5,6,5,5);
	sBoard.movePiece(0,0,1,0);
	sBoard.movePiece(7,5,4,2);
	sBoard.movePiece(3,7,4,7);
	sBoard.movePiece(0,6,2,6);
	sBoard.movePiece(7,1,6,2);
	sBoard.movePiece(0,4,2,2);
	sBoard.movePiece(3,1,1,0);
	sBoard.movePiece(5,5,4,5);
	sBoard.movePiece(2,2,3,1);
	sBoard.movePiece(4,2,1,5);
	sBoard.movePiece(5,5,1,2);
	sBoard.movePiece(1,2,2,3);
	sBoard.movePiece(2,0,0,2);
	sBoard.movePiece(3,1,6,4);
	sBoard.movePiece(0,5,7,7);
	sBoard.movePiece(7,6,7,3);
	sBoard.movePiece(3,6,3,3);
	sBoard.movePiece(4,5,4,1);
	sBoard.movePiece(7,5,6,6);
	sBoard.movePiece(2,6,2,7);
	sBoard.movePiece(4,1,5,1);
	sBoard.movePiece(1,0,0,0);
	sBoard.movePiece(3,3,3,5);
	sBoard.movePiece(0,2,1,1);
	sBoard.movePiece(2,1,2,0);
	sBoard.movePiece(1,5,3,3);
	sBoard.movePiece(1,0,2,6);
	sBoard.movePiece(2,0,2,1);
	sBoard.movePiece(7,3,7,2);
	sBoard.movePiece(2,7,5,7);
	sBoard.movePiece(1,3,0,4);
	sBoard.movePiece(7,2,7,1);
	sBoard.movePiece(6,4,3,1);
	sBoard.movePiece(6,2,7,3);
	sBoard.movePiece(6,3,1,4);
	sBoard.movePiece(0,0,6,0);
	sBoard.movePiece(3,3,4,4);
	sBoard.movePiece(6,0,2,0);
	sBoard.movePiece(7,0,3,5);
	sBoard.movePiece(4,4,6,2);
	sBoard.movePiece(2,3,3,4);
	sBoard.movePiece(1,1,7,7);
	sBoard.movePiece(1,2,0,0);
	sBoard.movePiece(3,1,4,0);
	sBoard.movePiece(5,1,5,4);
	sBoard.movePiece(3,4,4,3);
	sBoard.movePiece(6,2,6,0);
	sBoard.movePiece(5,4,5,2);
	sBoard.movePiece(5,7,5,2);
	sBoard.movePiece(7,1,5,1);
	sBoard.movePiece(1,1,4,5);
	sBoard.movePiece(2,1,5,1);
	sBoard.movePiece(7,7,1,1);
	sBoard.movePiece(4,0,1,3);
	sBoard.movePiece(4,7,5,3);
	sBoard.movePiece(6,2,5,1);
	sBoard.movePiece(2,0,2,1);
	sBoard.movePiece(1,1,4,4);
	sBoard.movePiece(4,2,6,6);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
