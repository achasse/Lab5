//
//  IdentifierBinaryTree.h
//  Lab4
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//

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
    Token *getTreeRoot();
    bool addIdentifier(IdentifierToken *tok, int lineNum);
};

#endif /* defined(__Lab4__IdentifierBinaryTree__) */
