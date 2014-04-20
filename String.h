/*
 * This is the header file for String.cpp
 */
 
#ifndef __Lab5__String__
#define __Lab5__String__

#include "Token.h"
#include "Literal.h"

class String : public Literal
{
  public:
    
    String() : Literal<string>("");
    virtual void print();
    
};

#endif
    
