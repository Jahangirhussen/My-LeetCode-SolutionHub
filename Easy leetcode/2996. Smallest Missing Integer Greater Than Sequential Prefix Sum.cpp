#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int missingInteger(vector<int>& nums)
{
    int sum = 0;
    int i = 0;
    while (i + 1 < nums.size() && nums[i] + 1 == nums[i + 1])
    {
        sum =sum + nums[i];
        i++;
    }
    sum =sum + nums[i];




    unordered_set<int> numSet(nums.begin(), nums.end());

    while (numSet.find(sum) != numSet.end())
    {
        sum++;
    }

    return sum;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 9, 18, 30, 32, 19, 21};
    cout << "Smallest missing integer: " << missingInteger(nums) << endl;
    return 0;
}
