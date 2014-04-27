/*
 *Authors: Aaron Chasse, Jake Borg, Deming Liu
 *CSE 220 - Lab 5
 *04/27/2014
 *
 *Program Description: Token.h
 *Header file contains the Token class definition.
 *
 *Created by Bryce Holton.
 *
*/


#ifndef __Lab4__Token__
#define __Lab4__Token__

#include <iostream>
#include "common.h"
//#include "LineNumberList.h"

using namespace std;

/**************
 this is a valid Pascal token.  
 ***************/
class Token
{
private:
    TokenCode code;
    string tokenString;

public:
    Token();
    Token(TokenCode newCode);
    ~Token();
    void setCode(TokenCode newCode);
    TokenCode getCode();
    void setTokenString(string s);
    string getTokenString();
    //the virtual print function
    virtual void print();
};

#endif /* defined(__Lab4__Token__) */
