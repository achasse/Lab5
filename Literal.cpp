/*
 * This is the header file for template function for literal class.
 */
 
template <typename T>
 
class Literal : public Token 
{
  private:
    T literal;
  
  public:
    
    Literal(T lit)
    {
      setLiteral(lit);
    }//end of constructor
    
    ~Literal()
    {
    
    }//end of destructor
    
    void setLiteral(T lit)
    {
      literal = lit;
    }//end of setLiteral
    
    T getVar()
    {
      return literal;
    }//end of getVar
    
    virtual void print() = 0; //virtual function for print.
    
}//end of Literal class
