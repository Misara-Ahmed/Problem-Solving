//
// Created by Misara on 8/3/2023.
//
#include <iostream>

using namespace std;
int fib(int n)
{
    if(n < 2)
    {
        return n;
    }
    int first = 0;
    int second = 1;
    int result = first + second;
    for(int i=2 ; i<n ; i++)
    {
        first = second;
        second = result;
        result = first + second;
    }
    return result;
}

int main() {
    cout <<fib(4)<< endl;
    return 0;
}