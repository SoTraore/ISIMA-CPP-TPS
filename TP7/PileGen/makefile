GG=g++
CFLAGS=-c -Wall -Wextra -g
LFLAGS=-g -o
OBJ=PileGen.o main.o

prog : $(OBJ)
	$(GG) $(LFLAGS) prog $(OBJ)

main.o: main.cpp PileGen.hpp
	$(GG) $(CFLAGS) main.cpp

PileGen.o: PileGen.cpp PileGen.hpp
	$(GG) $(CFLAGS) PileGen.cpp

clean:
	rm -rf $(OBJ) prog
