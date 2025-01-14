#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> shuffle(vector<int>& nums, int n)
    {
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }

        return ans;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int n = 3;
    vector<int> ans = solution.shuffle(nums, n);

    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
