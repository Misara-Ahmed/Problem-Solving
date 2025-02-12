//============================================================================================
// Name        	: Data_Types_HW.cpp
// Author      	: Misara
// Date			: 5/2/2025
// Description 	: Problems on Data Types
//============================================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {

//	// HW1
//	double x,y;
//	cout << "Enter 2 numbers: ";
//	cin >> x >> y;
//	cout << endl << x << " + " << y << " = " << x+y;
//	cout << endl << x << " - " << y << " = " << x-y;
//	cout << endl << x << " / " << y << " = " << x/y;
//	cout << endl << x << " * " << y << " = " << x*y;
//
//	int i1,i2,i3,i4,i5,i6,i7,i8;
//	cin >>i1>>i2>>i3>>i4>>i5>>i6>>i7>>i8;
//	cout << i2+i4+i6+i8 << " " << i1+i3+i5+i7;


// HW2
//	int num1, num2, num3 = -1;
//
//	cin >> num1 >> num2;
//
//	num3 = num1;
//	num1 = num2;
//	num2 = num3;
//
//	cout << num1 << " " << num2;


// HW3 (Hard)
//	int num1, num2, num3, temp {-1};
//	cin >> num1 >> num2 >> num3;
//
//	temp = num1;
//	num1 = num3;
//	num3 = num2;
//	num2 = temp;
//
//	cout << num1 << " " << num2 << " " << num3;


	/*
	 * Write a program that reads 2 integers A, B
	 * B is either -1 or 1
	 * If -1, print 2*A+1
	 * If 1, print A*A
	 */

//	int A, B;
//	cin >> A >> B;
//	cout << pow(A,B+1) + (1-B)*A;
// Another Solution
//	int a, b;
//
//	cin >> a >> b;
//
//	// Let's code the 2 possible results
//	int equ_is_1 = a * a;
//	int equ_is_neg_1 = 2 * a + 1;
//
//	// The trick: we want to make them in 1 equation
//	// Where if input is: only 1 equation is computed and the second is zer0
//	// To do so: convert -1 to 0 and 1 to 1
//	// With simple math, we can convert [-1 1] to [0 1] range
//
//	// value 1 for (b 1) and value 0 for (b -1)
//	int is_1 = (b + 1) / 2;
//	// value 1 for (b -1) and value 0 for (b 1)
//	int is_neg_1 = 1 - is_1;
//
//	// Either 1*something + 0*something for b = 1
//	// Or     0*something + 1*something for b = -1
//	cout<<is_1 * equ_is_1 + is_neg_1 * equ_is_neg_1;
//	int n;
//	cin >> n;
//	cout << (n+1)*(n/2.0);
}
