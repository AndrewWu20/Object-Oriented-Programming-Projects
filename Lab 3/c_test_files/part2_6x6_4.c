#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_6x6_4(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(Black, Pawn, 4, 3);
	sBoard.createChessPiece(Black, Bishop, 3, 5);
	sBoard.createChessPiece(Black, Bishop, 4, 5);
	sBoard.createChessPiece(Black, Rook, 0, 5);
	sBoard.createChessPiece(White, Pawn, 2, 3);
	sBoard.createChessPiece(Black, Pawn, 5, 4);
	sBoard.movePiece(2,3,1,3);
	sBoard.movePiece(4,5,2,3);
	sBoard.movePiece(1,3,0,3);
	sBoard.movePiece(2,3,0,1);
	sBoard.movePiece(5,2,4,2);
	sBoard.movePiece(5,2,0,4);
	sBoard.movePiece(2,1,4,0);
	sBoard.movePiece(2,4,5,4);
	sBoard.movePiece(4,5,3,5);
	sBoard.movePiece(5,0,1,2);
	sBoard.movePiece(4,0,2,3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
