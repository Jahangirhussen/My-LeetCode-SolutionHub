#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int thirdMax(vector<int>& nums)
    {
        set<int> s(nums.begin(), nums.end());
        vector<int> ans(s.begin(), s.end());
        sort(ans.begin(), ans.end(), greater<int>());

        if (ans.size() >= 3)
            return ans[2];
        else
            return ans[0];
    }
};

int main()
{
    Solution solution;
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << solution.thirdMax(nums) << endl;
    return 0;
}
