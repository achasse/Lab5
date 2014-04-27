/*
 * This is the header file for String.cpp
 */

#ifndef __Lab5__String__
#define __Lab5__String__

#include "Token.h"
#include "Literal.h"
#include "Literal.cpp"

class String : public Literal<string>
{
  public:

    String();
    ~String();
    virtual void print();

};

#endif
