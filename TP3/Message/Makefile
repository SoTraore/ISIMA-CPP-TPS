GG=g++ -c
GO=g++ -o
WAR=-Wall -Wextra -g
OBJ=B.o A.o Main.o

prog : $(OBJ)
	$(GO) prog $(OBJ) $(WAR)

Main.o : Main.cpp A.hpp B.hpp
	$(GG) Main.cpp $(WAR)

A.o : A.cpp A.hpp B.hpp
	$(GG) A.cpp $(WAR)

B.o : B.cpp B.hpp A.hpp
	$(GG) B.cpp $(WAR)

clean :
	rm -rf $(OBJ) prog
