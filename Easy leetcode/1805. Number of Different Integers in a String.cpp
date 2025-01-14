#include <iostream>
#include <unordered_set>
#include <string>
#include <cctype>
using namespace std;
class Solution
{
public:
    int numDifferentIntegers(string word)
    {
        unordered_set<string> uniqueNumbers;
        string current_num = "";
        int i = 0;

        while (i < word.size())
        {
            if (isdigit(word[i]))
            {
                current_num += word[i];
            }
            else
            {
                if (!current_num.empty())
                {
                    while (current_num.size() > 1 && current_num[0] == '0')
                    {
                        current_num.erase(0, 1);///erase(0, 1) means removing 1 character from the current_num string starting at index 0.
                    }
                    uniqueNumbers.insert(current_num);
                    current_num = "";
                }
            }
            i++;
        }

        if (!current_num.empty())
        {
            while (current_num.size() > 1 && current_num[0] == '0')
            {
                current_num.erase(0, 1);
            }
            uniqueNumbers.insert(current_num);
        }

        return uniqueNumbers.size();
    }
};

int main()
{
    Solution ob1;
    string word = "leet1234code234";

    cout << ob1.numDifferentIntegers(word) << endl;

    return 0;
}
