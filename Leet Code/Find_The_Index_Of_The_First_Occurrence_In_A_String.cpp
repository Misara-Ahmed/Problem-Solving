#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle)
{
    int i=0;
    char flag=0;
    while( haystack.size()-i >= needle.size() )
    {
        if(haystack[i] == needle[0])
        {
            flag = 1;
            for(int j=1 ; j<needle.size() ; j++)
            {
                if(needle[j] != haystack[j+i])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            {
                break;
            }
        }
        i++;
    }
    if(flag == 0)
    {
        return -1;
    }
    else
    {
        return i;
    }
}

int main()
{
    //string haystack = "sadbcutsad";
    //string needle = "sad";

    //string haystack = "leetcode";
    //string needle = "leeto";

    string haystack = "mississippi";
    string needle = "issip";

    cout << strStr(haystack, needle);
}