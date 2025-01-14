#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution
{
public:
    bool isGoodArray(vector<int>& nums)
    {
        int g = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            g = gcd(g, nums[i]);
            if (g == 1)
            {
                return true;
            }
        }
        return g == 1; // g==1 hole true jabe na hole flase jabe
    }
};


int main()
{
    Solution sol;
    vector<int> nums = {3, 6, 9};
    if (sol.isGoodArray(nums))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}


/*
উদাহরণ:
ধরা যাক অ্যারে [3, 6, 9]:

প্রথমে g = 3।
এরপর gcd(3, 6) = 3। g এখনও 3।
এরপর gcd(3, 9) = 3। g এখনও 3।
এখানে গুণফল ৩, তাই অ্যারেটি "ভাল" নয় এবং ফলাফল হবে False।

অন্যদিকে, যদি অ্যারে [3, 5, 7] থাকে:

প্রথমে g = 3।
তারপর gcd(3, 5) = 1।
গুণফল ১, তাই অ্যারেটি "ভাল" এবং ফলাফল হবে True।
কোডের আউটপুট:
যদি গুণফল ১ হয়: True
যদি গুণফল ১ না হয়: False
*/
