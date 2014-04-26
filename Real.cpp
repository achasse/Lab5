/*
 * This is the Real.cpp file
 */
 
class Real : public Literal
{
  Real::Real() : Literal<double>(0.0)
  {
  
  }
  
  void print()
  {
   sprintf("%-s\n", this->getTokenString().c_str() );
  }
  
}
