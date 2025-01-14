#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != i)
        {
            return i;
        }
    }
    return nums.size();
}

int main()
{
    vector<int> nums = {2, 0, 1};

    int result = missingNumber(nums);
    cout << "The missing number is: " << result << endl;

    return 0;
}
/* another good way
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n * (n + 1) / 2;
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        return total - sum;
    }
};
*/
