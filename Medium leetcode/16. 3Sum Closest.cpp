#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        sort(nums.begin(), nums.end());
        int close = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1, right = nums.size() - 1;

            while (left < right)
            {
                int sum_3 = nums[i] + nums[left] + nums[right];

                if (sum_3 == target) return sum_3;

                if (abs(sum_3 - target) < abs(close - target)) close = sum_3;

                if (sum_3 < target) left++;
                else right--;
            }
        }
        return close;
    }
};

int main()
{
    Solution ob1;
    vector<int> nums = {1 ,2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int target = 17;
    cout << ob1.threeSumClosest(nums, target) << endl;
    return 0;
}
