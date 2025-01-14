#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minDifference(vector<int>& nums)
    {
        int n = nums.size();
        if (n <= 4) return 0;

        sort(nums.begin(), nums.end());

        return min({nums[n-4] - nums[0], nums[n-3] - nums[1], nums[n-2] - nums[2], nums[n-1] - nums[3]});
    }
};

int main()
{
    Solution ob1;

    vector<int> nums1 = {-1, 3, -1, 8, 5, 4};
    cout << ob1.minDifference(nums1) << endl;

  vector<int> nums2 = {5, 3, 2, 4};
    cout << ob1.minDifference(nums2) << endl;

    return 0;
}

