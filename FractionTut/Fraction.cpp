#include<iosteam>
#include "Fracion.h"
#include<cmath>
using namespace std;
Fraction::Fraction(int numerator, int denominator)               //constructor
{
	num = numerator;
	den = denominator;
}


Fraction::~Fraction()
{

}

int Fraction::getNumerator()                                    //get numerator
{
	return num;
}
void Fraction::setNumerator(int num)                            //set numerator
{
	this->num = num;
}

int Fraction::getDenominator()                                  //get denominator
{
	return den;
}
void Fraction::setDenominator(int den)                          //set denominator
{
	this->den = den;
}

Fraction Fraction::add(Fraction number)                         //function that carries out addition
{
	return Fraction(num*number.den + den*number.num, den*number.den);
}

Fraction Fraction::sub(Fraction number)                            //function that carries out subtraction
{
	return Fraction(num*number.den - den*number.num, den*number.den);
}

Fraction Fraction::multi(Fraction number)                           //function that carries out multiplication
{
	return Fraction(num*number.num, den*number.den);
}

Fraction Fraction::divide(Fraction number)                            //function that carries out division
{
	return Fraction(num*number.den, den*number.num);
}
void Fraction::print()
{
	int x = num;
	int y = den;
	int a, b, lcd, i;
	int rem = x%y;
	if (rem == 0)                                                           //prints number as a whole number
	{
		cout << x / y << endl;
	}
	else if (x > y)                                                        //prints number as a fraction
	{
		a = x / y;
		b = abs(x) - abs(a*y);
		cout << a << "(" << b << "/" << y << endl;
	}
	else                                                                   //prints number as a reduced improper fraction
	{
		for (i = 1; i <= x; i++)
		{
			if (x%i == 0 && y%i == 0)
				lcd = i;
		}
		x = x / lcd;
		y = y / lcd;
		cout << x << "/" << y << endl;
	}
}
Fraction Fraction::operator+(Fraction number)                               //overloading operator for addition
{
	return Fraction(num*number.den + den*number.num, den*number.den);
}

Fraction Fraction::operator-(Fraction number)                               //overloading operator for subtraction
{
	return Fraction(num*number.den - den*number.num, den*number.den);
}

Fraction Fraction::operator*(Fraction number)                               //overloading operator for multiplication
{
	return Fraction(num*number.num, den*number.den);
}

Fraction Fraction::operator/(Fraction number)                               //overloading operator for division
{
	return Fraction(num*number.den, den*number.num);
}
