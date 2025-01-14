#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> ans;
        if (nums.size() % 2 != 0) // Ensure the size is even
            return ans;

        for (int i = 0; i < nums.size() - 1; i += 2)
        {
            for (int j = 0; j < nums[i]; j++)
            {
                ans.push_back(nums[i + 1]);
            }
        }
        return ans;
    }
};


int main()
{
    Solution ob1;
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> result = ob1.decompressRLElist(nums);

    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
