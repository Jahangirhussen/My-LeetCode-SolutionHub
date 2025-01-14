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
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target;
    cout << "Enter target: ";
    cin >> target;
    int result = solution.search(nums, target);
    if (result != -1)
    {
        cout << "Target found at index: " << result << endl;
    }
    else
    {
        cout << "Target not found." << endl;
    }
    return 0;
}
