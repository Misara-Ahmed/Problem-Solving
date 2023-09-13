#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums)
{
    char count = 0;
    int i = 0;
    for(i ; i<nums.size() ; i++)
    {
        for(int x=0 ; x<nums.size() ; x++)
        {
            if(x == i)
            {
                continue;
            }
            if(nums[i] == nums[x])
            {
                count ++;
            }
            if(count == 2)
            {
                break;
            }
        }
        if(count == 0)
        {
            break;
        }
        if(count == 2)
        {
            count = 0;
        }
    }
    return nums[i];
}

int main()
{
    vector<int> test = {0,0,0,5};
    cout << singleNumber(test);
}