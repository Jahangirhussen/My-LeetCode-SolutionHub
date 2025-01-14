#include <iostream>
#include <vector>
using namespace std;

int numIdenticalPairs(vector<int>& nums)
{
    vector<int> count(102, 0);
    int pair = 0;

    for (int  x  : nums)
    {
        count[ x ]++;
    }
    for (int n : count)
    {
        pair =pair  +  (n * (n - 1)) / 2;/// permutation
    }

    return pair;
}

int main()
{
    vector<int> nums = {1,2,3,1,1,3};
    cout << numIdenticalPairs(nums) << endl;
    return 0;
}
/*
ধরুন nums = {1, 2, 3, 1, 1, 3}। এই লুপের মাধ্যমে count[1], count[2], count[3] এর মান গুনতে থাকবে।
count[1] হবে 3 (কারণ 1 তিনবার এসেছে)
count[2] হবে 1
count[3] হবে 2

ধরুন count = {0, 3, 1, 2}। এর মানে: as like permutation
১ এসেছে ৩ বার → পেয়ার সংখ্যা হবে (3 * 2) / 2 = 3
২ এসেছে ১ বার → পেয়ার সংখ্যা হবে (1 * 0) / 2 = 0
৩ এসেছে ২ বার → পেয়ার সংখ্যা হবে (2 * 1) / 2 = 1
মোট পেয়ার সংখ্যা: 3 + 0 + 1 = 4

*/
