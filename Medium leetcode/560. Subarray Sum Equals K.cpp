#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int subarraySum(vector<int>& nums, int k)
    {
        int count = 0, sum = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;

        for (int x : nums)
        {
            sum = sum + x;
            if (mp.find(sum - k) != mp.end()) count = count + mp[sum - k];
            mp[sum]++;
        }

        return count;
    }
};


int main()
{
    Solution sol;
    vector<int> nums1 = {1, 1, 1};
    int k1 = 2;
    cout << "Output for nums1: " << sol.subarraySum(nums1, k1) << endl; // Output: 2

    vector<int> nums2 = {1, 2, 3};
    int k2 = 3;
    cout << "Output for nums2: " << sol.subarraySum(nums2, k2) << endl; // Output: 2

    return 0;
}


/**
class Solution
{
public:
    int subarraySum(vector<int>& nums, int k)
    {
        int count = 0;

        for (int sub_size = 1; sub_size <= nums.size(); sub_size++)
        {
            for (int i = 0; i <= nums.size() - sub_size; i++)
            {
                int sum = 0;
                for (int j = i; j < i + sub_size; j++)
                {
                    sum = sum + nums[j];
                }
                if (sum == k)
                {
                    count++;
                }
            }
        }

        return count;
    }
};
*/
