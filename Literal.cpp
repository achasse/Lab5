/*
 *Authors: Aaron Chasse, Jake Borg, Deming Liu
 *CSE 220 - Lab 5
 *04/27/2014
 *
 *Program Description: Literal.cpp
 * This is the implementation file for template function for literal class.
 *
 *
*/

 
#include "Literal.h"

template <class T> Literal<T>::Literal(T lit)
{
	setLiteral(lit);
}
  
template<class T> Literal<T>::~Literal()
{
   
}
  
template<class T> void Literal<T>::setLiteral(T lit)
{
	literal = lit;
}
  
template<class T> T Literal<T>::getLiteral()
{
	return literal;
}
  
template<class T> void Literal<T>::print()
{
   cout << literal << endl;
}

template class Literal<string>;
template class Literal<int>;
template class Literal<double>;
