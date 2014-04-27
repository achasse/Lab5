/*
 *Authors: Aaron Chasse, Jake Borg, Deming Liu
 *CSE 220 - Lab 5
 *04/27/2014
 *
 *Program Description: IdentifierBinaryTree.cpp
 *Contains the methods needed to implement a Binary Search Tree. Recursive methods to add a new Identifier Token
 *to the tree in alphabetic order, and destroy the tree when the tree deconstructor is called. 
 *
 * Created by Bryce Holton on 3/28/14.
 *
 */



#include "IdentifierBinaryTree.h"
#include "LineNumberList.h"

using namespace std;

IdentifierBinaryTree::IdentifierBinaryTree()
{
    setTreeRoot(NULL);
}
IdentifierBinaryTree::~IdentifierBinaryTree()
{
    IdentifierToken *root = getTreeRoot();
    
    if (root != NULL)
    {
        depthFirstDeleteTree(root);
    }
}
void IdentifierBinaryTree::depthFirstDeleteTree(IdentifierToken *tok)
{
    if (tok->getLeftChild() != NULL)
    {
        depthFirstDeleteTree(tok->getLeftChild());
    }
//    cout << tok->getTokenString() << "\n";
    if (tok->getRightChild() != NULL)
    {
        depthFirstDeleteTree(tok->getRightChild());
    }
    delete tok;
}
void IdentifierBinaryTree::setTreeRoot(IdentifierToken *root)
{
    this->treeRoot = root;
}
IdentifierToken *IdentifierBinaryTree::getTreeRoot()
{
    return this->treeRoot;
}
bool IdentifierBinaryTree::addIdentifier(IdentifierToken *tok, int lineNum)
{
    bool success = false;
    LineNumberList *listItem = new LineNumberList();
    
    listItem->setLineNumber(lineNum);
    if (getTreeRoot() == NULL)
    {
        setTreeRoot(tok);
        tok->addToLineNumberList(listItem);
        success = true;
    }
    else
    {
        string tokenName = tok->getTokenString();
        IdentifierToken *parentNode = getTreeRoot();
        string treeNodeName;
        int stringComparison;
        
        while (parentNode != NULL)
        {
            treeNodeName = parentNode->getTokenString();
            stringComparison = tokenName.compare(treeNodeName);
            if (stringComparison == 0)
            {
                //They are the same identifier token we just need to add a new line number to the list.
                parentNode->addToLineNumberList(listItem);
                parentNode = NULL; //Exit the loop
                delete tok;         //We won't need tok and it won't be deleted in main.
                success = true;
            }
            else if (stringComparison < 0)
            {
                //Go to the left.
                if (parentNode->getLeftChild() == NULL)
                {
                    //Add tok to the left
                    tok->addToLineNumberList(listItem);
                    parentNode->setLeftChild(tok);
                    parentNode = NULL;
                    success = true;
                }
                else
                {
                    parentNode = parentNode->getLeftChild();
                }
            }
            else
            {
                //Go to the right.
                if (parentNode->getRightChild() == NULL)
                {
                    //Add tok to the right
                    tok->addToLineNumberList(listItem);
                    parentNode->setRightChild(tok);
                    parentNode = NULL;
                    success = true;
                }
                else
                {
                    parentNode = parentNode->getRightChild();
                }
            }
        }
    }
    return success;
}
