#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target)
{
    if(target > nums[nums.size()-1] )
    {
        return nums.size();
    }
    else
    {
        int i=0;
        while(nums[i] < target && i<nums.size() )
        {
            i++;
        }
        return i;
    }
}

int main()
{
    vector<int> test = {1,3,5,6};
    cout << searchInsert(test,7);
}