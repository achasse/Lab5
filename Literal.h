/*
 *Authors: Aaron Chasse, Jake Borg, Deming Liu
 *CSE 220 - Lab 5
 *04/27/2014
 *
 *Program Description: Literal.h
 * This is the header file for Literal.cpp
 *
 *
*/


#ifndef __Lab5__Literal__
#define __Lab5__Literal__ 

#include "Token.h"
#include "common.h"

template<class T>
class Literal : public Token
{
  private:
    
    T literal;
  
  public:
    
    Literal(T lit);
    ~Literal();
    void setLiteral(T lit);
    T getLiteral();
    virtual void print();
};

#endif
