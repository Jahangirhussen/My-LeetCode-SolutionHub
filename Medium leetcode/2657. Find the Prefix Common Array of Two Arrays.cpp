#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B)
    {
        int n = A.size();
        vector<int> mp(n+1, 0), c(n);
        int count = 0;

        for (int i = 0; i < n; i++)
        {

            mp[A[i]]++; // Increment count for the current element in A
            if (mp[A[i]] == 2) count++; // ==2 means the element exists in both A and B. This happens because the element is first seen in B, then in A.


            mp[B[i]]++;// Increment count for the current element in B
            if (mp[B[i]] == 2) count++; // ==2 means the element exists in both A and B. This happens because the element is first seen in A, then in B.

            c[i] = count;
        }

        return c;
    }
};
/*
class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B)
    {
        int n = A.size();
        vector<int> C(n, 0);
        unordered_set<int> A_seen, B_seen;

        for (int i = 0; i < n; ++i)
        {
            A_seen.insert(A[i]);
            B_seen.insert(B[i]);

            int common = 0;

            for (int x : A_seen)
            {
                if (B_seen.count(x))
                {
                    common ++;
                }
            }

            C[i] = common;
        }

        return C;
    }
};
*/
int main()
{
    Solution solution;

    vector<int> A = {1, 3, 2, 4};
    vector<int> B = {3, 1, 2, 4};

    vector<int> result = solution.findThePrefixCommonArray(A, B);

    cout << "Prefix Common Array: ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

