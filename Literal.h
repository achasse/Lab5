/*
 * This is the header file for Literal.cpp
 */

#ifndef __Lab5__Literal__
#define __Lab5__Literal__ 

#include <Token.h>

class Literal : public Token
{
  private:
    
    T literal;
  
  public:
    
    Literal(T lit);
    ~Literal();
    void setLiteral(T lit);
    T getVar();
    virtual void print();
};

#endif
