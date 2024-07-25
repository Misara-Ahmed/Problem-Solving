#include <iostream>
using namespace std;

int addDigits(int num)
{
    int number = num;
    int sum = 0;
    while( number != 0)
    {
        sum += number%10;
        number = number/10;
        if(number == 0 && sum >= 10)
        {
            number = sum;
            sum = 0;
        }
    }
    cout << sum;
    return sum;
}

int main()
{
    addDigits(19);
}
