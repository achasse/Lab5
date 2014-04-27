/*
 * This is the String.cpp file
 */
#include "String.h"


String::String() : Literal<string>("")
{

}

void String::print()
{
	cout << this->getTokenString().c_str() << endl;
}
