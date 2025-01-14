#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int prefixCount(vector<string>& words, string pref)
    {
        int count = 0;
        for (const string& x : words)
        {
            if (x.substr(0, pref.size()) == pref)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution solution;

    // Example 1
    vector<string> words1 = {"pay", "attention", "practice", "attend"};
    string pref1 = "at";
    cout << "Example 1 Output: " << solution.prefixCount(words1, pref1) << endl; // Output: 2

    // Example 2
    vector<string> words2 = {"leetcode", "win", "loops", "success"};
    string pref2 = "code";
    cout << "Example 2 Output: " << solution.prefixCount(words2, pref2) << endl; // Output: 0

    return 0;
}
