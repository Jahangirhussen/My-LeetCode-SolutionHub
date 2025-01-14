#include <iostream>
#include <vector>
using namespace std;
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        if (nums.empty()) return 0;

        int k = 1; // প্রথম উপাদানটি ইউনিক ধরে নিলাম

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
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
    vector<int> nums= {1,1,1};
    cout << ob1.removeDuplicates(nums) << endl;

    return 0;
}

