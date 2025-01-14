#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
class Solution
{
public:
    int minMoves2(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int mid = nums[nums.size() / 2];
        cout<<"________"<<mid<<endl;
        int ans = 0;

        for (int x : nums)
        {
            ans = ans + abs(x - mid);
        }
        return ans;
    }
};
int main()
{
    Solution ob1;

    vector<int> nums1 = {1, 2, 3};
    cout << "Minimum ans for nums1: " << ob1.minMoves2(nums1) << endl;

    vector<int> nums2 = {1, 10, 2, 3};
    cout << "Minimum ans for nums2: " << ob1.minMoves2(nums2) << endl;

    return 0;
}

