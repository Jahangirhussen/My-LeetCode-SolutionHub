#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> ans(2 * n);

        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 2, 1};
    Solution solution;
    vector<int> result = solution.getConcatenation(nums);

    for (int num : result)
    {
        cout << num << " ";
    }
    return 0;
}

