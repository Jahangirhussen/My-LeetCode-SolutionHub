#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool isValid(string word)
    {
        if (word.size() < 3) return false;

        int digit = 0, vowel = 0, consonant = 0;

        for (char ch : word)
        {
            if (isdigit(ch))
            {
                digit++;
            }
            else if (isalpha(ch))
            {
                if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                {
                    vowel++;
                }
                else
                {
                    consonant++;
                }
            }
            else
            {
                return false;
            }
        }

        return digit >= 0 && vowel > 0 && consonant > 0;
    }
};

int main()
{
    string word;
    cin >> word;

    Solution solution;

    if (solution.isValid(word))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
