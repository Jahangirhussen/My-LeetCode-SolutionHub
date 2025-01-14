#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries)
    {
        string vowels = "aeiou";
        int n = words.size();
        vector<int> prefix(n + 1, 0);

        for (int i = 0; i < n; ++i)
        {
            string w = words[i];
            if (vowels.find(w[0]) != string::npos && vowels.find(w[w.size() - 1]) != string::npos)
            {
                prefix[i + 1] = prefix[i] + 1;
            }
            else
            {
                prefix[i + 1] = prefix[i] + 0;
            }
        }

        vector<int> ans;
        for (auto& q : queries)
        {
            int li = q[0], ri = q[1];
            ans.push_back(prefix[ri + 1] - prefix[li]);
        }

        return ans;
    }
};

int main()
{
    Solution ob1;

    vector<string> words1 = {"aba", "bcb", "ece", "aa", "e"};
    vector<vector<int>> queries1 = {{0, 2}, {1, 4}, {1, 1}};

    vector<int> result1 = ob1.vowelStrings(words1, queries1);
    for (int r : result1)
    {
        cout << r << " ";
    }
    cout << endl;

    vector<string> words2 = {"a", "e", "i"};
    vector<vector<int>> queries2 = {{0, 2}, {0, 1}, {2, 2}};

    vector<int> result2 = ob1.vowelStrings(words2, queries2);
    for (int r : result2)
    {
        cout << r << " ";
    }
    cout << endl;

    return 0;
}

/*
class Solution
{
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries)
    {
        vector<int> ans;
        string vowels = "aeiou";

        for (auto q : queries)
        {
            int li = q[0], ri = q[1];
            int count = 0;

            for (int i = li; i <= ri; ++i)
            {
                string w = words[i];
                if (vowels.find(w[0]) != string::npos && vowels.find(w[w.size() - 1]) != string::npos)
                {
                    count++;
                }
            }

            ans.push_back(count);
        }

        return ans;
    }
};
*/
