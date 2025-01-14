#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int>& nums)
    {
        int left = 0, right = nums.size() - 1;

        while (left < right)
        {
            int mid = left + (right - left) / 2;


            if (nums[mid] > nums[mid + 1])
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 3, 1};  // Example input
    cout << "Peak Element Index: " << solution.findPeakElement(nums) << endl;

    return 0;
}
