#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countNegatives(vector<vector<int>>& grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        for (int i = 0; i < m; i++)
        {
            int left = 0, right = n - 1;
            while (left <= right)
            {
                int mid = left + (right - left) / 2;
                if (grid[i][mid] < 0)
                {
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            count += n - left;
        }

        return count;
    }
};

int main()
{
    Solution solution;

    vector<vector<int>> grid1 = {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    cout << "Negative numbers count: " << solution.countNegatives(grid1) << endl;

    vector<vector<int>> grid2 = {{3, 2}, {1, 0}};
    cout << "Negative numbers count: " << solution.countNegatives(grid2) << endl;

    return 0;
}

