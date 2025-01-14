#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    long long maximumCoins(vector<vector<int>>& intervals, int k)
    {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();

        long long maxCoins = 0, currentSum = 0;
        for (int i = 0, j = 0; i < n; ++i)
        {
            while (j < n && intervals[j][1] <= intervals[i][0] + k - 1)
            {
                currentSum += 1L * (intervals[j][1] - intervals[j][0] + 1) * intervals[j][2];
                j++;
            }
            if (j < n)
            {
                long long extraCoins = 1L * max(0, intervals[i][0] + k - 1 - intervals[j][0] + 1) * intervals[j][2];
                maxCoins = max(maxCoins, currentSum + extraCoins);
            }
            currentSum -= 1L * (intervals[i][1] - intervals[i][0] + 1) * intervals[i][2];
        }

        currentSum = 0;
        for (int i = 0, j = 0; i < n; ++i)
        {
            currentSum += 1L * (intervals[i][1] - intervals[i][0] + 1) * intervals[i][2];
            while (intervals[j][1] < intervals[i][1] - k + 1)
            {
                currentSum -= 1L * (intervals[j][1] - intervals[j][0] + 1) * intervals[j][2];
                j++;
            }
            long long extraCoins = 1L * max(0, intervals[i][1] - k - intervals[j][0] + 1) * intervals[j][2];
            maxCoins = max(maxCoins, currentSum - extraCoins);
        }

        return maxCoins;
    }
};


int main()
{
    Solution solution;
    vector<vector<int>> A =
    {
        {1, 3, 5},
        {2, 5, 6},
        {4, 6, 7}
    };
    int k = 3;

    // সর্বাধিক কয়েনের ফলাফল প্রিন্ট করা
    cout << "Maximum Coins: " << solution.maximumCoins(A, k) << endl;

    return 0;
}
