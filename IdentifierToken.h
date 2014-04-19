//
//
//
//Identifer Token Header File
//

#ifndef __Lab5__IdentifierToken__
#define __Lab5__IdentifierToken__


#include "Token.h"
#include "LineNumberList.h"
#include <iostream>

class IdentifierToken: public Token
{

	private:
		//These are specific to an identifier Token
		IdentifierToken *LeftChild;
		IdentifierToken *RightChild;
		LineNumberList *list;
		
	public:
		IdentifierToken();
		~IdentifierToken();
		
		void setLeftChild(IdentifierToken *tok);
		void setRightChild(IdentifierToken *tok);
		IdentifierToken* getLeftChild();
		IdentifierToken* getRightChild();
		void addToLineNumberList(LineNumberList *listItem);
		LineNumberList *getLineNumberList();
		
		virtual void print();

};

#endif
