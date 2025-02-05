//============================================================================================
// Name        	: Selection_HW.cpp
// Author      	: Misara
// Date			: 5/2/2025
// Description 	: Problems on Selection
//============================================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
/////////////////////////////////////////////////////////////////////////////// Easy Level ////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	 * Maximum but constrained
	 */
//	int num1, num2, num3, max {-1};
//	cin >> num1 >> num2 >> num3;
//
//	if(num1>100 && num2>100 && num3>100)
//		cout << -1;
//	else
//	{
//		if(num1<100)
//		{
//			max = num1;
//			if(num2>max && num2<100)
//				max = num2;
//			if(num3>max && num3<100)
//				max = num3;
//		}
//		else if(num2<100)
//		{
//			max = num2;
//			if(num3>max && num3<100)
//				max = num3;
//		}
//		else if(num3<100)
//			max = num3;
//
//		cout << max;
//	}
//
//
	/*
	 * Conditional count
	 */
//	int num1, num2, num3, num4, num5, num6, smaller {0};
//	cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
//	if(num2 <= num1)
//		smaller++;
//	if(num3 <= num1)
//		smaller++;
//	if(num4 <= num1)
//		smaller++;
//	if(num5 <= num1)
//		smaller++;
//	if(num6 <= num1)
//		smaller++;
	// Smarter solution
//	smaller += (num2 <= num1);
//	smaller += (num3 <= num1);
//	smaller += (num4 <= num1);
//	smaller += (num5 <= num1);
//	smaller += (num6 <= num1);
//	cout << smaller << " " << 5-smaller;
//
//
/////////////////////////////////////////////////////////////////////////////// Medium Level ////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	 * Maximum of 10 (using only 2 variables)
	 */
//	int num, max;
//	cin >> num;
//	max = num;
//	cin >> num;
//	if(num>max)
//		max=num;
//	cin >> num;
//	if(num>max)
//		max=num;
//	cin >> num;
//	if(num>max)
//		max=num;
//	cin >> num;
//	if(num>max)
//		max=num;
//	cin >> num;
//	if(num>max)
//		max=num;
//	cin >> num;
//	if(num>max)
//		max=num;
//	cin >> num;
//	if(num>max)
//		max=num;
//	cin >> num;
//	if(num>max)
//		max=num;
//	cin >> num;
//	if(num>max)
//		max=num;
//
//	cout << max;
//
//
/////////////////////////////////////////////////////////////////////////////// Medium Level ////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	 * Intervals
	 */
//	int x, s1, e1, s2, e2, s3, e3, counter {0};
//	cin >> x >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;
//	counter += (x>=s1 && x<=e1);
//	counter += (x>=s2 && x<=e2);
//	counter += (x>=s3 && x<=e3);
//	cout << counter;
//
//
	/*
	 * 2 intervals intersection
	 */
//	int s1, e1, s2, e2;
//	cin >> s1 >> e1 >> s2 >> e2;
//	if(s1 >= e2 || s2 >= e1)
//		cout << -1;
//	else
//	{
//		if(s1 >= s2)
//		{
//			if(e1 <= e2)
//				cout << s1 << " " << e1;
//			else
//				cout << s1 << " " << e2;
//		}
//		else
//		{
//			if(e1 <= e2)
//				cout << s2 << " " << e1;
//			else
//				cout << s2 << " " << e2;
//		}
//	}
// 	Another Smart Solution
// 	However, more thinking makes it easier
// 	The intersection starts at the maximum of the starts
// 	The intersection ends at the minimum of the ends
// 	Draw some examples
//	if(s1 < s2)	s1 = s2;	// maximum of (s1, s2)
//	if(e1 > e2) e1 = e2;	// minimum of (e1, e2)
//	cout<<s1<<" "<<e1<<"\n";
}
