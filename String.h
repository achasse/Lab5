/*
 * This is the header file for String.cpp
 */

#ifndef __Lab5__String__
#define __Lab5__String__

#include "Literal.h"

class String : public Literal<string>
{
  public:

    String();
    ~String();
    virtual void print();

};

#endif
