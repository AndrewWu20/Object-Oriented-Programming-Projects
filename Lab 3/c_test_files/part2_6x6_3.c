#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_6x6_3(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(Black, Bishop, 4, 4);
	sBoard.createChessPiece(Black, Pawn, 5, 3);
	sBoard.createChessPiece(White, Pawn, 4, 5);
	sBoard.createChessPiece(Black, Rook, 2, 3);
	sBoard.createChessPiece(Black, Pawn, 2, 1);
	sBoard.createChessPiece(White, Rook, 1, 3);
	sBoard.movePiece(1,3,1,5);
	sBoard.movePiece(4,4,3,5);
	sBoard.movePiece(1,5,2,5);
	sBoard.movePiece(2,3,2,2);
	sBoard.movePiece(2,3,0,4);
	sBoard.movePiece(2,5,2,3);
	sBoard.movePiece(2,2,2,3);
	sBoard.movePiece(4,5,3,5);
	sBoard.movePiece(2,3,2,2);
	sBoard.movePiece(2,4,2,1);
	sBoard.movePiece(3,5,2,5);
	sBoard.movePiece(2,2,2,3);
	sBoard.movePiece(2,5,1,5);
	sBoard.movePiece(2,3,0,3);
	sBoard.movePiece(5,0,0,4);
	sBoard.movePiece(1,5,0,5);
	sBoard.movePiece(0,3,1,3);
	sBoard.movePiece(0,1,3,4);
	sBoard.movePiece(3,2,1,5);
	sBoard.movePiece(2,1,3,5);
	sBoard.movePiece(5,5,3,2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
