/*
 * This is the header file for String.cpp
 */

#ifndef __Lab5__Real__
#define __Lab5__Real__

#include "Literal.h"

class Real : public Literal<double>
{
  public:

    Real();
    ~Real();
    virtual void print();

};

#endif

