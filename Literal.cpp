/*
 * This is the header file for template function for literal class.
 */
 
template <typename T>
 
class Literal : public Token 
{
  Literal::Literal(T lit)
  {
    setLiteral(lit);
  }
  
  Literal::~Literal()
  {
   
  }
  
  void Literal::setLiteral(T lit)
  {
   literal = lit;
  }
  
  T Literal::getLiteral()
  {
   return literal;
  }
  
  void print()
  {
   
  }
    
}//end of Literal class
