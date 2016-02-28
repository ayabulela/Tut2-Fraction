#include<iostream>
#include<math.h>
#include "Fration.h"
using namespace std;
int main()
{
	Fraction number1(5, 2), number2(2, 8), answer;

	cout << "Addition:" << endl;
	answer = number1 + number2;
	answer.print();
	cout << "Subtraction:" << endl;
	answer = number1 - number2;
	answer.print();
	cout << "Multiplication:" << endl;
	answer = number1 * number2;
	answer.print();
	cout << "Division:" << endl;
	answer = number1 / number2;
	answer.print();

	system("pause");
	return 0;
}