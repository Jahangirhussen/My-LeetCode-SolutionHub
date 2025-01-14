#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    long long minimumReplacement(vector<int>& nums)
    {
        long long count = 0;
        for (int i = nums.size() - 2; i >= 0; --i)
        {
            if (nums[i] > nums[i + 1])
            {
                int x = (nums[i] + nums[i + 1] - 1) / nums[i + 1];
                count += x - 1;
                nums[i] = nums[i] / x;
            }
        }
        return count;
    }
};
int main()
{
    vector<int> nums1 = {3, 9, 3};
    cout << "Example 1 Output: " << minimumReplacement(nums1) << endl;

    vector<int> nums2 = {2, 10, 20, 19, 1};
    cout << "Example 2 Output: " << minimumReplacement(nums2) << endl;

    return 0;
}
/*
Here’s the step-by-step breakdown of the algorithm applied to the input [2, 10, 20, 19, 1] without code:

i also post my cpp solution on solution Section,you can cheek,
here is link::https://leetcode.com/problems/minimum-replacements-to-sort-the-array/solutions/6187794/2366-minimum-replacements-to-sort-the-ar-psv8
Initial Array:
[2, 10, 20, 19, 1]

Steps:
Step 1 (i = 3, comparing 19 and 1):
- nums[3] = 19, nums[4] = 1
- Since 19 > 1, we calculate x = (19 + 1 - 1) / 1 = 19.
- Increment count by 19 - 1 = 18. So, count = 18.
- Update nums[3] = 19 / 19 = 1.
- New array: [2, 10, 20, 1, 1].

Step 2 (i = 2, comparing 20 and 1):
- nums[2] = 20, nums[3] = 1
- Since 20 > 1, we calculate x = (20 + 1 - 1) / 1 = 20.
- Increment count by 20 - 1 = 19. So, count = 18 + 19 = 37.
- Update nums[2] = 20 / 20 = 1.
- New array: [2, 10, 1, 1, 1].

Step 3 (i = 1, comparing 10 and 1):
- nums[1] = 10, nums[2] = 1
- Since 10 > 1, we calculate x = (10 + 1 - 1) / 1 = 10.
- Increment count by 10 - 1 = 9. So, count = 37 + 9 = 46.
- Update nums[1] = 10 / 10 = 1.
- New array: [2, 1, 1, 1, 1].

Step 4 (i = 0, comparing 2 and 1):
- nums[0] = 2, nums[1] = 1
- Since 2 > 1, we calculate x = (2 + 1 - 1) / 1 = 2.
- Increment count by 2 - 1 = 1. So, count = 46 + 1 = 47.
- Update nums[0] = 2 / 2 = 1.
- New array: [1, 1, 1, 1, 1].

Final Array:
[1, 1, 1, 1, 1]

Total Operations:
47
*/










