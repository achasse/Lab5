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
   cout << this->getTokenString().c_str() << endl;
  }
  
}
