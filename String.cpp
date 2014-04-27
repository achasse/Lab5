/*
 * This is the String.cpp file
 */
 
class String : public Literal
{
  String::String() : Literal<string>("")
  {
  
  }
  
  void print()
  {
   cout << this->getTokenString().c_str() << endl;
  }
  
}
