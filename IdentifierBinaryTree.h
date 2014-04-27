/*
 *Authors: Aaron Chasse, Jake Borg, Deming Liu
 *CSE 220 - Lab 5
 *04/27/2014
 *
 *Program Description: IdentifierBinaryTree.h
 *Header file contains the IdentifierBinaryTree class definition.
 *
 * Created by Bryce Holton on 3/28/14.
 *
*/


#ifndef __Lab4__IdentifierBinaryTree__
#define __Lab4__IdentifierBinaryTree__

#include <iostream>
#include "IdentifierToken.h"

class IdentifierBinaryTree
{
    IdentifierToken *treeRoot;
    
    void depthFirstDeleteTree(IdentifierToken *tok);
    
public:
    IdentifierBinaryTree();
    ~IdentifierBinaryTree();
    void setTreeRoot(IdentifierToken *root);
    IdentifierToken *getTreeRoot();
    bool addIdentifier(IdentifierToken *tok, int lineNum);
};

#endif /* defined(__Lab4__IdentifierBinaryTree__) */
