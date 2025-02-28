#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_4x4_5(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(Black, Rook, 3, 2);
	sBoard.createChessPiece(White, Pawn, 3, 1);
	sBoard.createChessPiece(Black, Pawn, 1, 0);
	sBoard.createChessPiece(Black, Rook, 1, 0);
	sBoard.movePiece(3,1,2,1);
	sBoard.movePiece(1,0,3,0);
	sBoard.movePiece(2,1,0,1);
	sBoard.movePiece(3,2,1,2);
	sBoard.movePiece(2,2,2,0);
	sBoard.movePiece(2,1,2,1);
	sBoard.movePiece(0,0,3,3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
