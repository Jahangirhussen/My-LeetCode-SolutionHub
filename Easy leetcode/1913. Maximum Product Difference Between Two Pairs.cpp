#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxProductDifference(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());

        int max_product = nums[nums.size() - 1] * nums[nums.size() - 2];
        int min_product = nums[0] * nums[1];
        return max_product - min_product;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {5, 6, 2, 7, 4};
    cout << sol.maxProductDifference(nums) << endl;
    return 0;
}
/*class Solution
{
public:
    int maxProductDifference(vector<int>& nums)
    {
        int c = INT_MIN, d = INT_MIN;
        int a = INT_MAX, b = INT_MAX;

        for (int x : nums)
        {
            if (x > c)
            {
                d = c;
                c = x;
            }
            else if (x > d)
            {
                d = x;
            }

            if (x < a)
            {
                b = a;
                a = x;
            }
            else if (x < b)
            {
                b = x;
            }
        }

        return (c * d) - (a * b);
    }
};
*/
