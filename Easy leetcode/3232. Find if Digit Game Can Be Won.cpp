#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool canAliceWin(vector<int>& nums)
    {
        int Single = 0, Double = 0;
        for (int num : nums)
        {
            if (num < 10) Single += num;
            else Double += num;
        }
        return Single != Double ;
    }
};


/* class Solution
{
public:
    bool canAliceWin(vector<int>& nums)
    {
        int Single = 0, Double = 0;
        for (int num : nums)
        {
            if (num < 10) Single += num;
            else Double += num;
        }
        int total = Single + Double;
        return (Single > total - Single) || (Double > total - Double);
    }
};
*/

int main()
{
    Solution solution;

    vector<int> nums1 = {1, 2, 3, 4, 10};
    vector<int> nums2 = {1, 2, 3, 4, 5, 14};
    vector<int> nums3 = {5, 5, 5, 25};

    cout << (solution.canAliceWin(nums1) ? "true" : "false") << endl;
    cout << (solution.canAliceWin(nums2) ? "true" : "false") << endl;
    cout << (solution.canAliceWin(nums3) ? "true" : "false") << endl;

    return 0;
}

