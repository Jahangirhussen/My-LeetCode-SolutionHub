#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findMin(vector<int>& nums)
    {
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int mid = left + (right - left) / 2;


            if (nums[mid] > nums[right])
            {
                left = mid + 1;
            }
            else if (nums[mid] < nums[right])
            {
                right = mid;
            }
            else
            {
                right--;
            }

        }
        return nums[left];
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {2, 2, 2, 0, 1};
    cout << "The minimum element is: " << solution.findMin(nums) << endl;
    return 0;
}

