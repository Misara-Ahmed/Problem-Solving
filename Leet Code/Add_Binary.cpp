#include <iostream>
using namespace std;

string addBinary(string a, string b)
{
    int min = 0;
    int max = 0;
    char carry = 0;
    string answer = "";
    if( a.length() < b.length() )
    {
        min = a.length();
        max = b.length();
    }
    else
    {
        min = b.length();
        max = a.length();
    }
    for(int i=1 ; i<min+1 ; i++)
    {
        if(a[a.length() - i] == b[b.length() - i])
        {
            if(a[a.length() - i] == '1')
            {
                if(carry == 1)
                {
                    answer.insert(0, "1");
                }
                else
                {
                    answer.insert(0, "0");
                    carry = 1;
                }
            }
            else
            {
                if(carry)
                {
                    answer.insert(0, "1");
                    carry = 0;
                }
                else
                {
                    answer.insert(0, "0");
                }
            }
        }
        else
        {
            if(carry == 0)
            {
                answer.insert(0, "1");
            }
            else
            {
                answer.insert(0, "0");
            }
        }
    }
    if(answer.length() < max)
    {
        if(carry == 1)
        {
            if(a.length() < b.length())
            {
                for(int i=b.length()-min-1 ; i>-1 ; i--)
                {
                    if(carry)
                    {
                        if(b[i] == '1')
                        {
                            answer.insert(0, "0");
                        }
                        else
                        {
                            answer.insert(0, "1");
                            carry = 0;
                        }
                    }
                    else
                    {
                        if(b[i] == '1')
                        {
                            answer.insert(0, "1");
                        }
                        else
                        {
                            answer.insert(0, "0");
                        }
                    }
                }
            }
            else
            {
                for(int i=a.length()-min-1 ; i>-1 ; i--)
                {
                    if(carry)
                    {
                        if(a[i] == '1')
                        {
                            answer.insert(0, "0");
                        }
                        else
                        {
                            answer.insert(0, "1");
                            carry = 0;
                        }
                    }
                    else
                    {
                        if(a[i] == '1')
                        {
                            answer.insert(0, "1");
                        }
                        else
                        {
                            answer.insert(0, "0");
                        }
                    }
                }
            }
        }
        else
        {
            if(a.length() < b.length())
            {
                for(int i=b.length()-min-1 ; i>-1 ; i--)
                {
                    if(b[i] == '1')
                    {
                        answer.insert(0, "1");
                    }
                    else
                    {
                        answer.insert(0, "0");
                    }
                }
            }
            else
            {
                for(int i=a.length()-min-1 ; i>-1 ; i--)
                {
                    if(a[i] == '1')
                    {
                        answer.insert(0, "1");
                    }
                    else
                    {
                        answer.insert(0, "0");
                    }
                }
            }
        }
    }
    if(carry == 1)
    {
        answer.insert(0, "1");
    }

    for(int i=0 ; i<answer.length() ; i++)
    {
        cout << answer[i];
    }
}

int main()
{
    addBinary("1010","1011");
}