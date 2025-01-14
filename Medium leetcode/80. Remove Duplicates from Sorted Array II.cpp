#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        if (nums.size() <= 2) return nums.size();
        int k = 2;
        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i] != nums[k - 2])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main()
{
    Solution ob1;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 3};
    int newLength = ob1.removeDuplicates(nums);

    for (int i = 0; i < newLength; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
