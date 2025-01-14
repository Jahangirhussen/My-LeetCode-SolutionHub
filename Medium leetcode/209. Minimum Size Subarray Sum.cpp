#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int n = nums.size();
        int left = 0;
        int current_sum = 0;
        int min_length = INT_MAX;

        for (int right = 0; right < n; ++right)
        {
            current_sum = current_sum + nums[right];

            while (current_sum >= target)
            {
                min_length = min(min_length, right - left + 1);
                current_sum -= nums[left];
                left++;
            }
        }

        return min_length == INT_MAX ? 0 : min_length;
    }
};

int main()
{
    Solution solution;

    // Test case 1
    vector<int> nums1 = {2, 3, 1, 2, 4, 3};
    int target1 = 7;
    cout << "Test case 1 result: " << solution.minSubArrayLen(target1, nums1) << endl;

    // Test case 2
    vector<int> nums2 = {1, 4, 4};
    int target2 = 4;
    cout << "Test case 2 result: " << solution.minSubArrayLen(target2, nums2) << endl;

    // Test case 3
    vector<int> nums3 = {1, 1, 1, 1, 1, 1, 1, 1};
    int target3 = 11;
    cout << "Test case 3 result: " << solution.minSubArrayLen(target3, nums3) << endl;

    return 0;
}

