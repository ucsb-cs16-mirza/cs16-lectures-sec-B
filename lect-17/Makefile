# This is a sample Makefile
CXX = g++
CFLAGS = --std=c++11 -g -Wall

all: linkedlist bsearch

linkedlist: linkedlist.cpp linkedlist.h
	${CXX} ${CFLAGS} linkedlist.cpp -o linkedlist

bsearch: binarySearch.cpp
	${CXX} ${CFLAGS} binarysearch.cpp -o bsearch

clean:
	rm linkedlist bsearch


