#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findNonMinOrMax(vector<int>& nums)
    {
        int mi = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        for (int x : nums)
        {
            if (x != mi && x != mx) return x;
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {5, 1, 2, 3, 4};
    cout << sol.findNonMinOrMax(nums) << endl;
    return 0;
}

