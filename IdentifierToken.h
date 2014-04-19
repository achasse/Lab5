//
//
//
//Identifer Token Header File
//


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
		IdentifierToken* getRightChild()
		void addToLineNumberList(LineNumberList *listItem);
		LineNumberList *getLineNumberList();
		
		virtual void print();

};
