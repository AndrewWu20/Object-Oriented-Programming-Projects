#ifndef __KINGPIECE_H__
#define __KINGPIECE_H__

#include "ChessPiece.hh"

/**
 * Student implementation of a King chess piece.
 * The class is defined within the Student namespace.
 */
namespace Student
{
    class KingPiece : public ChessPiece
    {
        private:
        Type type;

        public:
        KingPiece(ChessBoard &board, Color color, int row, int column):
            ChessPiece(board, color, row, column, King){
                type = King;
            };

        virtual Type getType();
        virtual bool canMoveToLocation(int toRow, int toColumn);
        virtual const char *toString();
    };
}

#endif
