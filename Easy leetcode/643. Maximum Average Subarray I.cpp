#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int>& nums, int k)
    {
        int n = nums.size();
        double current_sum = 0;
        double max_avg = numeric_limits<double>::lowest();

        for (int i = 0; i < n; ++i)
        {
            current_sum += nums[i];

            if (i >= k - 1)
            {
                if (i >= k)
                {
                    current_sum -= nums[i - k];
                }
                max_avg = max(max_avg, current_sum / k);
            }
        }

        return max_avg;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 12, -5, -6, 50, 3};  // Example input
    int k = 4;
    cout << sol.findMaxAverage(nums, k) << endl;  // Output should be 12.75
    return 0;
}

