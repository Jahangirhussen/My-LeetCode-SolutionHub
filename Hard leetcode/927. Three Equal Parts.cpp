#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> threeEqualParts(vector<int>& arr)
    {
        int one = count(arr.begin(), arr.end(), 1);
        int n = arr.size();

        if (one == 0) return {0, n - 1};
        else  if (one % 3 != 0) return {-1, -1};

        int onesPerPart = one / 3;
        int first = -1, second = -1, third = -1, count = 0;

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == 1)
            {
                count++;
                if (count == 1) first = i;
                else if (count == onesPerPart + 1) second = i;
                else if (count == 2 * onesPerPart + 1) third = i;
            }
        }

        while (third < n && arr[first] == arr[second] && arr[second] == arr[third])
        {
            first++;
            second++;
            third++;
        }

        if (third == n)
        {
            return {first - 1, second};
        }

        return {-1, -1};
    }
};

int main()
{
    vector<int> arr = {1, 0, 1, 0, 1};

    Solution solution;
    vector<int> result = solution.threeEqualParts(arr);

    if (result == vector<int> {-1, -1})
    {
        cout << "Output: [-1, -1]" << endl;
    }
    else
    {
        cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl;
    }

    return 0;
}
