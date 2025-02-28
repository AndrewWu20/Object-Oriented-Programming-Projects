#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_19(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Rook, 3, 0);
	sBoard.createChessPiece(Black, Rook, 3, 5);
	sBoard.createChessPiece(Black, Pawn, 5, 3);
	sBoard.createChessPiece(White, Rook, 1, 1);
	sBoard.createChessPiece(White, Bishop, 2, 2);
	sBoard.createChessPiece(White, Pawn, 3, 3);
	sBoard.createChessPiece(Black, Rook, 0, 3);
	sBoard.createChessPiece(White, Bishop, 2, 3);
	sBoard.createChessPiece(White, Rook, 3, 5);
	sBoard.createChessPiece(Black, Bishop, 2, 1);
	sBoard.createChessPiece(Black, Rook, 4, 0);
	sBoard.createChessPiece(White, Pawn, 1, 3);
	sBoard.createChessPiece(White, Bishop, 5, 0);
	sBoard.createChessPiece(White, Pawn, 4, 6);
	sBoard.createChessPiece(White, Pawn, 1, 3);
	sBoard.createChessPiece(Black, Rook, 6, 0);
	sBoard.createChessPiece(Black, King, 5, 7);
	sBoard.createChessPiece(White, King, 1, 4);
	sBoard.movePiece(1,4,2,5);
	sBoard.movePiece(3,0,3,1);
	sBoard.movePiece(3,5,3,6);
	sBoard.movePiece(0,4,0,6);
	sBoard.movePiece(4,0,4,6);
	sBoard.movePiece(1,1,2,1);
	sBoard.movePiece(4,6,4,7);
	sBoard.movePiece(6,2,1,1);
	sBoard.movePiece(2,1,1,1);
	sBoard.movePiece(3,1,6,1);
	sBoard.movePiece(1,1,5,1);
	sBoard.movePiece(7,7,7,1);
	sBoard.movePiece(4,7,3,7);
	sBoard.movePiece(3,6,1,6);
	sBoard.movePiece(0,3,0,6);
	sBoard.movePiece(0,1,4,3);
	sBoard.movePiece(2,2,3,1);
	sBoard.movePiece(3,7,3,4);
	sBoard.movePiece(5,1,5,3);
	sBoard.movePiece(2,2,1,3);
	sBoard.movePiece(3,4,5,4);
	sBoard.movePiece(2,3,3,2);
	sBoard.movePiece(6,1,6,3);
	sBoard.movePiece(1,5,1,5);
	sBoard.movePiece(5,0,4,1);
	sBoard.movePiece(0,6,0,4);
	sBoard.movePiece(3,2,0,5);
	sBoard.movePiece(3,3,4,2);
	sBoard.movePiece(0,4,2,4);
	sBoard.movePiece(2,5,3,6);
	sBoard.movePiece(6,3,6,5);
	sBoard.movePiece(3,0,3,5);
	sBoard.movePiece(5,3,4,3);
	sBoard.movePiece(2,4,3,4);
	sBoard.movePiece(3,6,2,7);
	sBoard.movePiece(2,3,6,1);
	sBoard.movePiece(6,5,6,6);
	sBoard.movePiece(3,1,6,4);
	sBoard.movePiece(6,0,5,0);
	sBoard.movePiece(0,0,1,3);
	sBoard.movePiece(1,6,1,4);
	sBoard.movePiece(6,6,0,6);
	sBoard.movePiece(6,4,4,6);
	sBoard.movePiece(5,6,4,2);
	sBoard.movePiece(5,7,6,7);
	sBoard.movePiece(4,1,5,2);
	sBoard.movePiece(5,0,3,0);
	sBoard.movePiece(2,2,2,3);
	sBoard.movePiece(5,2,6,3);
	sBoard.movePiece(3,4,3,3);
	sBoard.movePiece(4,3,4,1);
	sBoard.movePiece(2,6,0,6);
	sBoard.movePiece(5,4,3,4);
	sBoard.movePiece(1,3,0,3);
	sBoard.movePiece(3,3,5,3);
	sBoard.movePiece(4,5,4,7);
	sBoard.movePiece(4,1,6,1);
	sBoard.movePiece(3,4,6,4);
	sBoard.movePiece(6,1,6,2);
	sBoard.movePiece(0,5,2,1);
	sBoard.movePiece(6,7,7,7);
	sBoard.movePiece(4,6,1,3);
	sBoard.movePiece(3,0,3,7);
	sBoard.movePiece(7,7,2,5);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
