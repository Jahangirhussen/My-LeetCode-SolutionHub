#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string categorizeBox(int length, int width, int height, int mass)
    {
        long long volume = (long long)length * width * height;
        bool is_bulky = (length >= 10000 || width >= 10000 || height >= 10000 || volume >= 1000000000);
        bool is_heavy = mass >= 100;

        if (is_bulky && is_heavy)
        {
            return "Both";
        }
        else if (is_bulky)
        {
            return "Bulky";
        }
        else if (is_heavy)
        {
            return "Heavy";
        }
        else
        {
            return "Neither";
        }
    }
};

int main()
{
    Solution sol;
    int length, width, height, mass;
    cin >> length >> width >> height >> mass;
    cout << sol.categorizeBox(length, width, height, mass) << endl;
    return 0;
}

