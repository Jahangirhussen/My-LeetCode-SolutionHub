#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char>& s)
    {
        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

int main()
{
    Solution solution;

    // Test case 1
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    solution.reverseString(s1);
    for (char c : s1)
    {
        cout << c << " ";
    }
    cout << endl;  // Output: o l l e h

    // Test case 2
    vector<char> s2 = {'H', 'a', 'n', 'n', 'a', 'h'};
    solution.reverseString(s2);
    for (char c : s2)
    {
        cout << c << " ";
    }
    cout << endl;  // Output: h a n n a H

    return 0;
}

