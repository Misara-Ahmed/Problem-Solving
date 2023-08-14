#include <iostream>

using namespace std;
bool isPalindrome(int x)
{
    int number = x;
    long num = 0;
    if(x < 0)
    {
        return false;
    }
    else
    {
        while(number >= 10)
        {
            num = (num*10) + number % 10;
            number = number/10;
        }
        num = (num*10) + number % 10;
        if(num - x == 0 )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    cout<< isPalindrome(120);
    return 0;
}
