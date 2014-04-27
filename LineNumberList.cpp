/*
 * Authors: Aaron Chasse, Jake Borg, Deming Liu
 * CSE 220 - Lab 5
 * 04/27/2014
 *
 * Program Description: LineNumberList.cpp
 * Will implement a LineNumberList object. Each IdentifierToken object will contain
 * one LineNumberList object, and form a linked list representing the line numbers where
 * the token was found in the input file.
 *
 * Created by Bryce Holton on 3/28/14.
 *
*/


#include "LineNumberList.h"

LineNumberList::LineNumberList()
{
    setLineNumber(0);
    setNextLineNumber(NULL);
}
LineNumberList::~LineNumberList()
{
    
}
void LineNumberList::setLineNumber(int num)
{
    this->lineNumber = num;
}
int LineNumberList::getLineNumber()
{
    return this->lineNumber;
}
void LineNumberList::setNextLineNumber(LineNumberList *next)
{
    this->nextLineNumber = next;
}
LineNumberList *LineNumberList::getNextLineNumber()
{
    return this->nextLineNumber;
}
