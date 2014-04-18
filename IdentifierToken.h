//
//
//
//Identifer Token Header File
//


#include "Token.h"
#include "LineNumberList.h"
#include <iostream>

class IdentiferToken: public Token
{

	private:
		//These are specific to an identifier Token
		IdentifierToken *LeftChild;
		IdentifierToken *RightChild;
		LineNumberList *list;
		
	public:
		IdentiferToken();
		~IdentifierToken();
		
		void setLeftChild(IdentfierToken *tok);
		void setRightChild(IdentifierToken *tok);
		IdentifierToken* getLeftChild();
		IdentifierToken* getRightChild()
		void addToLineNumberList(LineNumberList *listItem);
		LineNumberList *getLineNumberList();
		
		virtual void print();

}
