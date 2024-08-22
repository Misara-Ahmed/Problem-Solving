#include <iostream>
using namespace std;

int helper(int start, int end)
{
    int num = 0;
    if ( isBadVersion(end) && !(isBadVersion(end-1)) )
    {
        return end;
    }
    else
    {
        num = ( (end-start)/2 ) + start;
        if( isBadVersion(num) && !(isBadVersion(num-1)) )
        {
            return num;
        }
        else if( isBadVersion(num) )
        {
            return helper(start,num);
        }
        else
        {
            return helper(num,end);
        }
    }
}

int firstBadVersion(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return helper(0,n);
    }
}

int main()
{
}
