#include "../Chess.h"
#include "../ChessBoard.hh"
#include "../ChessPiece.hh"
#include "../PawnPiece.hh"
#include "../RookPiece.hh"
#include "../BishopPiece.hh"
#include "../KingPiece.hh"
#include <iostream>

void test_part2_6x6_5(){
	Student::ChessBoard sBoard(6, 6);
	sBoard.createChessPiece(White, Bishop, 3, 5);
	sBoard.createChessPiece(White, Pawn, 4, 4);
	sBoard.createChessPiece(White, Bishop, 4, 5);
	sBoard.createChessPiece(White, Pawn, 1, 2);
	sBoard.createChessPiece(White, Pawn, 1, 3);
	sBoard.createChessPiece(White, Bishop, 2, 3);
	sBoard.movePiece(4,4,3,4);
	sBoard.movePiece(0,5,3,2);
	sBoard.movePiece(5,0,4,4);
	sBoard.movePiece(0,5,1,1);
	sBoard.movePiece(5,5,1,1);
	sBoard.movePiece(4,1,2,5);
	sBoard.movePiece(5,0,0,2);
	sBoard.movePiece(2,4,2,2);

	std::cout << sBoard.displayBoard().str() << "\n";
	return;
}
