GG=g++
CFLAGS=-c -Wall -Wextra -g
LFLAGS=-g -o
OBJ=vecteur.o main.o

prog : $(OBJ)
	$(GG) $(LFLAGS) prog $(OBJ)

main.o: main.cpp vecteur.hpp
	$(GG) $(CFLAGS) main.cpp

vecteur.o: vecteur.cpp vecteur.hpp
	$(GG) $(CFLAGS) vecteur.cpp

clean:
	rm -rf $(OBJ) prog
