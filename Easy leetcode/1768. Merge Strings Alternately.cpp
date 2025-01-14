#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string ans = "";
        int n = max(word1.size(), word2.size());

        for (int i = 0; i < n; i++)
        {
            if (i < word1.size())
            {
                ans = ans + word1[i];
            }
            if (i < word2.size())
            {
                ans = ans + word2[i];
            }
        }

        return ans;
    }
};

int main()
{
    Solution solution;

    // Test cases
    cout << solution.mergeAlternately("abc", "pqr") << endl;  // Output: "apbqcr"
    cout << solution.mergeAlternately("ab", "pqrs") << endl; // Output: "apbqrs"
    cout << solution.mergeAlternately("abcd", "pq") << endl; // Output: "apbqcd"

    return 0;
}
