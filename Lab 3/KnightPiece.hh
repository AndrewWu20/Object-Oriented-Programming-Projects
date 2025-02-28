#ifndef _KNIGHPIECE_H__
#define _KNIGHPIECE_H__

#include "ChessPiece.hh"

/**
 * Student implementation of a Rook chess piece.
 * The class is defined within the Student namespace.
 */
namespace Student
{
    class KnightPiece : public ChessPiece
    {
        private:
        Type type;

        public:
        KnightPiece(ChessBoard &board, Color color, int row, int column):
            ChessPiece(board, color, row, column, Knight){
                type = Knight;
            };

        virtual Type getType();
        virtual bool canMoveToLocation(int toRow, int toColumn);
        virtual const char *toString();
    };
}

#endif
