#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        sort(s.begin(),s.end(),greater<char>() );
        int one=0,zero=0;
        for(auto x:s)
        {
            if(x=='1')one++;
            else break;
        }
        swap(s[one-1], s[s.size()-1]);
        return  s;
    }
};


int main()
{


    Solution ob1;
    string s;
    cin>>s;
    cout << ob1.maximumOddBinaryNumber( s) << endl;

    return 0;
}

/// 11111000  swap(s[one-1]=, s[s.size()-1])

// 10000





