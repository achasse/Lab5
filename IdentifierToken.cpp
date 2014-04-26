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
    //We know TokenCode will be an IDENTIFIER if a new object
    //of IdentifierToken is being created.
    setCode(IDENTIFIER);
}
//Constructor with the token string being passed in
IdentifierToken::IdentifierToken(string tok_string)
{
    
    setLeftChild(NULL);
    setRightChild(NULL);
    list = NULL;
    //We know TokenCode will be an IDENTIFIER if a new object
    //of IdentifierToken is being created.
    setCode(IDENTIFIER);
    setTokenString(tok_string);
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
LineNumberList *IdentifierToken::getLineNumberList()
{
    return this->list;
}
void IdentifierToken::print()
{
    cout << this->getTokenString().c_str() << endl;
}

