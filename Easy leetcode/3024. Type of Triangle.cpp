#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string triangleType(vector<int>& nums)
    {
        if (  (nums[0] + nums[1] > nums[2]) && (nums[0] + nums[2] > nums[1]) && (nums[1] + nums[2] > nums[0])  )
        {
            if (nums[0] == nums[1] && nums[1] == nums[2])
            {
                return "equilateral";
            }
            else if (nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2])
            {
                return "isosceles";
            }
            else
            {
                return "scalene";
            }
        }
        return "none";
    }
};

int main()
{
    Solution solution;

    vector<int> nums1 = {3, 3, 3};
    cout << solution.triangleType(nums1) << endl;  // Output: "equilateral"

    vector<int> nums2 = {3, 4, 5};
    cout << solution.triangleType(nums2) << endl;  // Output: "scalene"

    vector<int> nums3 = {4, 4, 5};
    cout << solution.triangleType(nums3) << endl;  // Output: "isosceles"

    vector<int> nums4 = {1, 2, 3};
    cout << solution.triangleType(nums4) << endl;  // Output: "none"

    return 0;
}
