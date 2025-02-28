#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_18(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Pawn, 5, 7);
	sBoard.createChessPiece(Black, Pawn, 4, 7);
	sBoard.createChessPiece(White, Bishop, 7, 5);
	sBoard.createChessPiece(Black, Rook, 7, 1);
	sBoard.createChessPiece(White, Pawn, 7, 2);
	sBoard.createChessPiece(Black, Pawn, 6, 2);
	sBoard.createChessPiece(Black, Bishop, 5, 7);
	sBoard.createChessPiece(White, Bishop, 2, 6);
	sBoard.createChessPiece(Black, Rook, 5, 2);
	sBoard.createChessPiece(White, Pawn, 1, 6);
	sBoard.createChessPiece(Black, Bishop, 4, 4);
	sBoard.createChessPiece(White, Rook, 6, 3);
	sBoard.createChessPiece(White, Bishop, 5, 3);
	sBoard.createChessPiece(Black, Rook, 5, 3);
	sBoard.createChessPiece(White, Pawn, 3, 7);
	sBoard.createChessPiece(Black, Bishop, 5, 6);
	sBoard.createChessPiece(Black, King, 0, 0);
	sBoard.createChessPiece(White, King, 6, 2);
	sBoard.movePiece(6,2,7,1);
	sBoard.movePiece(5,6,6,5);
	sBoard.movePiece(1,6,0,6);
	sBoard.movePiece(4,7,0,3);
	sBoard.movePiece(6,5,2,1);
	sBoard.movePiece(6,3,6,6);
	sBoard.movePiece(5,3,5,5);
	sBoard.movePiece(4,6,5,3);
	sBoard.movePiece(7,1,6,0);
	sBoard.movePiece(5,2,6,2);
	sBoard.movePiece(6,6,6,2);
	sBoard.movePiece(4,7,4,6);
	sBoard.movePiece(2,1,3,0);
	sBoard.movePiece(6,2,1,2);
	sBoard.movePiece(5,7,3,5);
	sBoard.movePiece(3,7,6,2);
	sBoard.movePiece(2,6,3,5);
	sBoard.movePiece(4,4,5,3);
	sBoard.movePiece(1,2,1,3);
	sBoard.movePiece(7,3,3,3);
	sBoard.movePiece(5,5,6,5);
	sBoard.movePiece(6,0,5,0);
	sBoard.movePiece(6,5,6,7);
	sBoard.movePiece(7,4,1,3);
	sBoard.movePiece(1,3,1,1);
	sBoard.movePiece(3,0,2,1);
	sBoard.movePiece(7,2,6,2);
	sBoard.movePiece(2,1,5,1);
	sBoard.movePiece(2,1,5,4);
	sBoard.movePiece(1,1,0,1);
	sBoard.movePiece(0,0,1,0);
	sBoard.movePiece(7,0,3,6);
	sBoard.movePiece(0,1,3,1);
	sBoard.movePiece(6,7,6,4);
	sBoard.movePiece(3,1,6,1);
	sBoard.movePiece(1,4,5,4);
	sBoard.movePiece(5,4,2,7);
	sBoard.movePiece(6,1,7,1);
	sBoard.movePiece(2,7,1,6);
	sBoard.movePiece(0,4,1,4);
	sBoard.movePiece(3,5,0,2);
	sBoard.movePiece(5,3,4,2);
	sBoard.movePiece(0,2,1,3);
	sBoard.movePiece(6,4,7,2);
	sBoard.movePiece(4,2,3,1);
	sBoard.movePiece(7,1,5,1);
	sBoard.movePiece(3,1,4,0);
	sBoard.movePiece(2,1,4,5);
	sBoard.movePiece(5,0,4,0);
	sBoard.movePiece(6,4,6,3);
	sBoard.movePiece(5,1,5,2);
	sBoard.movePiece(7,2,3,0);
	sBoard.movePiece(1,6,0,5);
	sBoard.movePiece(4,0,5,1);
	sBoard.movePiece(6,3,6,2);
	sBoard.movePiece(0,7,2,5);
	sBoard.movePiece(1,3,3,5);
	sBoard.movePiece(1,0,1,1);
	sBoard.movePiece(5,1,4,2);
	sBoard.movePiece(3,0,2,6);
	sBoard.movePiece(6,2,6,3);
	sBoard.movePiece(3,5,5,7);
	sBoard.movePiece(1,1,0,1);
	sBoard.movePiece(0,7,2,1);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
