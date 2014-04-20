/*
 * This is the header file for String.cpp
 */
 
#ifndef __Lab5__Real__
#define __Lab5__Real__

#include "Token.h"
#include "Literal.h"

class Real : public Literal
{
  public:
    
    Real() : Literal<double>(0.0);
    virtual void print();
    
};

#endif
