#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part3_8x8_16(){
	Student::ChessBoard sBoard(8, 8);
	sBoard.createChessPiece(Black, Pawn, 1, 5);
	sBoard.createChessPiece(Black, Pawn, 6, 4);
	sBoard.createChessPiece(Black, Pawn, 1, 4);
	sBoard.createChessPiece(Black, Pawn, 5, 1);
	sBoard.createChessPiece(Black, Pawn, 5, 3);
	sBoard.createChessPiece(White, Pawn, 3, 6);
	sBoard.createChessPiece(Black, Bishop, 4, 3);
	sBoard.createChessPiece(Black, Bishop, 5, 3);
	sBoard.createChessPiece(White, Bishop, 1, 2);
	sBoard.createChessPiece(Black, Bishop, 7, 7);
	sBoard.createChessPiece(Black, Bishop, 4, 6);
	sBoard.createChessPiece(White, Pawn, 7, 0);
	sBoard.createChessPiece(Black, Rook, 3, 7);
	sBoard.createChessPiece(White, Pawn, 5, 7);
	sBoard.createChessPiece(White, Bishop, 3, 0);
	sBoard.createChessPiece(Black, Rook, 3, 3);
	sBoard.createChessPiece(Black, King, 5, 3);
	sBoard.createChessPiece(White, King, 6, 3);
	sBoard.movePiece(6,3,5,3);
	sBoard.movePiece(4,3,6,5);
	sBoard.movePiece(5,3,4,2);
	sBoard.movePiece(5,0,7,4);
	sBoard.movePiece(4,6,5,5);
	sBoard.movePiece(3,6,2,6);
	sBoard.movePiece(3,3,3,4);
	sBoard.movePiece(0,3,3,1);
	sBoard.movePiece(1,2,2,3);
	sBoard.movePiece(6,5,7,4);
	sBoard.movePiece(2,3,0,1);
	sBoard.movePiece(1,7,2,5);
	sBoard.movePiece(5,1,6,1);
	sBoard.movePiece(2,6,1,6);
	sBoard.movePiece(5,5,4,6);
	sBoard.movePiece(6,6,1,4);
	sBoard.movePiece(3,0,0,3);
	sBoard.movePiece(7,4,5,6);
	sBoard.movePiece(0,1,3,4);
	sBoard.movePiece(1,5,1,6);
	sBoard.movePiece(7,7,6,6);
	sBoard.movePiece(3,4,6,1);
	sBoard.movePiece(1,5,2,5);
	sBoard.movePiece(0,3,3,4);
	sBoard.movePiece(0,3,3,0);
	sBoard.movePiece(6,6,4,4);
	sBoard.movePiece(6,1,5,0);
	sBoard.movePiece(6,4,6,3);
	sBoard.movePiece(5,6,4,7);
	sBoard.movePiece(3,0,4,1);
	sBoard.movePiece(4,6,5,5);
	sBoard.movePiece(6,7,2,4);
	sBoard.movePiece(5,0,7,2);
	sBoard.movePiece(5,5,4,6);
	sBoard.movePiece(1,6,0,6);
	sBoard.movePiece(7,2,1,5);
	sBoard.movePiece(4,4,0,0);
	sBoard.movePiece(4,2,5,3);
	sBoard.movePiece(4,6,5,5);
	sBoard.movePiece(1,7,6,5);
	sBoard.movePiece(4,1,3,2);
	sBoard.movePiece(1,4,3,4);
	sBoard.movePiece(3,2,6,5);
	sBoard.movePiece(1,2,2,3);
	sBoard.movePiece(2,5,3,5);
	sBoard.movePiece(7,2,5,4);
	sBoard.movePiece(3,4,4,4);
	sBoard.movePiece(5,0,2,2);
	sBoard.movePiece(5,3,4,2);
	sBoard.movePiece(4,7,2,5);
	sBoard.movePiece(6,5,4,7);
	sBoard.movePiece(3,3,6,1);
	sBoard.movePiece(3,7,1,7);
	sBoard.movePiece(5,4,4,3);
	sBoard.movePiece(2,5,3,4);
	sBoard.movePiece(7,0,6,1);
	sBoard.movePiece(4,3,3,4);
	sBoard.movePiece(4,4,5,4);
	sBoard.movePiece(4,2,3,1);
	sBoard.movePiece(0,1,6,0);
	sBoard.movePiece(5,5,3,3);
	sBoard.movePiece(4,7,7,4);
	sBoard.movePiece(1,7,5,7);
	sBoard.movePiece(3,1,2,2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
