#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        stringstream ss(s);
        string word;
        string rev = "";

        while (ss >> word)
        {
            if (!rev.empty()) rev += " ";
            reverse(word.begin(), word.end());
            rev += word;
        }

        return rev;
    }
};


int main()
{
    Solution solution;
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    string result = solution.reverseWords(s);
    cout << "Reversed words: " << result << endl;
    return 0;
}

