#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    double minimumAverage(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        double avg = INT_MAX;
        int i = 0, j = nums.size() - 1;

        while (i < j)
        {
            avg = min(avg, (nums[i] + nums[j]) / 2.0);
            i++;
            j--;
        }

        return avg;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1,2,3,7,8,9};
    cout << solution.minimumAverage(nums) << endl;
    return 0;
}
