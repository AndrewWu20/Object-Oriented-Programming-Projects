#ifndef __PAWNPIECE_H__
#define __PAWNPIECE_H__

#include "ChessPiece.hh"

/**
 * Student implementation of a Pawn chess piece.
 * The class is defined within the Student namespace.
 */
namespace Student
{
    class PawnPiece : public ChessPiece
    {
        private:
        Type type;
        int enpassant;

        public:
        PawnPiece(ChessBoard &board, Color color, int row, int column):
            ChessPiece(board, color, row, column, Pawn){
                type = Pawn;
                enpassant = 0;
            };

        virtual Type getType();
        virtual int getEnPassant();
        virtual bool canMoveToLocation(int toRow, int toColumn);
        virtual const char *toString();
    };
}

#endif
