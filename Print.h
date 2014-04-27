/*
 *Authors: Aaron Chasse, Jake Borg, Deming Liu
 *CSE 220 - Lab 5
 *04/27/2014
 *
 *Program Description:
 *Header file for Print.cpp. Contains the Print class defintion.
 *
 *Created by Bryce Holton.
 *
*/


#ifndef __Lab4__Print__
#define __Lab4__Print__

#include <iostream>
#include "common.h"
#include "IdentifierToken.h"

using namespace std;

class Print
{
private:
    string sourceFileName;
    string currentDate;
    int pageNumber;
    int lineCount;
    
    void printPageHeader();
    
public:
    Print(char source_name[], char date[]);
    ~Print();
    
    void printLine(char line[]);
    void printToken(Token *token);
    int getLineCount();
    void printTree(IdentifierToken *identifier);
    void printTreeRecursive(IdentifierToken *identifier);
};

#endif /* defined(__Lab4__Print__) */
