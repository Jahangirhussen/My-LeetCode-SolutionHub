#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool canBeIncreasing(vector<int>& nums)
    queue<int> q(nums.begin(),nums.end());
    {
        int count = 0;
        for (int i = 1; i < q.size(); i++)
        {
            if (q[i] <= q[i - 1])
            {
                count++;
                if (count > 1) return false;
                if (i > 1 && q[i] <= q[i - 2])/// nxt number ta deka hocche jodi next tao er cheye chuto hoy tahole i ta remove hobe
                {
                    q.erase(q.begin() + i);
                    i--;
                }
            }
        }
        return true;
    }
};


int main()
{
    Solution Solution;
    vector<int> nums1 = {1, 2, 10, 5, 7};
    vector<int> nums2 = {2, 3, 1, 2};
    vector<int> nums3 = {1, 1, 1};

    cout << Solution.canBeIncreasing(nums1) << endl;  // আউটপুট: 1 (true)
    cout << Solution.canBeIncreasing(nums2) << endl;  // আউটপুট: 0 (false)
    cout << Solution.canBeIncreasing(nums3) << endl;  // আউটপুট: 0 (false)
    return 0;
}

