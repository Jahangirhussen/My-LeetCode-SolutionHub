#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    vector<int> diStringMatch(string s)
    {
        vector<int> result;
        int n = s.length();
        int low = 0, high = n;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'I')
            {
                result.push_back(low);
                low++;
            }
            else
            {
                result.push_back(high);
                high--;
            }
        }

        result.push_back(low);

        return result;
    }
};

int main()
{
    Solution solution;

    string s = "IDID";  // You can change this input to test other cases
    vector<int> result = solution.diStringMatch(s);

    // Print the result
    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}
