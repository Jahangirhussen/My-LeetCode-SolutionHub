#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.empty())
        {
            return 0;
        }

        int index = haystack.find(needle);

        // If needle is found, return the index; otherwise return -1
        if (index != string::npos)
        {
            return index;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    Solution ob1;
    string haystack = "sadbutsad", needle = "sad";
    cout << ob1.strStr(haystack, needle) << endl;

    return 0;
}
