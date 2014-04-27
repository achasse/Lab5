/*
 * This is the header file for String.cpp
 */

#ifndef __Lab5__String__
#define __Lab5__String__

#include "Token.h"
#include "Literal.h"
#include "Literal.cpp"

using namespace std;

class Integer : public Literal<int>
{
  public:

    Integer();
    ~Integer();
    virtual void print();

};

#endif
