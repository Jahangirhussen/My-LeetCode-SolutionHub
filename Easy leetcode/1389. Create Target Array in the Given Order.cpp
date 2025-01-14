#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index)
    {
        vector<int> target;
        for (int i = 0; i < nums.size(); ++i)
        {
            target.insert(target.begin() + index[i], nums[i]);
        }
        return target;
    }
};

int main()
{
    Solution solution;
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> index(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> index[i];
    }

    vector<int> x = solution.createTargetArray(nums, index);

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}
