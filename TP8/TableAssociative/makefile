GG=g++
CFLAGS=-Wall -Wextra -c
LFLAGS=-g -o
OBJ=Main.o Fichier.o

prog: $(OBJ)
	$(GG) $(LFLAGS) prog $(OBJ)

Main.o: Main.cpp Fichier.hpp
	$(GG) $(CFLAGS) Main.cpp $(LFLAGS) Main.o

Fichier.o: Fichier.cpp Fichier.hpp
	$(GG) $(CFLAGS) Fichier.cpp $(LFLAGS) Fichier.o

clean:
	rm -rf $(OBJ) prog
