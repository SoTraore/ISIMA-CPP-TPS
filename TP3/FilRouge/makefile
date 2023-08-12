GG=g++
LFLAGS=-g -o
CFLAGS=-Wall -Wextra -c
OBJ=Liste.o Rectangle.o Cercle.o Main.o Forme.o Point.o

prog: $(OBJ)
	$(GG) $(LFLAGS) prog $(OBJ)

Main.o: Main.cpp Liste.hpp
	$(GG) $(CFLAGS) Main.cpp

Liste.o: Liste.cpp Liste.hpp Cercle.hpp Rectangle.hpp
	$(GG) $(CFLAGS) Liste.cpp

Cercle.o: Cercle.cpp Cercle.hpp
	$(GG) $(CFLAGS) Cercle.cpp

Rectangle.o: Rectangle.cpp Rectangle.hpp
	$(GG) $(CFLAGS) Rectangle.cpp

Forme.o: Forme.cpp Forme.hpp Point.hpp 
	$(GG) $(CFLAGS) Forme.cpp

Point.o: Point.cpp Point.hpp
	$(GG) $(CFLAGS) Point.cpp

clean:
	rm -rf $(OBJ) prog
