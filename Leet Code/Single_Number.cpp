#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums)
{
    char flag = 0;
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
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            break;
        }
        else
        {
            flag = 0;
        }
    }
    return nums[i];
}

int main()
{
    vector<int> test = {2,2,1};
    cout << singleNumber(test);
}