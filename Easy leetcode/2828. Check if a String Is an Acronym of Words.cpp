#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    bool isAcronym(vector<string>& words, string s)
    {
        string acronym = "";
        for (const string& x : words)
        {
            acronym = acronym + x[0];
        }
        return acronym == s;
    }
};

int main()
{
    Solution sol;

    vector<string> words1 = {"alice", "bob", "charlie"};
    string s1 = "abc";
    cout << (sol.isAcronym(words1, s1) ? "true" : "false") << endl;

    vector<string> words2 = {"an", "apple"};
    string s2 = "a";
    cout << (sol.isAcronym(words2, s2) ? "true" : "false") << endl;

    vector<string> words3 = {"never", "gonna", "give", "up", "on", "you"};
    string s3 = "ngguoy";
    cout << (sol.isAcronym(words3, s3) ? "true" : "false") << endl;

    return 0;
}
