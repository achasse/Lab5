/*
 * This is the Real.cpp file
 */

#include "Real.h"

class Real : public Literal<double>
{
	Real::Real() : Literal<double>(0.0)
	{

	}

	void Real::print()
	{
		cout << this->getTokenString().c_str() << endl;
	}
};
