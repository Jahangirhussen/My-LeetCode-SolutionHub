#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> decrypt(vector<int>& code, int k)
    {
        int n = code.size();
        vector<int> result(n, 0);

        if (k == 0)
        {
            return result;
        }


        if (k > 0)
        {
            for (int i = 0; i < n; ++i)
            {
                int sum = 0;
                for (int j = 1; j <= k; ++j)
                {
                    sum = sum + code[(i + j) % n];
                }
                result[i] = sum;
            }
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                int sum = 0;
                for (int j = 1; j <= -k; ++j)
                {
                    sum = sum + code[(i - j + n) % n];
                }
                result[i] = sum;
            }
        }

        return result;
    }
};
int main()
{
    Solution sol;

    vector<int> code1 = {5, 7, 1, 4};
    int k1 = 3;
    vector<int> result1 = sol.decrypt(code1, k1);
    cout << "Decrypted code for k1: ";
    for (int num : result1) cout << num << " ";
    cout << endl;



    vector<int> code2 = {1, 2, 3, 4};
    int k2 = 0;
    vector<int> result2 = sol.decrypt(code2, k2);
    cout << "Decrypted code for k2: ";
    for (int num : result2) cout << num << " ";
    cout << endl;



    vector<int> code3 = {2, 4, 9, 3};
    int k3 = -2;
    vector<int> result3 = sol.decrypt(code3, k3);
    cout << "Decrypted code for k3: ";
    for (int num : result3) cout << num << " ";
    cout << endl;

    return 0;
}

