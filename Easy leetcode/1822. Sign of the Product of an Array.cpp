#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int arraySign(vector<int>& nums)
    {
        int zero = 0, neg = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                return 0;
            }
            else if (nums[i] < 0)
            {
                neg++;
            }
        }

        return neg % 2 == 0 ? 1 : -1;
    }
};

int main()
{
    Solution solution;

    vector<int> nums1 = {-1, -2, -3, -4, 3, 2, 1};
    vector<int> nums2 = {1, 5, 0, 2, -3};
    vector<int> nums3 = {-1, 1, -1, 1, -1};

    cout << solution.arraySign(nums1) << endl;
    cout << solution.arraySign(nums2) << endl;
    cout << solution.arraySign(nums3) << endl;

    return 0;
}
