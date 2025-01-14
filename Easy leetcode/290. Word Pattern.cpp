#include <iostream>
#include <unordered_map>
#include <sstream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        stringstream ss(s);
        string x;
        vector<string> words;
        while (ss >> x)
        {
            words.push_back(x);
        }

        if (pattern.size() != words.size())
        {
            return false;
        }

        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        for (int i = 0; i < pattern.size(); ++i)
        {
            char c = pattern[i];
            string w = words[i];

            if (   (charToWord.count(c) && charToWord[c] != w) || (wordToChar.count(w) && wordToChar[w] != c)   )
            {
                return false;
            }


            charToWord[c] = w;
            wordToChar[w] = c;
        }

        return true;
    }
};

int main()
{
    Solution solution;

    string pattern = "abba";
    string s = "dog cat cat dog";

    bool result = solution.wordPattern(pattern, s);
    cout << "Result: " << (result ? "true" : "false") << endl;

    return 0;
}

