Exercise1: main.o CeoOfTree.o BST.o BinaryNode.o Pokemon.o
	g++ -std=c++11 -g -Wall main.o CeoOfTree.o BST.o BinaryNode.o Pokemon.o -o Exercise1
main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp
CeoOfTree.o: CeoOfTree.h CeoOfTree.cpp
	g++ -std=c++11 -g -Wall -c CeoOfTree.cpp
BST.o: BST.h BST.cpp
	g++ -std=c++11 -g -Wall -c BST.cpp
BinaryNode.o: BinaryNode.h BinaryNode.cpp
	g++ -std=c++11 -g -Wall -c BinaryNode.cpp
Pokemon.o: Pokemon.h Pokemon.cpp
	g++ -std=c++11 -g -Wall -c Pokemon.cpp