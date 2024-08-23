#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string s)
{
    vector <char> word;
    for(int i=0 ; i<s.length(); i++)
    {
        if( (s[i] > 96 && s[i] < 123) || (s[i] > 47 && s[i] < 58) )
        {
            word.push_back(s[i]);
        }
        else if(s[i] > 64 && s[i] < 91)
        {
            word.push_back(s[i]+32);
        }
        else{}
    }
    if (word.size() == 0)
    {
        return true;
    }
    else
    {
        for(int i=0 ; i< word.size()/2 ; i++)
        {
            if(word[i] != word[word.size()-i-1])
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    //cout << isPalindrome("A man, a plan, a canal: Panama");
    cout << isPalindrome("0P");
}