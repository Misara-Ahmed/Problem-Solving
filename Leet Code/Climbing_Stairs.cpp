//
// Created by Misara on 8/3/2023.
//
#include <iostream>

using namespace std;
int climbStairs(int n)
{
    if(n < 3)
    {
        return n;
    }
    int first = 1;
    int second = 2;
    int result = first + second;
    for(int i=3 ; i<n ; i++)
    {
        first = second;
        second = result;
        result = first + second;
    }
    return result;
}

int main() {
    cout<< climbStairs(6) <<endl;
    return 0;
}
