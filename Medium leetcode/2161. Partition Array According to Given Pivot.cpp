#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> pivotArray(vector<int>& nums, int pivot)
    {
        vector<int> ans;
        for(int x : nums)
        {
            if (x < pivot) ans.push_back(x);


        }
        for(int x: nums)
        {
            if (x == pivot) ans.push_back(x);


        }
        for(int x : nums)
        {
            if (x > pivot) ans.push_back(x);


        }

        return ans;
    }
};




/*
class Solution
{
public:
    vector<int> pivotArray(vector<int>& nums, int pivot)
    {
        vector<int> small_pivot, smae, big;
        for (int num : nums)
        {
            if (num < pivot) small_pivot.push_back(num);
            else if (num == pivot) smae.push_back(num);
            else big.push_back(num);
        }
        small_pivot.insert(small_pivot.end(), smae.begin(), smae.end());
        small_pivot.insert(small_pivot.end(), big.begin(), big.end());
        return small_pivot;
    }
};
*/
int main()
{
    vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
    int pivot = 10;
    Solution solution;
    vector<int> result = solution.pivotArray(nums, pivot);
    for (int num : result) cout << num << " ";
    return 0;
}
