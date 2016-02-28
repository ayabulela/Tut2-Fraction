#pragma once
#ifndef Fraction_H
#define Fraction_H
class Fraction
{
private:
	int num;
	int den;
public:
	Fraction(int numerator = 1, int denominator = 1);     //constructor with intialized parameteres
	~Fraction();                                     //destructor
	void setNumerator(int numerator);
	void setDenominator(int denominator);
	int getNumerator();
	int getDenominator();

	Fraction add(Fraction);
	Fraction sub(Fraction);
	Fraction multi(Fraction);
	Fraction divide(Fraction);

	Fraction operator+(Fraction);
	Fraction operator-(Fraction);
	Fraction operator*(Fraction);
	Fraction operator/(Fraction);
	void print();

};
Fraction read();
#endif