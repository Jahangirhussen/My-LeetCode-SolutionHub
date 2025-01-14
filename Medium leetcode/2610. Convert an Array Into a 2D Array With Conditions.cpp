#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<vector<int>> findMatrix(vector<int>& nums)
    {
        unordered_map<int, int> mp;
        vector<vector<int>> ans;

        for (int x : nums)
        {
            mp[x]++;
        }

        while (!mp.empty())
        {
            vector<int> row;

            for (auto val = mp.begin(); val != mp.end(); )
            {
                if (val->second > 0)
                {
                    row.push_back(val->first);
                    val->second--;
                    if (val->second == 0)
                    {
                        mp.erase(val++);
                    }
                    else
                    {
                        ++val;
                    }
                }
                else
                {
                    ++val;
                }
            }

            ans.push_back(row);
        }

        return ans;
    }
};


int main()
{
    Solution solution;
    vector<int> nums = {1, 3, 4, 1, 2, 3, 1};
    vector<vector<int>> ans = solution.findMatrix(nums);

    for (const auto& row : ans)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
