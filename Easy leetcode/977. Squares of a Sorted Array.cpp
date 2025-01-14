#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        int i = 0, j = nums.size() - 1;
        vector<int> result(nums.size());
        int index = j;

        while (i <= j)
        {
            int left = nums[i] * nums[i];
            int right = nums[j] * nums[j];

            if (left > right)
            {
                result[index--] = left;
                i++;
            }
            else
            {
                result[index--] = right;
                j--;
            }
        }
        return result;
    }
};

int main()
{
    Solution solution;

    // Test case 1
    vector<int> nums1 = {-4, -1, 0, 3, 10};
    vector<int> result1 = solution.sortedSquares(nums1);
    for (int num : result1)
    {
        cout << num << " ";
    }
    cout << endl;  // Output: 0 1 9 16 100

    // Test case 2
    vector<int> nums2 = {-7, -3, 2, 3, 11};
    vector<int> result2 = solution.sortedSquares(nums2);
    for (int num : result2)
    {
        cout << num << " ";
    }
    cout << endl;  // Output: 4 9 9 49 121

    return 0;
}

