#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_15(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Pawn, 6, 6);
	sBoard.createChessPiece(White, Pawn, 7, 1);
	sBoard.createChessPiece(Black, Bishop, 0, 3);
	sBoard.createChessPiece(White, Rook, 0, 1);
	sBoard.createChessPiece(White, Bishop, 4, 4);
	sBoard.createChessPiece(Black, Pawn, 4, 0);
	sBoard.createChessPiece(White, Rook, 1, 2);
	sBoard.createChessPiece(Black, Rook, 4, 0);
	sBoard.createChessPiece(Black, Pawn, 6, 7);
	sBoard.createChessPiece(White, Rook, 1, 1);
	sBoard.createChessPiece(White, Pawn, 4, 3);
	sBoard.createChessPiece(Black, Bishop, 4, 2);
	sBoard.createChessPiece(Black, Bishop, 7, 6);
	sBoard.createChessPiece(White, Rook, 6, 6);
	sBoard.createChessPiece(White, Rook, 0, 2);
	sBoard.createChessPiece(White, Pawn, 2, 5);
	sBoard.createChessPiece(Black, King, 4, 7);
	sBoard.createChessPiece(White, King, 5, 5);
	sBoard.movePiece(4,4,1,7);
	sBoard.movePiece(4,0,2,0);
	sBoard.movePiece(6,6,6,0);
	sBoard.movePiece(1,6,6,2);
	sBoard.movePiece(0,3,1,4);
	sBoard.movePiece(1,7,3,5);
	sBoard.movePiece(4,2,0,6);
	sBoard.movePiece(4,7,3,2);
	sBoard.movePiece(5,5,6,4);
	sBoard.movePiece(1,4,3,2);
	sBoard.movePiece(6,4,7,4);
	sBoard.movePiece(2,1,5,3);
	sBoard.movePiece(2,0,2,3);
	sBoard.movePiece(6,0,1,0);
	sBoard.movePiece(3,2,4,1);
	sBoard.movePiece(0,3,4,6);
	sBoard.movePiece(7,4,7,3);
	sBoard.movePiece(4,1,3,0);
	sBoard.movePiece(0,2,0,6);
	sBoard.movePiece(2,4,6,2);
	sBoard.movePiece(3,0,2,1);
	sBoard.movePiece(1,0,2,0);
	sBoard.movePiece(2,1,3,0);
	sBoard.movePiece(5,7,6,3);
	sBoard.movePiece(0,1,0,5);
	sBoard.movePiece(3,0,2,1);
	sBoard.movePiece(1,1,2,1);
	sBoard.movePiece(7,0,1,3);
	sBoard.movePiece(2,3,1,3);
	sBoard.movePiece(3,5,6,2);
	sBoard.movePiece(4,7,3,7);
	sBoard.movePiece(6,1,2,6);
	sBoard.movePiece(6,2,3,5);
	sBoard.movePiece(1,3,0,3);
	sBoard.movePiece(3,5,5,3);
	sBoard.movePiece(0,1,1,5);
	sBoard.movePiece(7,6,4,3);
	sBoard.movePiece(7,3,7,2);
	sBoard.movePiece(0,3,0,1);
	sBoard.movePiece(2,1,1,7);
	sBoard.movePiece(1,2,1,3);
	sBoard.movePiece(0,1,0,4);
	sBoard.movePiece(0,6,1,6);
	sBoard.movePiece(0,3,1,0);
	sBoard.movePiece(0,4,4,4);
	sBoard.movePiece(5,3,3,1);
	sBoard.movePiece(4,4,3,4);
	sBoard.movePiece(6,4,6,0);
	sBoard.movePiece(2,1,0,1);
	sBoard.movePiece(3,7,2,7);
	sBoard.movePiece(0,5,0,4);
	sBoard.movePiece(1,3,6,6);
	sBoard.movePiece(3,4,3,7);
	sBoard.movePiece(1,3,3,3);
	sBoard.movePiece(4,3,3,2);
	sBoard.movePiece(7,2,1,1);
	sBoard.movePiece(7,2,6,3);
	sBoard.movePiece(3,7,5,7);
	sBoard.movePiece(2,0,1,0);
	sBoard.movePiece(1,5,1,1);
	sBoard.movePiece(3,2,5,4);
	sBoard.movePiece(6,3,7,4);
	sBoard.movePiece(5,7,3,7);
	sBoard.movePiece(5,2,0,6);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
