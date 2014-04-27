/*
 * This is the Integer.cpp file
 */
 
class Integer : public Literal
{
  Integer::Integer() : Literal<int>(0)
  {
  
  }
  
  void print()
  {
   cout << this->getTokenString().c_str() << endl;
  }
  
}
