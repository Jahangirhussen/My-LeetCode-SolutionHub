#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> mp;

        for (char x : magazine)
        {
            mp[x]++;
        }
        for (char x : ransomNote)
        {
            if (mp[x] > 0)
            {
                mp[x]--;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};


int main()
{
    Solution solution;
    string ransomNote = "aab", magazine = "aaaab";///sort kora but eta tulona korle flase retrun dibe  r[2]!=m[2].ager code hisebe,,jnnnno count map use korte hobe

    if (solution.canConstruct(ransomNote, magazine))
    {
        cout << "Output: true" << endl;
    }
    else
    {
        cout << "Output: false" << endl;
    }



    ransomNote = "aa", magazine = "ab";

    if (solution.canConstruct(ransomNote, magazine))
    {
        cout << "Output: true" << endl;
    }
    else
    {
        cout << "Output: false" << endl;
    }



    ransomNote = "aa", magazine = "aab";

    if (solution.canConstruct(ransomNote, magazine))
    {
        cout << "Output: true" << endl;
    }
    else
    {
        cout << "Output: false" << endl;
    }

    return 0;
}
