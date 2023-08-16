SRC=Cercle.cpp Forme.cpp Point.cpp Rectangle.cpp Liste.cpp Main.cpp 
#SRC=$(wildcard *.cpp)  
CXX=g++
EXE=prog

MACOS=
#MACOS=-isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk
CXXFLAGS+=-Wall -Wextra -MMD -g $(MACOS)
LDFLAGS=$(MACOS)

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

all: $(OBJ)
	$(CXX) -o $(EXE) $^ $(LDFLAGS)

build/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf build core *.gch

-include $(DEP)
