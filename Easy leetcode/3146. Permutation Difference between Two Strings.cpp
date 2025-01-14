#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int findPermutationDifference(string s, string t)
    {
        vector<pair<char,int>>ss,tt;
        for(int i=0; i<s.size(); i++)
        {
            ss.push_back(make_pair(s[i], i));
            tt.push_back(make_pair(t[i], i));
        }
        sort(ss.begin(),ss.end());
        sort(tt.begin(),tt.end());
        int sum =0;
        for(int i=0; i<s.size(); i++)
        {
           sum = sum + abs(ss[i].second - tt[i].second);
        }
return sum;
    }
};

int main()
{


    Solution ob1;
    string s,t;
    cin>>s>>t;
    cout << ob1.findPermutationDifference( s,  t) << endl;

    return 0;
}

