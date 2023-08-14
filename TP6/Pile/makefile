GG=g++
CFLAGS=-c -Wall -Wextra
LFLAGS=-g -o
OBJ=Pile.o Main.o

prog: $(OBJ)
	$(GG) $(LFLAGS) prog $(OBJ)

Main.o: Main.cpp Pile.hpp
	$(GG) $(CFLAGS) Main.cpp

Pile.o: Pile.cpp Pile.hpp
	$(GG) $(CFLAGS) Pile.cpp

clean:
	rm -rf $(OBJ) prog
