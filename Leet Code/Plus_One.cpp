#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits)
{
    bool flag = true;
    int i = digits.size()-1;
    while (flag)
    {
        if (digits[i] == 9 )
        {
            if(i == 0)
            {
                digits[i] = 1;
                digits.push_back(0);
                flag = false;
            }
            else
            {
                digits[i] = 0;
                i--;
            }
        }
        else 
        {
            digits[i]++;
            flag = false;
        }
    }
    return digits;
}

int main()
{
    vector<int> array = {9,9,9};
    vector<int> result = plusOne(array);
    for(int i = 0 ; i<result.size() ; i++)
    {
        cout << result[i] << endl;
    }
}