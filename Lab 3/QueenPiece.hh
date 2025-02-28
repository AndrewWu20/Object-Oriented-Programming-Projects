#ifndef _QUEENPIECE_H__
#define _QUEENPIECE_H__

#include "ChessPiece.hh"

/**
 * Student implementation of a Rook chess piece.
 * The class is defined within the Student namespace.
 */
namespace Student
{
    class QueenPiece : public ChessPiece
    {
        private:
        Type type;

        public:
        QueenPiece(ChessBoard &board, Color color, int row, int column):
            ChessPiece(board, color, row, column, Queen){
                type = Queen;
            };

        virtual Type getType();
        virtual bool canMoveToLocation(int toRow, int toColumn);
        virtual const char *toString();
    };
}

#endif
