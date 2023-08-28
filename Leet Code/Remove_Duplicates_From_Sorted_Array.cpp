#include <iostream>
using namespace std;

int removeDuplicates(vector<int>& nums) 
{  
    // Optimized Solution:
    int count = 0;
    for(int i=1 ; i<nums.size() ; i++)
    {
        if(nums[i] != nums[i-1])
        {
            count++;
            nums[count] = nums[i]
        }
    }
    return count+1;

    // Another Solution:
    //vector<int> result;
    //result.push_back(nums[0]);
    // for(int i=1 ; i<nums.size() ; i++)
    // {
    //     if(nums[i] != nums[i-1])
    //     {
    //         result.push_back(nums[i]);
    //     }
    // }
    // for(int i=0 ; i<result.size() ; i++)
    // {
    //     nums[i]=result[i];
    // }
    // return result.size();
}


int main()
{
    vector<int> data = {1,1,1,2,2,3,3,4,4,4,4,5};
    int result = removeDuplicates(nums);
    cout << result;
}