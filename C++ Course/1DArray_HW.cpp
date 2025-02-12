//============================================================================================
// Name        	: 1DArray_HW.cpp
// Author      	: Misara
// Date			: 10/2/2025
// Description 	: Problems on 1D Arrays
//============================================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
/////////////////////////////////////////////////////////////////////////////// Easy Level ////////////////////////////////////////////////////////////////////////////////////////////////////////
//	/*
//	 * Is array increasing?
//	 */
//	int arr[200] {0}, N, isInc {1};
//	cin >> N;
//	for(int i=0 ; i<N ; i++)
//		cin >> arr[i];
//
//	for(int i=0 ; i<N-1 ; i++)
//	{
//		if(arr[i+1] < arr[i])
//		{
//			isInc = 0;
//			cout << "NO";
//			break;
//		}
//	}
//	if(isInc)
//		cout << "YES";
//
//
//	/*
//	 * Replace MinMax
//	 */
//	int arr[200] {0}, N, min {2000}, max {0};
//	cin >> N;
//	for(int i=0 ; i<N ; i++)
//	{
//		cin >> arr[i];
//		if(arr[i] < min)
//			min = arr[i];
//		if(arr[i] > max)
//			max = arr[i];
//	}
//	for(int i=0 ; i<N ; i++)
//	{
//		if(arr[i] == min)
//			arr[i] = max;
//		else if(arr[i] == max)
//			arr[i] = min;
//	}
//	for(int i=0 ; i<N ; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//
//	/*
//	 * Unique numbers of ordered list (using array)
//	 */
//	int arr[1000] {0}, N;
//	cin >> N;
//	for(int i=0 ; i<N ; i++)
//	{
//		cin >> arr[i];
//	}
//	cout << arr[0] << " ";
//	for(int i=1 ; i<N ; i++)
//	{
//		if(arr[i] != arr[i-1])
//			cout << arr[i] << " ";
//	}
//
//
//	/*
//	 * Is Palindrome?
//	 */
//	int arr[1000] {0}, N, isPalindrome {1};
//	cin >> N;
//	for(int i=0 ; i<N ; i++)
//	{
//		cin >> arr[i];
//	}
//	for(int i=0 ; i<N/2 ; i++)
//	{
//		if(arr[i] != arr[N-i-1])
//		{
//			isPalindrome = 0;
//			cout << "NO";
//			break;
//		}
//	}
//	if(isPalindrome)
//		cout << "YES";
//
//
//	/*
//	 *
//	 */
//	int arr[200] {0}, N, min;
//	cin >> N;
//	for(int i=0 ; i<N ; i++)
//	{
//		cin >> arr[i];
//	}
//	min = arr[0] + arr[1] + 1 - 0;
//	for(int i=0 ; i<N ; i++)
//	{
//		for(int j=i+1 ; j<N ; j++)
//		{
//			if( (arr[i]+arr[j]+j-i) < min)
//				min = arr[i]+arr[j]+j-i;
//		}
//	}
//	cout << min;
//
//
///////////////////////////////////////////////////////////////////////////////// Medium Level ////////////////////////////////////////////////////////////////////////////////////////////////////////
//	/*
//	 * The 3 min values
//	 */
//	int N {0};
//	while(N<3)
//	{
//		cout << "Enter valid value for N: ";
//		cin >> N;
//	}
//	int arr[N];
//	int min[3] {0};
//	for(int i=0 ; i<N ; i++)
//	{
//		cin >> arr[i];
//
//		if(i>2)
//		{
//			if(arr[i] < min[2])
//			{
//				if(arr[i] < min[1])
//				{
//					if(arr[i] < min[0])
//					{
//						min[2] = min[1];
//						min[1] = min[0];
//						min[0] = arr[i];
//					}
//					else
//					{
//						min[2] = min[1];
//						min[1] = arr[i];
//					}
//				}
//				else
//					min[2] = arr[i];
//			}
//		}
//		else
//		{
//			if(i == 0)
//				min[0] = arr[i];
//			else if(i == 1)
//			{
//				if(arr[i] < min[0])
//				{
//					min[i+0] = min[0];
//					min[0] = arr[i];
//				}
//				else
//					min[i+0] = arr[i];
//			}
//			else
//			{
//				if(arr[i] < min[0])
//				{
//					min[2] = min[1];
//					min[1] = min[0];
//					min[0] = arr[i];
//				}
//				else
//				{
//					if(arr[i] < min[1]){
//						min[2] = min[1];
//						min[1] = arr[i];
//					}
//					else
//						min[i] = arr[i];
//				}
//
//			}
//
//		}
//	}
//	cout << min[0] << " " << min[1] << " " << min[2];
//
//
//	/*
//	 * Search for a number
//	 */
//	int arr[200], N, Q, num, pos {-1};
//	cin >> N;
//	for(int i=0 ; i<N ; i++)
//	{
//		cin >> arr[i];
//	}
//	cin >> Q;
//	for(int i=0 ; i<Q ; i++)
//	{
//		cin >> num;
//		for(int j=0 ; j<N ; j++) 		// more smarter to loop from the end as it want the last occurence
//		{
//			if(arr[j] == num)
//				pos = j;
//		}
//		cout << pos << " ";
//		pos = -1;
//	}
//

//
//	/*
//	 * The most frequent number
//	 */
//	int arr[200], N, freq[770] {0}, freq_num {0}, freq_value;
//	cin >> N;
//	for(int i=0 ; i<N ; i++)
//	{
//		cin >> arr[i];
//		freq[arr[i]+500]++;
//	}
//
//	for(int j=0 ; j<770 ; j++)
//	{
//		//cout << "index: "<< j << " is " << freq[j] << endl;
//		if(freq[j] > freq_num)
//		{
//			freq_num = freq[j];
//			freq_value = j-500;
//		}
//	}
//	cout << freq_value << " is repeated " << freq_num << " times.";
//
//
//	/*
//	 * Digits frequency
//	 */
//	int arr[200], N, freq[10] {0}, num;
//	cin >> N;
//	for(int i=0 ; i<N ; i++)
//	{
//		cin >> arr[i];
//		if(arr[i] == 0)
//			freq[0]++;
//		num = arr[i];
//		while (num)
//		{
//			freq[num%10]++;
//			num/=10;
//		}
//	}
//	for(int j=0 ; j<10 ; j++)
//		cout << j << " " << freq[j] << endl;
//
//
//	/*
//	 * Unique numbers of unordered list
//	 */
//	int N;
//	cin >> N;
//	int arr[N], freq[500] {0};
//	for(int i=0 ; i<N ; i++)
//	{
//		cin >> arr[i];
//		if(freq[arr[i]] == 0)
//		{
//			cout << arr[i] << " ";
//			freq[arr[i]]++;
//		}
//	}
//
//
//	/*
//	 * Sorting numbers
//	 */
//	int arr[900], N, freq[500] {0}, count {0};
//	cin >> N;
//	for(int i=0 ; i<N ; i++)
//	{
//		cin >> arr[i];
//		freq[arr[i]]++;
//	}
//	for(int i=0 ; i<500 ; i++)
//	{
//		while(freq[i])
//		{
//			cout << i << " ";
//			count ++;
//			freq[i]--;
//			if(count == N)
//				break;
//		}
//	}
//	This is called count sort algorithm. The most efficient if values are small.
}
