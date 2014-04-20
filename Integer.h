/*
 * This is the header file for String.cpp
 */
 
#ifndef __Lab5__String__
#define __Lab5__String__

#include "Token.h"
#include "Literal.h"

class Integer : public Literal
{
  public:
    
    Integer() : Literal<int>(0);
    virtual void print();
    
};

#endif
