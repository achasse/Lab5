/*
 * This is the header file for String.cpp
 */
 
#ifndef __Lab5__String__
#define __Lab5__String__

class String : public Literal
{
  public:
    
    String() : Literal<string>("");
    virtual void print();
    
};

#endif
    
