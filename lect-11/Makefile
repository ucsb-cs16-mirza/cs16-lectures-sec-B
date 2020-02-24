# This is a sample Makefile
CXX = g++
CFLAGS = --std=c++11 -Wall

all: struct heap

struct: structs.cpp
	${CXX} ${CFLAGS} structs.cpp -o struct
	g++ -c structs.cpp

heap: heap.cpp
	${CXX} ${CFLAGS} heap.cpp -o heap

clean:
	rm struct heap


