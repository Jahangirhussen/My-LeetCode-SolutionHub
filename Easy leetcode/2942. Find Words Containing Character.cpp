#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> findWordsContaining(vector<string>& words, char x)
    {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++)
        {
            if (words[i].find(x) != string::npos) // Check if x is found
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main()
{
    Solution solution;
    vector<string> words = {"apple", "banana", "cherry", "date"};
    char x = 'a';

    // Call the function and get the result
    vector<int> ans = solution.findWordsContaining(words, x);

    // Print the indices of words containing the character 'x'
    for (const int& index : ans)
    {
        cout << index << " "; // Print index, not word
    }
    cout << endl;

    return 0;
}
