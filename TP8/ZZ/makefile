GG=g++
CFLAGS=-c -Wall -Wextra
LFLAGS=-g -o
OBJ=Main.o ZZ.o

prog: $(OBJ)
	$(GG) $(LFLAGS) prog $(OBJ)

Main.o: Main.cpp ZZ.hpp
	$(GG) $(CFLAGS) -g Main.cpp 

ZZ.o: ZZ.cpp ZZ.hpp
	$(GG) $(CFLAGS) -g ZZ.cpp

clean:
	rm -rf $(OBJ) prog
