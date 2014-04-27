#Team members: Aaron Chasse, Jake Borg, Doug Liu
#CSE 220 - Lab 3


#!/bin/bash
# File: Makefile

lister: main.o Print.o Scanner.o LineNumberList.o Token.o IdentifierBinaryTree.o IdentifierToken.o Literal.o 
	g++ main.o Print.o Scanner.o LineNumberList.o Token.o IdentifierBinaryTree.o IdentifierToken.o Literal.o  -o lister

main.o: main.cpp
	g++ -c main.cpp
Print.o: Print.cpp
	g++ -c Print.cpp
Scanner.o: Scanner.cpp
	g++ -c Scanner.cpp
LineNumberList.o: LineNumberList.cpp
	g++ -c LineNumberList.cpp
Token.o: Token.cpp
	g++ -c Token.cpp
IdentifierBinaryTree.o: IdentifierBinaryTree.cpp
	g++ -c IdentifierBinaryTree.cpp
IdentifierToken.o: IdentifierToken.cpp
	g++ -c IdentifierToken.cpp
Literal.o: Literal.cpp
	g++ -c Literal.cpp



