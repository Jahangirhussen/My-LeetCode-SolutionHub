#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;

class Solution
{
public:
    string repeatLimitedString(string s, int repeatLimit)
    {
        vector<int> freq(26, 0);
        int n = s.size();
        for (int i = 0; i < n; ++i)
            freq[s[i] - 'a']++;

        priority_queue<pair<int,int>> maxheap;
        for (int i = 0; i < 26; ++i)
        {
            if (freq[i] > 0)
                maxheap.push(make_pair(i, freq[i]));
        }

        string ans;
        while (!maxheap.empty())
        {
            pair<int,int> curr = maxheap.top();
            maxheap.pop();

            char curr_char = 'a' + curr.first;
            int count = min(curr.second, repeatLimit);
            curr.second -= count;
            ans.append(count, curr_char);

            if (curr.second > 0)
            {
                if (maxheap.empty()) break; // can't insert the same char again

                pair<int,int> next = maxheap.top();
                maxheap.pop();

                char next_char = 'a' + next.first;
                ans.push_back(next_char);
                next.second--;

                if (next.second > 0)
                    maxheap.push(next);
                maxheap.push(curr);
            }
        }
        return ans;
    }
};

int main()
{
    Solution ob1;
    string s;
    int repeatLimit;
    cin >> s >> repeatLimit;

    cout << ob1.repeatLimitedString(s, repeatLimit) << endl;

    return 0;
}
