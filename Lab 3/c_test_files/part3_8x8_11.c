#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_11(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(White, Pawn, 3, 0);
	sBoard.createChessPiece(Black, Bishop, 3, 6);
	sBoard.createChessPiece(White, Rook, 6, 1);
	sBoard.createChessPiece(White, Pawn, 0, 2);
	sBoard.createChessPiece(Black, Pawn, 4, 0);
	sBoard.createChessPiece(Black, Rook, 7, 0);
	sBoard.createChessPiece(White, Pawn, 2, 5);
	sBoard.createChessPiece(White, Pawn, 2, 3);
	sBoard.createChessPiece(White, Pawn, 3, 1);
	sBoard.createChessPiece(Black, Bishop, 7, 7);
	sBoard.createChessPiece(Black, Rook, 0, 3);
	sBoard.createChessPiece(Black, Bishop, 6, 6);
	sBoard.createChessPiece(White, Rook, 6, 4);
	sBoard.createChessPiece(Black, Pawn, 4, 5);
	sBoard.createChessPiece(White, Bishop, 2, 4);
	sBoard.createChessPiece(White, Bishop, 7, 5);
	sBoard.createChessPiece(Black, King, 6, 4);
	sBoard.createChessPiece(White, King, 1, 5);
	sBoard.movePiece(3,1,2,1);
	sBoard.movePiece(6,4,5,4);
	sBoard.movePiece(2,4,4,2);
	sBoard.movePiece(6,2,5,0);
	sBoard.movePiece(4,5,5,5);
	sBoard.movePiece(6,1,4,1);
	sBoard.movePiece(7,0,6,0);
	sBoard.movePiece(2,5,4,2);
	sBoard.movePiece(4,1,7,1);
	sBoard.movePiece(5,4,4,3);
	sBoard.movePiece(1,5,2,6);
	sBoard.movePiece(5,6,4,2);
	sBoard.movePiece(6,0,6,4);
	sBoard.movePiece(4,2,2,0);
	sBoard.movePiece(3,6,7,2);
	sBoard.movePiece(2,0,3,7);
	sBoard.movePiece(2,6,3,5);
	sBoard.movePiece(6,4,1,4);
	sBoard.movePiece(2,0,5,3);
	sBoard.movePiece(0,1,5,7);
	sBoard.movePiece(4,0,5,0);
	sBoard.movePiece(2,3,1,3);
	sBoard.movePiece(7,2,6,1);
	sBoard.movePiece(3,5,7,1);
	sBoard.movePiece(5,3,3,1);
	sBoard.movePiece(5,0,6,0);
	sBoard.movePiece(7,5,6,4);
	sBoard.movePiece(5,6,3,5);
	sBoard.movePiece(0,3,0,5);
	sBoard.movePiece(6,4,7,3);
	sBoard.movePiece(1,4,1,7);
	sBoard.movePiece(2,3,0,0);
	sBoard.movePiece(3,5,4,5);
	sBoard.movePiece(6,1,7,0);
	sBoard.movePiece(3,1,7,5);
	sBoard.movePiece(3,2,5,5);
	sBoard.movePiece(0,5,0,7);
	sBoard.movePiece(7,1,7,2);
	sBoard.movePiece(1,7,1,3);
	sBoard.movePiece(0,0,6,0);
	sBoard.movePiece(7,5,6,4);
	sBoard.movePiece(0,7,2,7);
	sBoard.movePiece(4,5,5,6);
	sBoard.movePiece(3,6,0,2);
	sBoard.movePiece(6,6,7,5);
	sBoard.movePiece(5,6,4,6);
	sBoard.movePiece(4,3,3,4);
	sBoard.movePiece(6,0,1,2);
	sBoard.movePiece(6,4,2,0);
	sBoard.movePiece(7,0,4,3);
	sBoard.movePiece(7,2,4,2);
	sBoard.movePiece(3,3,2,3);
	sBoard.movePiece(2,7,4,7);
	sBoard.movePiece(4,6,3,6);
	sBoard.movePiece(4,7,4,6);
	sBoard.movePiece(4,7,2,3);
	sBoard.movePiece(3,6,2,7);
	sBoard.movePiece(4,3,6,5);
	sBoard.movePiece(7,3,6,4);
	sBoard.movePiece(1,6,6,7);
	sBoard.movePiece(3,4,3,5);
	sBoard.movePiece(4,2,6,2);
	sBoard.movePiece(3,5,4,5);
	sBoard.movePiece(2,7,1,5);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
