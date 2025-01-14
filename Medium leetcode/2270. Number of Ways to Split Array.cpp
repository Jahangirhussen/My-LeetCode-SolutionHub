#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int waysToSplitArray(vector<int>& nums)
    {
        int n = nums.size();
        long long totalSum = 0, leftSum = 0;
        int count = 0;

        for (int x : nums)
        {
            totalSum = totalSum + x;
        }

        for (int i = 0; i < n - 1; ++i)
        {
            leftSum = leftSum + nums[i];
            long long rightSum = totalSum - leftSum;
            if (leftSum >= rightSum)
            {
               count++;
            }
        }

        return count;
    }
};

int main()
{
    // Example 1
    vector<int> nums1 = {10, 4, -8, 7};
    Solution sol;
    cout << "Example 1 Output: " << sol.waysToSplitArray(nums1) << endl;

    // Example 2
    vector<int> nums2 = {2, 3, 1, 0};
    cout << "Example 2 Output: " << sol.waysToSplitArray(nums2) << endl;

    return 0;
}
