src = ./src/
bin = ./bin/

#all: 
#	g++ -c $(src)ChessBoardConsoleUI.cpp -o $(bin)ChessBoardConsoleUI.o
#	g++ -c $(src)main.cpp -o $(bin)main.o
#	g++ -o $(bin)main $(bin)main.o $(bin)ChessBoardConsoleUI.o
all: main

# “-g ”: Generates debugging information

main: build_all
	g++ -g -o $(bin)main $(bin)main.o $(bin)TrianglesConsoleUI.o $(bin)SortedTrianglesVector.o $(bin)Triangle.o 

build_all:
	g++ -g -o $(bin)Triangle.o -c $(src)Triangle.cpp
	g++ -g -o $(bin)SortedTrianglesVector.o -c $(src)SortedTrianglesVector.cpp
	g++ -g -o $(bin)TrianglesConsoleUI.o -c $(src)TrianglesConsoleUI.cpp
	g++ -g -o $(bin)main.o -c $(src)main.cpp









