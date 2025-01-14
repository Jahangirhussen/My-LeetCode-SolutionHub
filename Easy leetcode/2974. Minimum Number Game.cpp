#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> numberGame(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> arr;
        for (int i = 0; i < nums.size(); i += 2)
        {
            arr.push_back(nums[i + 1]);
            arr.push_back(nums[i]);
        }
        return arr;
    }
};

int main()
{
    Solution ob1;
    vector<int> nums;
    int num, t;

    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> num;
        nums.push_back(num);
    }

    vector<int> result = ob1.numberGame(nums);
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
