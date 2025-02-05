//============================================================================================
// Name        	: Operators_HW.cpp
// Author      	: Misara
// Date			: 5/2/2025
// Description 	: Problems on Operators
//============================================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
/////////////////////////////////////////////////////////////////////////////// Easy Level ////////////////////////////////////////////////////////////////////////////////////////////////////////
//	int nb, ng, nt;
//	cin >> nb >> ng >> nt;
//	cout << (nb > 25) << endl;
//	cout << (ng <= 30) << endl;
//	cout << ( (nb > 20) && (nt > 2) || (ng > 30) && (nt > 4) ) << endl;
//	cout << ( (nb<60) || (ng<70) ) << endl;
//	cout << ( !(nb>=60) && !(ng>=70) ) << endl;
//	cout << (nb == ng+10) << endl;
//	cout << ( ((nb-ng)>10) || (nt>5) ) << endl;
//	cout << ( (nb == ng+10) || (ng == nb+15) ) << endl;
//	double num1, num2, div;
//	cin >> num1 >> num2;
//	div = num1/num2;
//	cout << div - (int)div;
//	int num1, num2, div;
//	cin >> num1 >> num2;
//	div = num1/num2;
//	cout << num1 - (num2*div);
//
//
/////////////////////////////////////////////////////////////////////////////// Medium Level ////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
	/*
	 * Is Even?
	 */
//	int num;
//	cin >> num;
//
//	// Using %2
//	bool is_even_1 = !(num%2);
//  // another way: bool is_even_1 = num%2 == 0;
//	cout << is_even_1 << endl;
//
//	// Using /2
//	bool is_even_2 = ((num/2.0) - (num/2)) == 0;
//	cout << is_even_2 << endl;
//
//	// Using %10
//	int last_digit = num%10;
//	bool is_even_3 = (last_digit == 0) || (last_digit == 2) || (last_digit == 4) || (last_digit == 6) || (last_digit == 8);
//	cout << is_even_3 << endl;
//
//
	/*
	 * Last 3 digits sum
	 */
//	int num;
//	cin >> num;
//	cout << (num%10) + ((num/10)%10) + ((num/100)%10);
//
//
	/*
	 * Print 4th digit from right
	 */
//	int num;
//	cin >> num;
//	cout << (num/1000)%10;
//
//
//
/////////////////////////////////////////////////////////////////////////////// Hard Level ////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	 * 100 or 7
	 */
//	int num;
//	cin >> num;
//	cout << ((!(num%2)) *93) + 7;
//	// Another Solution
//	int is_even = num%2 == 0;
//	int is_odd = 1 - is_even;
//	int result = is_even*100 + is_odd*7;
//
//
	/*
	 * Years
	 */
//	int num, num_years, num_months, num_days, temp;
//	cin >> num;
//	num_years = num/360;
//	num_months = num - (num_years*360);
//	temp = num_months;
//	num_months /= 30;
//	num_days = temp - (num_months*30);
//
//	cout << num_years << " " << num_months << " " << num_days;
// Another Solution
//	int num_days;
//	cin >> num_days;
//
//	int num_years = num_days/360;
//	// Remove whole years (360 days)
//	num_days = num_days%360;
//	int num_months = num_days/30;
//	// Remove whole months (30 days)
//	num_days = num_days%30;
//
//	cout << num_years << " " << num_months << " " << num_days;

}



