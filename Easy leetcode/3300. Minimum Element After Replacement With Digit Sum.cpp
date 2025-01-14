#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int minElement(vector<int>& nums)
    {
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            ans = min(ans, digit_sum(nums[i]));
        }
        return ans;
    }

private:
    int digit_sum(int num)
    {
        int digitSum = 0;
        while (num > 0)
        {
            digitSum += num % 10;
            num /= 10;
        }
        return digitSum;
    }
};

int main()
{
    Solution ob;
    vector<int> nums = {999, 19, 199};
    cout << ob.minElement(nums) << endl;
    return 0;
}
