#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int arithmeticTriplets(vector<int>& nums, int diff)
    {
        vector<int> numSet;
        int count = 0;


        for (int num : nums)
        {
            bool foundFirst = false, foundSecond = false;

            for (int x : numSet)
            {
                if (x == num - diff)
                {
                    foundFirst = true;
                }
                if (x == num - 2 * diff)
                {
                    foundSecond = true;
                }
            }

            if (foundFirst && foundSecond)
            {
                count++;
            }

            numSet.push_back(num);
        }

        return count;
    }
};

int main()
{
    Solution solution;

    // Example 1
    vector<int> nums1 = {0, 1, 4, 6, 7, 10};
    int diff1 = 3;
    cout << "Output for Example 1: " << solution.arithmeticTriplets(nums1, diff1) << endl;

    // Example 2
    vector<int> nums2 = {4, 5, 6, 7, 8, 9};
    int diff2 = 2;
    cout << "Output for Example 2: " << solution.arithmeticTriplets(nums2, diff2) << endl;

    return 0;
}
