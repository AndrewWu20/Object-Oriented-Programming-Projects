#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_6x6_2(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(Black, Bishop, 3, 3);
	sBoard.createChessPiece(Black, Bishop, 2, 5);
	sBoard.createChessPiece(Black, Bishop, 1, 5);
	sBoard.createChessPiece(Black, Bishop, 0, 3);
	sBoard.createChessPiece(White, Pawn, 2, 2);
	sBoard.createChessPiece(Black, Pawn, 1, 0);
	sBoard.movePiece(2,2,1,2);
	sBoard.movePiece(3,3,2,2);
	sBoard.movePiece(1,2,0,3);
	sBoard.movePiece(1,5,0,4);
	sBoard.movePiece(5,4,4,2);
	sBoard.movePiece(1,1,3,1);
	sBoard.movePiece(2,5,4,0);
	sBoard.movePiece(5,5,4,0);
	sBoard.movePiece(4,1,1,2);
	sBoard.movePiece(2,2,0,0);
	sBoard.movePiece(4,2,3,1);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
