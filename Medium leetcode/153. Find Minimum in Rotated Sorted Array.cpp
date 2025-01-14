#include <iostream>
#include <vector>
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
            else
            {
                right = mid;
            }
        }

        return nums[left];
    }
};

int main()
{
    Solution sol;

    // ইনপুট
    vector<int> nums = {3, 4, 5, 1, 2};

    // আউটপুট
    int result = sol.findMin(nums);
    cout << "Minimum element: " << result << endl;

    return 0;
}
