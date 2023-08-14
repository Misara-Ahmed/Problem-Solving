#include <iostream>
#include <cmath>
using namespace std;

//int reverse(int x)
//{
//    long long number = x;
//    long long num = 0;
//    if(x < 0)
//    {
//        if( x == pow(-2,31) )
//        {
//            number = number + 1;
//        }
//        cout<< number <<endl;
//        number = number * (-1);
//        cout<< number <<endl;
//    }
//    while(number >= 10)
//    {
//        num = (num*10) + number % 10;
//        number = number/10;
//    }
//    num = (num*10) + number % 10;
////    if( x == pow(-2,31) )
////    {
////        num = num + 1;
////    }
//    if(x<0)
//    {
//        num = num * (-1);
//        cout<< num << endl;
//    }
//    if(num < pow(-2,31) || num > pow(2,31)-1)
//    {
//        return 0;
//    }
//    else
//    {
//        return num;
//    }
//}
int reverse(int x)
{
    long long number = x;
    long num = 0;
    if(x < 0)
    {
        number = number * (-1);
    }
    while(number >= 10)
    {
        num = (num*10) + number % 10;
        number = number/10;
    }
    num = (num*10) + number % 10;
    if(x < 0)
    {
        num = num * (-1);
    }
    if(num < pow(-2,31) || num > pow(2,31)-1)
    {
        return 0;
    }
    else
    {
        return num;
    }
}

int main()
{
    cout << reverse(-2147483648);
    return 0;
}
