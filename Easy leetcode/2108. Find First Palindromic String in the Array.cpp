#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    string firstPalindrome(vector<string>& words)
    {
        for (const string& word : words)
        {
            if (isPalindrome(word)) return word;
        }
        return "";
    }

private:
    bool isPalindrome(const string& s)
    {
        size_t n = s.size();
        for (size_t i = 0; i < n / 2; ++i)
        {
            if (s[i] != s[n - i - 1]) return false;
        }
        return true;
    }
};

int main()
{
    Solution solution;
    vector<string> words1 = {"abc", "car", "ada", "racecar", "cool"};
    vector<string> words2 = {"notapalindrome", "racecar"};
    vector<string> words3 = {"def", "ghi"};

    cout << solution.firstPalindrome(words1) << endl; // Output: "ada"
    cout << solution.firstPalindrome(words2) << endl; // Output: "racecar"
    cout << solution.firstPalindrome(words3) << endl; // Output: ""

    return 0;
}
