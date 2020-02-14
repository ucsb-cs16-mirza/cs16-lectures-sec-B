# This is a sample makefile
# The makefile is a configuration file for make
# name of the rule: dependency

CXXFLAG = -std=c++11 -Wall
CXX = g++
BINARIES = superhero example

all: ${BINARIES}
	./superhero
	./example

superhero: superhero.cpp 
	${CXX} ${CXXFLAG} superhero.cpp -o superhero

example: example.cpp 
	${CXX} ${CXXFLAG} example.cpp -o example

clean:
	rm superhero example

