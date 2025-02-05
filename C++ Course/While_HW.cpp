//============================================================================================
// Name        	: While_HW.cpp
// Author      	: Misara
// Date			: 5/2/2025
// Description 	: Problems on While loops
//============================================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
/////////////////////////////////////////////////////////////////////////////// Easy Level ////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	 * Range
	 */
//	int x, y;
//	cin >> x >> y;
//	while(x <= y)
//	{
//		cout << x << endl;
//		x++;
//	}
//
//
	/*
	 * Line of characters
	 */
//	int n;
//	char x;
//	cin >> n >> x;
//	while(n>0)
//	{
//		cout << x;
//		n--;
//	}
//
//
	/*
	 * Left angled triangle
	 */
//	int n, start {1};
//	cin >> n;
//
//	while(start <= n)
//	{
//		int cnt = start;
//		while(cnt > 0)
//		{
//			cout << "*";
//			cnt--;
//		}
//		cout << endl;
//		start++;
//	}
//
//
	/*
	 * Face down left angled triangle
	 */
//	int n;
//	cin >> n;
//
//	while(n >= 0)
//	{
//		int cnt = n;
//		while(cnt > 0)
//		{
//			cout << "*";
//			cnt--;
//		}
//		cout << endl;
//		n--;
//	}
//
//
	/*
	 * Special average
	 */
//	int n, num, cnt {1}, cnt_even {0}, cnt_odd {0};
//	double sum_even {0}, sum_odd {0};
//	cin >> n;
//	while(cnt <= n)
//	{
//		cin >> num;
//		if(cnt%2 != 0)
//		{
//			sum_odd += num;
//			cnt_odd++;
//		}
//		else
//		{
//			sum_even += num;
//			cnt_even++;
//		}
//		cnt++;
//	}
//	cout << sum_odd/cnt_odd << " " << sum_even/cnt_even;
//
//
//
/////////////////////////////////////////////////////////////////////////////// Medium Level ////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	 * Special multiples 1
	 */
//	int n, start{0};
//	cin >> n;
//	while(start<n)
//	{
//		if( start%8 == 0)
//			cout << start << " ";
//		else if( (start%3 == 0) &&  (start%4 == 0) )
//			cout << start << " ";
//		start++;
//	}
//
//
	/*
	 * Special multiples 2
	 */
//	int n, start{0}, cnt{0};
//	cin >> n;
//	while(cnt<n)
//	{
//		if( (start%3 == 0) && (start%4 != 0) )
//		{
//			cout << start << " ";
//			cnt++;
//		}
//		start++;
//	}
	// Another Smart Solution
//	int n;
//	cin >> n;
//	int start = 3;
//	while(n)
//	{
//		if(start%4 != 0)
//		{
//			cout << start << " ";
//			n--;
//		}
//		start +=3;
//	}
//
//
	/*
	 * Minimum of values
	 */
//	int n;
//	cin >> n;
//	while(n > 0)
//	{
//		int num, min, number;
//		cin >> num;
//		cin >> number;
//		min = number;
//		while (num-1 > 0)
//		{
//			cin >> number;
//			if(number < min)
//				min = number;
//			num--;
//		}
//		cout << min << endl;
//		n--;
//	}
//
//
/////////////////////////////////////////////////////////////////////////////// Hard Level ////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	 * Find NOs
	 */
//	int n;
//	cin >> n;
//	while (n) {
//		string word;
//		cin >> word;
//		if (word.length() == 2) {
//			if (word[0] == 'n' || word[0] == 'N')
//			{
//				if (word[1] == 'o' || word[1] == 'O')
//					cout << word << " ";
//			}
//			else if (word[0] == 'o' || word[0] == 'O')
//				if (word[1] == 'n' || word[1] == 'N')
//					cout << word << " ";
//		}
//		n--;
//	}
//
//
	/*
	 * Reverse number
	 */
//	int n, neg{0},reverse{0};
//	cin >> n;
//	if(n<0)
//	{
//		neg = 1;
//		n *= -1;
//	}
//	while(n)
//	{
//		reverse *= 10;
//		reverse += n%10;
//		n /= 10;
//	}
//	if(neg)
//		cout << -1*reverse << " " << -1*3*reverse;
//	else
//		cout << reverse << " " << 3*reverse;
//
//
//
	/*
	 * Multiplication table
	 */
//	int n, m, start{1};
//	cin >> n >> m;
//	while(start <= n)
//	{
//		int st = 1;
//		while(st <= m)
//		{
//			cout << start << " x " << st << " = " << start*st << endl;
//			st++;
//		}
//		start++;
//	}
//
//
	/*
	 * Special sum
	 */
//	int n, result{0}, pow{1};
//	cin >> n;
//	while(n)
//	{
//		int inputs;
//		cin >> inputs;
//		int pos = 1;
//		while(inputs)
//		{
//			int temp = pos;
//			int num;
//			cin >> num;
//			while(temp)
//			{
//				pow *= num;
//				temp--;
//			}
//			result += pow;
//			pow = 1;
//			pos++;
//			inputs--;
//		}
//		cout << result << endl;
//		result = 0;
//		n--;
//	}
}
