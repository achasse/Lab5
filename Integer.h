/*
 * This is the header file for String.cpp
 */

#ifndef __Lab5__String__
#define __Lab5__String__

#include "Literal.h"

using namespace std;

class Integer : public Literal<int>
{
  public:

    Integer();
    ~Integer();
    virtual void print();

};

#endif
