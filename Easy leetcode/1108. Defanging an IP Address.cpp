#include <iostream>
using namespace std;

class Solution
{
public:
    string defangIPaddr(string address)
    {
        string s = "";
        for (int i = 0; i < address.size(); i++)
        {
            if (address[i] == '.')
            {
                s += "[.]";
            }
            else
            {
                s += address[i];
            }
        }
        return s;
    }
};

int main()
{
    Solution solution;
    string address;
    cin >> address;
    cout << solution.defangIPaddr(address) << endl;
    return 0;
}
