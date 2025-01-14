#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2)
    {
        vector<int> maxFreq(26, 0);

        for (const string& word : words2)
        {
            vector<int> freq(26, 0);
            for (char x : word)
            {
                freq[x - 'a']++;
            }
            for (int i = 0; i < 26; ++i)
            {
                maxFreq[i] = max(maxFreq[i], freq[i]);
            }
        }

        vector<string> result;

        for (const string& word : words1)
        {
            vector<int> freq(26, 0);
            for (char x : word)
            {
                freq[x - 'a']++;
            }
            bool isUniversal = true;
            for (int i = 0; i < 26; ++i)
            {
                if (freq[i] < maxFreq[i])
                {
                    isUniversal = false;
                    break;
                }
            }
            if (isUniversal)
            {
                result.push_back(word);
            }
        }

        return result;
    }
};

int main()
{
    Solution solution;
    vector<string> words1 = {"amazon", "apple", "facebook", "google", "leetcode"};
    vector<string> words2 = {"e", "o"};

    vector<string> result = solution.wordSubsets(words1, words2);

    cout << "Universal words are: ";
    for (const string& word : result)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}

