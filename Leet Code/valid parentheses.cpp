#include <iostream>
#include <vector>
using namespace std;

bool isValid(string s)
{
    if ( ( s.length() % 2 ) != 0 )
    {
        return false;
    }
    vector<int> string;
    for (int i=0 ; i < s.length() ; i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            string.push_back(s[i]);
        }
        else
        {
            if( string.empty() )
            {
                return false;
            }
            switch ( string.back() )
            {
                case '{' :
                    if (s[i] == '}')
                    {
                        string.pop_back();
                    }
                    else
                    {
                        return false;
                    }
                    break;
                case '(' :
                    if (s[i] == ')')
                    {
                        string.pop_back();
                    }
                    else
                    {
                        return false;
                    }
                    break;

                case '[' :
                    if (s[i] == ']')
                    {
                        string.pop_back();
                    }
                    else
                    {
                        return false;
                    }
                    break;
            }
        }
    }
    if( string.empty() )
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout << isValid("([}}])");
    return 0;
}
