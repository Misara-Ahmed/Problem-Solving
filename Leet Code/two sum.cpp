#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    int itr = 0;
    vector<int> result;
    while(itr < nums.size()-1)
    {
        for(int i = itr ; i < nums.size()-1 ; i++ )
        {
            int sum = nums[itr] + nums[i+1];
            if( sum == target )
            {
                result.push_back(itr);
                result.push_back(i+1);
                break;
            }
        }
        itr++;
    }
    return result;
}

int main()
{
    vector<int> nums = {3,2,3};
    int target = 6;
    vector<int> result = twoSum(nums,target);
    cout << result[0] << endl;
    cout << result[1];
    //cout << "Hello, World!" << endl;
    return 0;
}
