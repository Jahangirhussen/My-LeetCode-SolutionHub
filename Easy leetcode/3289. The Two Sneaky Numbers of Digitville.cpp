#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> getSneakyNumbers(vector<int>& nums)
{
    unordered_map<int, int> mp;
    for (auto x : nums)
        mp[x]++;

    vector<int> s;
    for (auto x : mp)
    {
        if (x.second > 1)
        {
            s.push_back(x.first);
        }
    }
    sort(s.begin(), s.end());
    return s;
}

int main()
{
    vector<int> nums = {7, 1, 5, 4, 3, 4, 6, 0, 9, 5, 8, 2};

    vector<int> sneakyNumbers = getSneakyNumbers(nums);

    cout << "Sneaky Numbers: ";
    for (auto i : sneakyNumbers)
        cout << i << " ";
    cout << endl;

    return 0;
}
