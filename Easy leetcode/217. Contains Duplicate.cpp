#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    set<int> s(nums.begin(), nums.end());  // set ডুপ্লিকেট উপাদান অনুমোদন করে না, কিন্তু vector ডুপ্লিকেট উপাদান রাখতে পারে
    return s.size() < nums.size();  // যদি set এর সাইজ vector এর সাইজের চেয়ে কম হয়, তাহলে ডুপ্লিকেট রয়েছে
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    cout << (containsDuplicate(nums) ? "true" : "false") << endl;
    return 0;
}
