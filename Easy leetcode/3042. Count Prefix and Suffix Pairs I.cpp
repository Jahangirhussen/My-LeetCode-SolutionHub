#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int countPrefixSuffixPairs(vector<string>& words)
    {
        int count = 0;
        int n = words.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (words[j].find(words[i]) == 0 &&  /// shurute paile index zero
                        words[j].rfind(words[i]) == words[j].size() - words[i].size() ///sesh a paile total j index theke i index kom
                    )
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution solution;

    vector<string> words1 = {"pay", "attention", "practice", "attend"};
    int result1 = solution.countPrefixSuffixPairs(words1);
    cout << "Input: words = [\"pay\", \"attention\", \"practice\", \"attend\"]" << endl;
    cout << "Output: " << result1 << endl;
    cout << "Explanation: No words in the array are both a prefix and suffix of another word." << endl;
    cout << endl;

    vector<string> words2 = {"leetcode", "leet", "loops", "leetloops"};
    int result2 = solution.countPrefixSuffixPairs(words2);
    cout << "Input: words = [\"leetcode\", \"leet\", \"loops\", \"leetloops\"]" << endl;
    cout << "Output: " << result2 << endl;
    cout << "Explanation: The word \"leetloops\" contains \"leet\" as both a prefix and a suffix." << endl;

    return 0;
}
