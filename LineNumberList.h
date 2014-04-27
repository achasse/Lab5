/*
 *Authors: Aaron Chasse, Jake Borg, Deming Liu
 *CSE 220 - Lab 5
 *04/27/2014
 *
 *Program Description: LineNumberList.h
 *Header file for LineNumberList.cpp. Contains class definition, public and private variables and methods.
 *
 * Created by Bryce Holton on 3/28/14.
 *
*/



#ifndef __Lab4__LineNumberList__
#define __Lab4__LineNumberList__

#include <iostream>

class LineNumberList
{
    int lineNumber;
    LineNumberList *nextLineNumber;
    
public:
    LineNumberList();
    ~LineNumberList();
    void setLineNumber(int num);
    int getLineNumber();
    void setNextLineNumber(LineNumberList *next);
    LineNumberList *getNextLineNumber();
};

#endif /* defined(__Lab4__LineNumberList__) */
