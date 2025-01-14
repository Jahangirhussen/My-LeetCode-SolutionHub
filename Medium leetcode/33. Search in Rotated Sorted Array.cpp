#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        int left = 0, right = nums.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }

            if (nums[left] <= nums[mid])
            {
                if (target >= nums[left] && target < nums[mid])
                {
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            else
            {
                if (target > nums[mid] && target <= nums[right])
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
        }

        return -1;
    }
};

int main()
{
    Solution sol;

    // ইনপুট
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    // আউটপুট
    int result = sol.search(nums, target);
    cout << "Index of target: " << result << endl;

    return 0;
}

