/*
 * This is the Real.cpp file
 */
Real::Real() : Literal<double>(0.0)
{

}

void Real::print()
{
	cout << this->getTokenString().c_str() << endl;
}
