#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int>& nums)
    {
        vector<int> ans(nums.size());
        ans[0] = nums[0];

        for (int i = 1; i < nums.size(); ++i)
        {
            ans[i] = ans[i - 1] + nums[i];
        }

        return ans;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = solution.runningSum(nums);

    for (int num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

