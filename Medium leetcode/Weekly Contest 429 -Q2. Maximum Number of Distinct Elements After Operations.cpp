#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxDistinctElements(vector<int>& nums, int k)
    {
        sort(nums.begin(), nums.end());

        int lastValue = -1e9;
        int distinctCount = 0;

        for (int num : nums)
        {
            if (num - k > lastValue)
            {
                lastValue = num - k;
                distinctCount++;
            }
            else if (num + k > lastValue)
            {
                lastValue += 1;
                distinctCount++;
            }
        }

        return distinctCount;
    }
};

int main()
{
    Solution solution;

    vector<int> nums1 = {7, 8, 10, 10, 7, 6, 7};
    int k1 = 1;
    cout << solution.maxDistinctElements(nums1, k1) << endl;

    vector<int> nums2 = {4, 4, 4, 4};
    int k2 = 1;
    cout << solution.maxDistinctElements(nums2, k2) << endl;

    return 0;
}
/**
 nums1 = {6, 7, 7, 7,8, 10, 10,}  k1 = 1;

 ekane sob vaue thke k+ or k- kore  value poriborton kora jabe,,amader value sob value poribin kore sob gula joto mx pari diffrent korte
*/

