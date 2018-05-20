CC=g++
FLAGS= -Wall -std=c++11
SOURCES = first.cpp main.cpp
EXE=gitest
all:
	$(CC) $(FLAGS) $(SOURCES) -o $(EXE)
