#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k)
    {
        int count = 0;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] % (nums2[j] * k) == 0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;

    vector<int> nums1 = {1, 3, 4};
    vector<int> nums2 = {1, 3, 4};
    int k = 1;
    int result = sol.numberOfPairs(nums1, nums2, k);

    cout << "Result: " << result << endl;

    return 0;
}
