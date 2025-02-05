//============================================================================================
// Name        	: For_HW.cpp
// Author      	: Misara
// Date			: 5/2/2025
// Description 	: Problems on For loops
//============================================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
/////////////////////////////////////////////////////////////////////////////// Medium to Hard Level ////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	 * Printing X
	 */
//	int n, pos_1{1}, pos_2{0}, flag{0};
//	cin >> n; // odd number
//	pos_2 = n;
//	for(int i=0 ; i<n ; i++)
//	{
//		if(pos_1 == pos_2)
//		{
//			flag=1;
//		}
//		for(int j=1 ; j<=n ; j++)
//		{
//
//			if(j==pos_1 || j==pos_2)
//				cout << "*";
//			else
//				cout << " ";
//		}
//		// change position of stars
//		if(flag)
//		{
//			pos_1--;
//			pos_2++;
//		}
//		else
//		{
//			pos_1++;
//			pos_2--;
//		}
//		cout << endl;
//	}
//
//
	/*
	 * Find special pairs:
	 * 		X in range [50,300]
	 * 		Y in range [70,400]
	 * 		X < Y
	 * 		(X+Y) divisible by 7
	 */
//	int cnt{0};
//	for(int x=50 ; x<=300 ;x++)
//	{
//		for(int y=70 ; y<=400 ; y++)
//		{
//			if( x<y && ((x+y)%7 == 0) )
//				cnt++;
//		}
//	}
//	cout << cnt;
//
//
	/*
	 * Find all quadruples:
	 * 		1 <= a,b,c,d <= 200
	 * 		a+b = c+d
	 */
//	int cnt{0};
//	for(int a=1 ; a<=200 ; a++)
//	{
//		for(int b=1 ; b<=200 ; b++)
//		{
//			for(int c=1 ; c<=200 ; c++)
//			{
//				int k = a+b-c;
//				if(k>=1 && k<=200)
//					cnt++;
////				for(int d=1 ; d<=200 ; d++)
////				{
////					if(a+b == c+d)
////						cnt++;
////				}
//			}
//		}
//	}
//	cout << cnt;
//
//
	/*
	 * Is prime?
	 */
//	int n, is_prime{1};
//	cin >> n;
//	if(n<=1)
//		cout <<"NO";
//	else
//	{
//		for(int i=2 ; i<n ;i++)
//		{
//			if( n%i == 0)
//			{
//				is_prime = 0;
//				break;
//			}
//		}
//		if(is_prime)
//			cout << "YES";
//		else
//			cout << "NO";
//	}
//
//
//
	/*
	 * Print primes
	 */
//	int n ,is_prime{1};;
//	cin >> n;
//	for(int j=2 ; j<n ; j++)
//	{
//		for(int i=2 ; i<j ;i++)
//		{
//			if( j%i == 0)
//				is_prime = 0;
//		}
//		if(is_prime)
//			cout << j << ",";
//		is_prime = 1;
//	}
//
//
	/*
	 * Digits sum in range
	 */
//	int n, a, b, sum_digits{0}, sum{0}, temp;
//	cin >> n >> a >> b;
//	for(; n>0 ; n--)
//	{
//		temp = n;
//		while(temp)
//		{
//			sum_digits += temp%10;
//			temp /= 10;
//		}
//		if(sum_digits>=a && sum_digits<=b)
//			sum += n;
//		sum_digits = 0;
//	}
//	cout << sum;
}
