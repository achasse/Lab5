/*
 * This is the String.cpp file
 */
#include "String.h"

class String : public Literal<string>
{
  String::String() : Literal<string>("")
  {

  }

  void String::print()
  {
	  cout << this->getTokenString().c_str() << endl;
  }

};
