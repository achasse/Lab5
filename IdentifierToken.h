/*
 *Authors: Aaron Chasse, Jake Borg, Deming Liu
 *CSE 220 - Lab 5
 *04/27/2014
 *
 *Program Description: IdentifierToken.h
 *Header file for IdentifierToken.cpp
 *Inherits from the Token class.
 *Contains methods and variables specific to an IdentifierToken type.
 *
 *
*/

#ifndef __Lab5__IdentifierToken__
#define __Lab5__IdentifierToken__


#include "Token.h"
#include "LineNumberList.h"
#include <iostream>

class IdentifierToken: public Token
{

	private:
		//These are specific to an identifier Token, allow it to be added to the binary search tree
		IdentifierToken *leftChild;
		IdentifierToken *rightChild;
		LineNumberList *list;
		
	public:
		IdentifierToken();
		IdentifierToken(string tok_string);
		~IdentifierToken();
		
		void setLeftChild(IdentifierToken *tok);
		void setRightChild(IdentifierToken *tok);
		IdentifierToken* getLeftChild();
		IdentifierToken* getRightChild();
		void addToLineNumberList(LineNumberList *listItem);
		LineNumberList *getLineNumberList();
		//virtual print method
		virtual void print();

};

#endif
