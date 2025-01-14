#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int>& nums)
    {
        unordered_map<int, int> mp;
        int major = 0, count = 0;
        for (int x : nums)
        {
            mp[x]++;
            if (mp[x] > count)
            {
                count = mp[x];
                major = x;
            }
        }
        return major;
    }
};



int main()
{
    Solution ob1;
    vector<int> nums= {2,2,1,1,1,2,2};
    cout << ob1.majorityElement(nums) << endl;

    return 0;
}

