#include <iostream>
#include <string>
#include <sstream>  // For using stringstream
using namespace std;

class Solution
{
public:
    int countSegments(string s)
    {
        stringstream ss(s);
        string word;
        int count = 0;

        while (ss >> word)
        {
            count++;
            cout<<word<<"__";
        }

        return count;
    }
};

int main()
{
    Solution ob1;
    string s = "Hello, my name is John";

    cout << ob1.countSegments(s) << endl;  // Output: 5

    return 0;
}

