#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int> result = {-1, -1};

        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                if (mid == 0 || nums[mid - 1] != target)
                {
                    result[0] = mid;
                    break;
                }
                else
                {
                    right = mid - 1;
                }
            }
        }

        left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                if (mid == nums.size() - 1 || nums[mid + 1] != target)
                {
                    result[1] = mid;
                    break;
                }
                else
                {
                    left = mid + 1;
                }
            }
        }

        return result;
    }
};

int main()
{
    Solution solution;

    vector<int> nums1 = {5, 7, 7, 8, 8, 10};
    vector<int> result1 = solution.searchRange(nums1, 8);
    cout << "[" << result1[0] << "," << result1[1] << "]" << endl; // আউটপুট: [3, 4]

    vector<int> nums2 = {5, 7, 7, 8, 8, 10};
    vector<int> result2 = solution.searchRange(nums2, 6);
    cout << "[" << result2[0] << "," << result2[1] << "]" << endl; // আউটপুট: [-1, -1]

    vector<int> nums3 = {};
    vector<int> result3 = solution.searchRange(nums3, 0);
    cout << "[" << result3[0] << "," << result3[1] << "]" << endl; // আউটপুট: [-1, -1]

    return 0;
}

