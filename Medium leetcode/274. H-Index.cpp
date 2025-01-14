#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int hIndex(vector<int>& citations)
    {
        sort(citations.rbegin(), citations.rend());
        int h_index = 0;
        for (int i = 0; i < citations.size(); i++)
        {
            if (i + 1 <= citations[i])
            {
                h_index = i + 1;
            }
            else
            {
                break;
            }
        }
        return h_index;
    }
};

int main()
{
    Solution ob1;
    int n;
    cin >> n;
    vector<int> citations;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        citations.push_back(x);
    }
    cout << ob1.hIndex(citations) << endl;

    return 0;
}

/*
সাজানো ডেটা (Descending Order):

[3323, 2234, 444, 322, 233, 4]
H-Index বের করার ধাপ:

পেপার 1: 1 <= 3323 (ঠিক আছে, h_index = 1)
পেপার 2: 2 <= 2234 (ঠিক আছে, h_index = 2)
পেপার 3: 3 <= 444 (ঠিক আছে, h_index = 3)
পেপার 4: 4 <= 322 (ঠিক আছে, h_index = 4)
পেপার 5: 5 <= 233 (ঠিক আছে, h_index = 5)
পেপার 6: 6 <= 4 (ভুল, লুপ থামে)

*/
