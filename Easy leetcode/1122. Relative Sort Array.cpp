#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)
    {
        vector<int> yes, no;

        for (int x : arr1)
        {
            if (find(arr2.begin(), arr2.end(), x) != arr2.end())
            {
                yes.push_back(x);
            }
            else
            {
                no.push_back(x);
            }
        }

        vector<int> ans;
        for (int x : arr2)
        {
            for (int i = 0; i < yes.size(); i++)
            {
                if (yes[i] == x)
                {
                    ans.push_back(yes[i]);
                }
            }
        }

        sort(no.begin(), no.end());

        ans.insert(ans.end(), no.begin(), no.end());

        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    vector<int> arr2 = {2, 1, 4, 3, 9, 6};
    vector<int> ans = sol.relativeSortArray(arr1, arr2);

    for (int x : ans)
    {
        cout << x << " ";
    }
    return 0;
}
