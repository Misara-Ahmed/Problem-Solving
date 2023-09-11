#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s)
{
    int max = 0;
    for (int i=s.size()-1 ; i>-1 ; i--)
    {
        if(s[i] != ' ')
        {
            max++;
        }
        if(s[i] == ' ' && max > 0)
        {
            break;
        }
    }
    return max;
}

int main()
{
    cout << lengthOfLastWord("   fly me   to   the moon  ");
}