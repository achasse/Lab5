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
   sprintf("%-s\n", this->getTokenString().c_str() );
  }
  
}
