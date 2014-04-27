/*
 * This is the Integer.cpp file
 */
#include "Integer.h"

Integer::Integer() : Literal<int>(0)
{

}

void Integer::print()
{
	cout << this->getTokenString() << endl;
}

