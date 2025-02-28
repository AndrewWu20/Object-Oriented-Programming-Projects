
import os


if __name__=="__main__":
    files = os.listdir("./test_files")
    
    include_file = open(f"include_file.txt", "w")
    
    for fl in files:
        with open(f"./test_files/{fl}", 'r') as original:
            include_file.write(f"#include \"c_test_files/{fl.removesuffix('.txt')}.c\"\n")
            with open(f"./c_test_files/{fl.removesuffix('.txt')}.c", 'w') as ctest:
                lines = original.read().split('\n')

                ctest.write(f"#include \"../Chess.h\"\n")
                ctest.write(f"#include \"../ChessBoard.hh\"\n")
                ctest.write(f"#include \"../ChessPiece.hh\"\n")
                ctest.write(f"#include \"../PawnPiece.hh\"\n")
                ctest.write(f"#include \"../RookPiece.hh\"\n")
                ctest.write(f"#include \"../BishopPiece.hh\"\n")
                ctest.write(f"#include \"../KingPiece.hh\"\n")
                ctest.write(f"#include <iostream>\n\n")
                
                ctest.write(f"void test_{fl.removesuffix('.txt')}(){'{'}\n")
                ctest.write(f"\tStudent::ChessBoard sBoard({lines[1][0]}, {lines[1][0]});\n")
                
                
                for line in lines:
                    if(len(line) < 5):
                        pass
                    elif(line[0:5] == "isVal"):
                        ctest.write(f"\tisValidScan(sBoard);\n")
                    elif(line[0:5] == "under"):
                        ctest.write(f"\tunderThreatScan(sBoard);\n")
                    elif(line[0:3] == "mov"):
                        fr = line[10]
                        fc = line[12]
                        tr = line[14]
                        tc = line[16]
                        ctest.write(f"\tsBoard.movePiece({fr},{fc},{tr},{tc});\n")
                    elif((line[0]=="w" or line[0]=="b") and line[1] ==" "):
                        if(line[0] == 'b'):
                            color = "Black"
                        else: 
                            color = "White"
                            
                        if(line[2] == 'p'):
                            typ = "Pawn"
                        elif(line[2] == 'b'):
                            typ = "Bishop"
                        elif(line[2] == 'r'):
                            typ = "Rook"
                        else: 
                            typ = "King"
                        r = line[4]
                        c = line[6]
                        
                        ctest.write(f"\tsBoard.createChessPiece({color}, {typ}, {r}, {c});\n")
                ctest.write("\n\tstd::cout << sBoard.displayBoard().str() << \"\\n\";\n")
                ctest.write("\treturn;\n}\n")