#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int smallestRangeI(vector<int>& nums, int k)
    {
        int min_val = nums[0], max_val = nums[0];

        for (int x : nums)
        {
            min_val = min(min_val, x);
            max_val = max(max_val, x);
        }

        return max(0, max_val - min_val - 2 * k);
    }
};

int main()
{
    Solution solution;

    vector<int> nums1 = {1};
    int k1 = 0;
    cout << "Output for nums1: " << solution.smallestRangeI(nums1, k1) << endl;  // Output: 0

    vector<int> nums2 = {0, 10};
    int k2 = 2;
    cout << "Output for nums2: " << solution.smallestRangeI(nums2, k2) << endl;  // Output: 6

    vector<int> nums3 = {1, 3, 6};
    int k3 = 3;
    cout << "Output for nums3: " << solution.smallestRangeI(nums3, k3) << endl;  // Output: 0

    return 0;
}
