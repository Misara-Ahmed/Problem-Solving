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
//
///////////////////////////////////////////////////////////////////////////////// Hard Level ////////////////////////////////////////////////////////////////////////////////////////////////////////
//	/*
//	 * Recaman's sequence
//	 */
//	int size {201}, freq[300] {0}; // freq array can be N*10 better to not be hard coded
//	int seq[size] {0};
//	for(int i=1 ; i<size ; i++)
//	{
//		int value = seq[i-1] - (i-1) -1;
//		if(  value > 0 && freq[value] == 0)
//		{
//			seq[i] = value;
//		}
//		else
//		{
//			value = seq[i-1] + (i-1) +1;
//			seq[i] = value;
//		}
//		freq[value]++;
//	}
//	int idx {0};
//	cin >> idx;
//	cout << seq[idx];
//
//
//	/*
//	 * Fixed sliding window
//	 */
//	int K, N, idx{0}, sum {0};
//	while(K>N)
//	{
//		cin >> K;
//		cin >> N;
//	}
//	int arr[N];
//	for(int i=0 ; i<N ; i++)
//	{
//		cin >> arr[i];
//	}
//	sum = arr[0] + arr[1] + arr[2];
//	for(int i=2 ; i<N-1 ; i++)
//	{
//		if( (sum - arr[i-2] + arr[i+1 ]) > sum)
//		{
//			sum = sum - arr[i-2] + arr[i+1];
//			idx = i;
//		}
//	}
//
//	cout << idx-1 << " " << idx << " " << idx+1;
//
//
//	/*
//	 * Count increasing subaarrays
//	 */
//	int arr[200], N, no_of_arr {0}, count {1};
//	cin >> N;
//	no_of_arr = N;
//	cin >> arr[0];
//	for(int i=1 ; i<N ; i++)
//	{
//		cin >> arr[i];
//		if(arr[i] > arr[i-1])
//		{
//			count++;
//			if(i == N-1)
//			{
//				no_of_arr += (count*(count-1)) / 2;
//				count = 1;
//			}
//		}
//		else
//		{
//			no_of_arr += (count*(count-1)) / 2;
//			count = 1;
//		}
//	}
//	cout << no_of_arr;
//
//
//	/*
//	 * Josephus problem
//	 */
//	int N,K;
//	cin >> N >> K;
//	int arr[N] {0}, ans[N] {0};
//	for(int i=0 ; i<N ; i++)
//	{
//		arr[i] = i+1;
//	}
//	int temp = N, count {1};
//	while(temp)
//	{
//		for(int j=0 ; j<N ; j++)
//		{
//			if(arr[j] != 0)
//			{
//				if(count == K)
//				{
//					ans[N-temp] = arr[j];
//					temp--;
//					arr[j] = 0;
//					count = 1;
//				}
//				else
//					count++;
//			}
//		}
//	}
//	for(int i=0 ; i<N ; i++)
//	{
//		cout << ans[i] << " ";
//	}
//
//
//	/*
//	 * Longest subarray
//	 */
//	int arr[1000] {0}, N, num_zeros {0}, num_ones {0}, min{0}, sum{0};
//	cin >> N;
//	for(int i=0 ; i<N ; i++)
//	{
//		cin >> arr[i];
//		num_zeros += arr[i] == 0;
//		num_ones += arr[i] == 1;
//	}
//	if(num_zeros < num_ones)
//		min = num_zeros+1;
//	else
//		min = num_ones+1;
//	while(sum != min)
//	{
//		sum = 0;
//		min--;
//		for(int i=0 ; i<N ; i++)
//		{
//			if( i < (2*min)-1 )
//				sum += arr[i];
//			else if( i == (2*min)-1 )
//			{
//				sum += arr[i];
//				if(sum == min)
//					break;
//			}
//			else
//			{
//				sum -= arr[ i-(2*min) ];
//				sum += arr[i];
//				if(sum == min)
//					break;
//			}
//		}
//	}
//	cout << min*2;
//
//
}
