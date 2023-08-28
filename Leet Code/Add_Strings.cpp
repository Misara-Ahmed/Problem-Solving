#include <iostream>
using namespace std;

string addStrings(string num1, string num2) 
{
    if(num1[0] == 48 && num2[0] == 48)
    {
        return num1;
    }
    string result;
    char carry = 0;
    int sum = 0;
    int max_length;
    int size1 = num1.size(); 
    int size2 = num2.size();

    if( size1 > size2 )
    {
        max_length = size1;
        result = num1;
    }
    else
    {
        max_length = size2;
        result = num2;   
    }

    for(int i=0 ; i<max_length ; i++)
    {

        if( ( (size2-1)-i) < 0 )
        {
            sum = carry + (num1[size1-1 - i] - 48);
            cout << sum << endl;
        }
        else if ( ( (size1-1) - i) < 0 )
        {
            sum = carry + (num2[size2-1 - i] - 48);
            cout << sum << endl;
        }
        else
        {
            sum = (num1[size1-1 - i] - 48) + (num2[size2-1 - i] - 48) + carry;
            cout << sum << endl;
        }
        if( sum >= 10 )
        {
            result[max_length-1 - i] = (sum-10) + 48;
            carry = 1;
        }
        else
        {
            carry = 0;
            result[max_length-1 - i] = sum + 48;
        }
    }
    if ( carry == 1 )
    {
        result.push_back(48);
        for(int i=result.size()-1 ; i>0 ; i--)
        {
            result[i] = result[i-1];
        }
        result[0] = 1 + 48;
    }
    return result;
}

int main()
{
    cout << addStrings("9", "99");
}