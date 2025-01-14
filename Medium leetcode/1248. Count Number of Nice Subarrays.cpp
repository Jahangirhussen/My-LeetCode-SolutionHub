#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution
{
public:
    int numberOfSubarrays(vector<int>& nums, int k)
    {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int odd = 0, count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 != 0)
            {
                odd++;
            }
            if (mp.find(odd - k) != mp.end())
            {
                count += mp[odd - k];
            }
            mp[odd]++;
        }

        return count;
    }
};

int main()
{
    Solution solution;
    vector<int> nums1 = {1, 1, 2, 1, 1};
    int k1 = 3;
    cout << solution.numberOfSubarrays(nums1, k1) << endl;

    vector<int> nums2 = {2, 4, 6};
    int k2 = 1;
    cout << solution.numberOfSubarrays(nums2, k2) << endl;

    vector<int> nums3 = {2, 2, 2, 1, 2, 2, 1, 2, 2, 2};
    int k3 = 2;
    cout << solution.numberOfSubarrays(nums3, k3) << endl;

    return 0;
}

/*
class Solution
{
public:
    int numberOfSubarrays(vector<int>& nums, int k)
    {
        int n = nums.size(), count = 0;
        for (int i = 0; i < n; i++)
        {
            int odd = 0;
            for (int j = i; j < n; j++)
            {
                if (nums[j] % 2 != 0)
                {
                    odd++;
                }
                if (odd == k)
                {
                    count++;
                    break;
                }

            }
        }
        return count;
    }
};
*/
