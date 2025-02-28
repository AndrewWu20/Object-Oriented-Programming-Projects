#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_4x4_4(){
	Student::ChessBoard sBoard(4, 4);
	sBoard.createChessPiece(Black, Pawn, 0, 0);
	sBoard.createChessPiece(White, Pawn, 0, 3);
	sBoard.createChessPiece(Black, Pawn, 3, 0);
	sBoard.createChessPiece(Black, Rook, 0, 3);
	sBoard.movePiece(0,1,2,2);
	sBoard.movePiece(3,3,3,2);
	sBoard.movePiece(1,0,0,3);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
