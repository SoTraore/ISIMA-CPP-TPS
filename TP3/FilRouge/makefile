GG=g++
LFLAGS=-g -o
CFLAGS=-Wall -Wextra -c
OBJ=Liste.o Rectangle.o Cercle.o Main.o

prog: $(OBJ)
	$(GG) $(LFLAGS) prog $(OBJ)

Main.o: Main.cpp Liste.hpp
	$(GG) $(CFLAGS) Main.cpp $(LFLAGS) Main.o

Liste.o: Liste.cpp Liste.hpp Cercle.hpp Rectangle.hpp
	$(GG) $(CFLAGS) Liste.cpp $(LFLAGS) Liste.o

Cercle.o: Cercle.cpp Cercle.hpp
	$(GG) $(CFLAGS) Cercle.cpp $(LFLAGS) Cercle.o

Rectangle.o: Rectangle.cpp Rectangle.hpp
	$(GG) $(CFLAGS) Rectangle.cpp $(LFLAGS) Rectangle.o

clean:
	rm -rf $(OBJ) prog
