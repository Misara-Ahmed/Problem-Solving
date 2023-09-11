#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums)
{
    int idx;
    for (int i=0 ; i<nums.size()-1 ; i++)
    {
        if(nums[i] == 0)
        {
            for(idx = i+1 ; idx<nums.size() ; idx++)
            {
                if(nums[idx] != 0)
                {
                    nums[i] = nums[idx];
                    nums[idx] = 0;
                    break;
                }
            }
        }
    }
}

int main()
{
    vector<int> test = {0,1,0,3,12};
    moveZeroes(test);
}