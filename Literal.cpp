/*
 * This is the header file for template function for literal class.
 */
 
#include "Literal.h"

template <typename T>
Literal<T>::Literal(T lit)
{
	setLiteral(lit);
}
  
template<class T>
Literal<T>::~Literal()
{
   
}
  
template<class T>
void Literal<T>::setLiteral(T lit)
{
	literal = lit;
}
  
template<class T>
T Literal<T>::getLiteral()
{
	return literal;
}
  
template<class T>
void Literal<T>::print()
{
   
}
