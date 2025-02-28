#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_6x6_7(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(Black, Bishop, 3, 0);
	sBoard.createChessPiece(White, Bishop, 0, 2);
	sBoard.createChessPiece(White, Bishop, 4, 2);
	sBoard.createChessPiece(Black, Rook, 5, 3);
	sBoard.createChessPiece(White, Rook, 2, 4);
	sBoard.createChessPiece(Black, Bishop, 5, 5);
	sBoard.movePiece(4,2,3,3);
	sBoard.movePiece(3,0,0,3);
	sBoard.movePiece(2,4,2,3);
	sBoard.movePiece(0,3,1,2);
	sBoard.movePiece(1,4,2,3);
	sBoard.movePiece(2,3,2,5);
	sBoard.movePiece(5,3,5,2);
	sBoard.movePiece(3,3,4,2);
	sBoard.movePiece(5,5,2,2);
	sBoard.movePiece(4,4,3,4);
	sBoard.movePiece(0,2,3,5);
	sBoard.movePiece(5,2,4,2);
	sBoard.movePiece(2,5,2,2);
	sBoard.movePiece(1,2,4,5);
	sBoard.movePiece(1,5,0,3);
	sBoard.movePiece(3,5,2,4);
	sBoard.movePiece(4,2,2,2);
	sBoard.movePiece(2,4,1,3);
	sBoard.movePiece(2,2,2,1);
	sBoard.movePiece(3,4,1,0);
	sBoard.movePiece(1,3,3,1);
	sBoard.movePiece(4,5,2,3);
	sBoard.movePiece(3,1,2,0);
	sBoard.movePiece(2,3,3,2);
	sBoard.movePiece(3,2,2,2);
	sBoard.movePiece(2,0,1,1);
	sBoard.movePiece(3,2,1,4);
	sBoard.movePiece(1,1,0,2);
	sBoard.movePiece(2,1,2,4);
	sBoard.movePiece(3,3,1,0);
	sBoard.movePiece(0,2,1,3);
	sBoard.movePiece(2,4,4,4);
	sBoard.movePiece(1,3,4,0);
	sBoard.movePiece(1,4,0,5);
	sBoard.movePiece(0,2,4,4);
	sBoard.movePiece(4,0,5,1);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
