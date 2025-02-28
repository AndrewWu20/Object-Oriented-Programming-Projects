#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_14(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Rook, 6, 4);
	sBoard.createChessPiece(Black, Rook, 1, 4);
	sBoard.createChessPiece(White, Bishop, 1, 3);
	sBoard.createChessPiece(Black, Pawn, 2, 1);
	sBoard.createChessPiece(Black, Rook, 0, 3);
	sBoard.createChessPiece(Black, Pawn, 6, 2);
	sBoard.createChessPiece(White, Pawn, 7, 1);
	sBoard.createChessPiece(Black, Pawn, 6, 2);
	sBoard.createChessPiece(White, Bishop, 6, 7);
	sBoard.createChessPiece(White, Bishop, 4, 7);
	sBoard.createChessPiece(Black, Pawn, 3, 6);
	sBoard.createChessPiece(White, Bishop, 7, 4);
	sBoard.createChessPiece(Black, Bishop, 7, 1);
	sBoard.createChessPiece(Black, Rook, 4, 5);
	sBoard.createChessPiece(White, Rook, 6, 4);
	sBoard.createChessPiece(White, Pawn, 6, 5);
	sBoard.createChessPiece(Black, King, 6, 7);
	sBoard.createChessPiece(White, King, 5, 1);
	sBoard.movePiece(7,4,4,1);
	sBoard.movePiece(4,5,4,4);
	sBoard.movePiece(1,3,3,1);
	sBoard.movePiece(3,3,3,2);
	sBoard.movePiece(1,4,1,5);
	sBoard.movePiece(6,5,5,5);
	sBoard.movePiece(4,4,6,4);
	sBoard.movePiece(4,0,5,2);
	sBoard.movePiece(5,1,4,2);
	sBoard.movePiece(0,3,0,5);
	sBoard.movePiece(3,1,2,0);
	sBoard.movePiece(3,0,1,0);
	sBoard.movePiece(7,1,6,0);
	sBoard.movePiece(4,2,4,3);
	sBoard.movePiece(6,0,5,1);
	sBoard.movePiece(4,4,0,4);
	sBoard.movePiece(4,3,5,2);
	sBoard.movePiece(5,1,4,2);
	sBoard.movePiece(4,1,3,0);
	sBoard.movePiece(3,4,7,5);
	sBoard.movePiece(1,5,3,5);
	sBoard.movePiece(4,7,7,4);
	sBoard.movePiece(4,2,0,6);
	sBoard.movePiece(6,0,7,7);
	sBoard.movePiece(5,2,6,1);
	sBoard.movePiece(6,7,7,7);
	sBoard.movePiece(2,0,4,2);
	sBoard.movePiece(3,4,0,3);
	sBoard.movePiece(6,4,6,3);
	sBoard.movePiece(6,1,7,2);
	sBoard.movePiece(0,6,4,2);
	sBoard.movePiece(4,2,1,0);
	sBoard.movePiece(7,4,6,5);
	sBoard.movePiece(2,1,3,1);
	sBoard.movePiece(3,0,5,2);
	sBoard.movePiece(6,3,0,2);
	sBoard.movePiece(6,3,2,3);
	sBoard.movePiece(5,2,4,3);
	sBoard.movePiece(0,5,0,3);
	sBoard.movePiece(6,5,2,5);
	sBoard.movePiece(4,3,1,6);
	sBoard.movePiece(2,3,5,3);
	sBoard.movePiece(1,6,4,3);
	sBoard.movePiece(3,4,1,0);
	sBoard.movePiece(0,3,3,3);
	sBoard.movePiece(4,3,5,2);
	sBoard.movePiece(3,1,4,1);
	sBoard.movePiece(4,6,3,2);
	sBoard.movePiece(5,2,0,7);
	sBoard.movePiece(5,3,5,4);
	sBoard.movePiece(6,5,5,4);
	sBoard.movePiece(0,6,1,4);
	sBoard.movePiece(7,7,6,6);
	sBoard.movePiece(5,4,3,2);
	sBoard.movePiece(3,3,3,2);
	sBoard.movePiece(6,6,1,4);
	sBoard.movePiece(0,7,5,2);
	sBoard.movePiece(3,5,0,5);
	sBoard.movePiece(5,5,4,5);
	sBoard.movePiece(5,5,2,5);
	sBoard.movePiece(0,5,0,1);
	sBoard.movePiece(5,2,4,3);
	sBoard.movePiece(0,1,0,5);
	sBoard.movePiece(1,3,0,2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
