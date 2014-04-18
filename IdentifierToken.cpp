//
//
//
//

#include "IdentifierToken.h"


IdentifierToken::IdentifierToken()
{
    
    setLeftChild(NULL);
    setRightChild(NULL);
    list = NULL;
}
IdentifierToken::~IdentifierToken()
{
   
    LineNumberList *root = getLineNumberList();
    LineNumberList *tmp = root;
    
    while (root != NULL)
    {
        tmp = tmp->getNextLineNumber();
        delete root;
        root = tmp;
    }

}
void IdentifierToken::setLeftChild(IdentifierToken *tok)
{
    this->leftChild = tok;
}
IdentifierToken *IdentifierToken::getLeftChild()
{
    return this->leftChild;
}
void IdentifierToken::setRightChild(IdentifierToken *tok)
{
    this->rightChild = tok;
}
IdentifierToken *IdentifierToken::getRightChild()
{
    return this->rightChild;
}
void IdentifierToken::addToLineNumberList(LineNumberList *listItem)
{
    LineNumberList *tmp = getLineNumberList();
    
    if (tmp == NULL)
    {
        list = listItem;
    }
    else
    {
        while (tmp->getNextLineNumber() != NULL)
        {
            tmp = tmp->getNextLineNumber();
        }
        tmp->setNextLineNumber(listItem);
    }
}
LineNumberList *IdentiferToken::getLineNumberList()
{
    return this->list;
}
void print()
{
    sprintf("%-s\n", this->getTokenString() );
}

