#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals)
    {
        vector<pair<int, int>> sortedIntervals;
        int n = intervals.size();
        vector<int> result(n, -1);

        for (int i = 0; i < n; ++i)
        {
            sortedIntervals.push_back({intervals[i][0], i});
        }

        sort(sortedIntervals.begin(), sortedIntervals.end());

        for (int i = 0; i < n; ++i)
        {
            int target = intervals[i][1];
            int left = 0, right = n - 1;

            while (left <= right)
            {
                int mid = left + (right - left) / 2;
                if (sortedIntervals[mid].first >= target)
                {
                    result[i] = sortedIntervals[mid].second;
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
        }

        return result;
    }
};


int main()
{
    Solution solution;
    vector<vector<int>> intervals = {{3, 4}, {2, 3}, {1, 2}};
    vector<int> result = solution.findRightInterval(intervals);

    // Output the result
    for (int idx : result)
    {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}

