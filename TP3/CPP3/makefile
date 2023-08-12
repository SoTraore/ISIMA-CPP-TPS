CC=g++
CFLAGS=-c -Wall -Wextra -g
LDFLAGS=-g -o
OBJ=main.o producteur.o ProducteurPremiersEntier.o ProducteurAleatoire.o

prog: $(OBJ)
	$(CC) $(LDFLAGS) prog $(OBJ)

main.o: main.cpp ProducteurPremiersEntier.hpp
	$(CC) $(CFLAGS) main.cpp

ProducteurPremiersEntier.o: ProducteurPremiersEntier.cpp ProducteurPremiersEntier.hpp producteur.hpp
	$(CC) $(CFLAGS) ProducteurPremiersEntier.cpp

ProducteurAleatoire.o: ProducteurAleatoire.cpp ProducteurAleatoire.hpp producteur.hpp
	$(CC) $(CFLAGS) ProducteurAleatoire.cpp

producteur.o: producteur.cpp producteur.hpp
	$(CC) $(CFLAGS) producteur.cpp

clean:
	rm -rf $(OBJ) prog
