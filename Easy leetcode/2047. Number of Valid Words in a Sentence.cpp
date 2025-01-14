#include <iostream>
#include <sstream>
#include <cctype>
#include <string>
using namespace std;

class Solution
{
public:
    bool isValidWord(string word)
    {
        int hyphenCount = 0;
        int punctuationCount = 0;
        int n = word.length();

        for (int i = 0; i < n; i++)
        {
            char x = word[i];

            if (x == '-')
            {
                hyphenCount++;
                if (i == 0 || i == n - 1 || !islower(word[i - 1]) || !islower(word[i + 1]))
                {
                    return false;
                }
            }
            else if (x == '!' || x == '.' || x == ',')
            {
                punctuationCount++;
                if (punctuationCount > 1 || (i != n - 1 && punctuationCount == 1))
                {
                    return false;
                }
            }
            else if (isdigit(x))
            {
                return false;
            }
            else if (!islower(x) && x != '-' && x != '!' && x != '.' && x != ',')
            {
                return false;
            }
        }

        return (hyphenCount <= 1 && punctuationCount <= 1);
    }

    int countValidWords(string sentence)
    {
        stringstream ss(sentence);
        string token;
        int count = 0;

        while (ss >> token)
        {
            if (isValidWord(token))
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
    string sentence;
    getline(cin, sentence);
    cout << solution.countValidWords(sentence) << endl;
    return 0;
}
