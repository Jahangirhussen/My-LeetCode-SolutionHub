#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution
{
public:
    int smallestRangeII(vector<int>& nums, int k)
    {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int ans = nums[n-1] - nums[0];

        for (int i = 0; i < n - 1; ++i)
        {
            int maxVal = max(nums[i] + k, nums[n-1] - k);  // max value after adding/subtracting k
            int minVal = min(nums[0] + k, nums[i+1] - k);  // min value after adding/subtracting k


            ans = min(ans, maxVal - minVal);
        }

        return ans;
    }
};


int main()
{
    Solution solution;

    vector<int> nums1 = {7,8,8};
    int k1 = 5;
    cout << "Smallest Range II for nums1: " << solution.smallestRangeII(nums1, k1) << endl;

    vector<int> nums2 = {10,7, 1};
    int k2 = 3;
    cout << "Smallest Range II for nums2: " << solution.smallestRangeII(nums2, k2) << endl;

    vector<int> nums3 = {1, 3, 6};
    int k3 = 3;
    cout << "Smallest Range II for nums3: " << solution.smallestRangeII(nums3, k3) << endl;

    return 0;
}
