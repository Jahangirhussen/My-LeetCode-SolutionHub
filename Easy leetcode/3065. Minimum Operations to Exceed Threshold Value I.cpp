#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int>& nums, int k)
    {
        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]<k)ans++;

        }
        return ans;
    }
};

int main()
{
    Solution obj;
    int n;
    cin >> n;

    vector<int> nums;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int k;
    cin >> k;

    cout << obj.minOperations(nums, k) << endl;

    return 0;
}
