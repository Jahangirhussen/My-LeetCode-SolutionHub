#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findMissingAndRepeating(vector<vector<int>>& grid)
{
    int n = grid.size();
    unordered_map<int, int> mp;
    int a = -1, b = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mp[ grid[i][j] ]++;
        }
    }

    for (int i = 1; i <= n * n; i++)
    {
        if (mp[i] == 2) a = i;
        else if (mp[i] == 0) b = i;
    }

    return {a, b};
}

int main()
{
    vector<vector<int>> grid = {{1, 3}, {2, 2}};
    vector<int> result = findMissingAndRepeating(grid);
    cout << "Repeating: " << result[0] << ", Missing: " << result[1] << endl;
    return 0;
}
