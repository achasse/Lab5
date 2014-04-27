/*
 *Authors: Aaron Chasse, Jake Borg, Deming Liu
 *CSE 220 - Lab 5
 *04/27/2014
 *
 *Program Description: Token.cpp
 *Contains the methods inherent to the Token object needed to get and set the internal data. 
 *This will be the base Token type which other Token objects will inherit from.
 *
 *Created by Bryce Holton.
 *
*/


#include "Token.h"

Token::Token()
{

}
Token::Token(TokenCode newCode)
{
	this->code = newCode;
}
Token::~Token()
{

}
void Token::setCode(TokenCode newCode)
{
    this->code = newCode;
}
TokenCode Token::getCode()
{
    return this->code;
}

void Token::setTokenString(string s)
{
    this->tokenString = s;
}
string Token::getTokenString()
{
    return this->tokenString;
}
void Token::print()
{
	cout << this->getTokenString().c_str() << endl;
}
