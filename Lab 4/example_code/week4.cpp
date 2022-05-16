// week4.cpp : Defines the entry point for the application.
//

#include <iostream>
#include "week4.h" //include fraction.h, declares class Fraction
#include "Fraction.h" //stops here and goes to Fraction.h


//return from line 39 in Fraction.h
using namespace std;
void printFraction(Fraction &f) //now it's *, but looks like object
{
	cout << "Fraction at address:" << &f
		<< " Numerator:" << f.getNumerator()
		<< " Denominator:" << f.getDenominator() << endl;
}

void foo(int a, int b , int c = 20, int d = 20) {}

int main()
{
	foo(1, 2, 3);

	Fraction ambig = Fraction(); //must be line 13

	Fraction f(5); //d = 1 by default

	Fraction refObject(f); //copy f by reference
	Fraction pointObject(&f);
	printFraction(f); //hidden &f

	return 0;
}

