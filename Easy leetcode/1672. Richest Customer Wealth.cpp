#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maximumWealth(vector<vector<int>>& accounts)
    {
        int max_sum = 0;
        for (auto & account : accounts)
        {
            int sum = 0;
            for (int value : account)
            {
                sum =sum + value;
            }
            max_sum = max(max_sum, sum);
        }
        return max_sum;
    }
};

int main()
{
    int m, n;
    cout << "Enter the number of customers (m): ";
    cin >> m;
    cout << "Enter the number of banks (n): ";
    cin >> n;

    vector<vector<int>> accounts(m, vector<int>(n));

    // Input account data for each customer
    cout << "Enter the wealth of each customer in each bank:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> accounts[i][j];
        }
    }

    Solution sol;
    int result = sol.maximumWealth(accounts);
    cout << "The maximum wealth is: " << result << endl;

    return 0;
}
