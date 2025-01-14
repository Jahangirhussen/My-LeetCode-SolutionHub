#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    bool checkOnesSegment(string s)
    {
        return s.find("01") == -1; /// o1 ace mane 11  01  11 mane 2ta segmnet,,,10101 ekane 1 01 0 1 1st e last e 2 ta 1 ace so
    }
};
int main()
{
    Solution ob1;
    string s;
    cin >> s;

    if (ob1.checkOnesSegment( s))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
/**
The code checks if s.find("01") returns -1, which means that the sequence "01" is not found in the string. In this case, it returns true. Otherwise, if the sequence "01" is found (such as in '1001' or '110101'), it returns false.

This logic ensures that there must be only one contiguous segment of '1's in the string. If the sequence "01" is found, it indicates that there are two separate segments (first '1', then '0', and then again '1'). This type of sequence means the '1's are not contiguous. However, if the sequence "01" is not found, it means the '1's can be contiguous, and the code will return true.


এখানে কোডটি চেক করছে, s.find("01") যদি -1 রিটার্ন করে, অর্থাৎ স্ট্রিংয়ের মধ্যে "01" সিকোয়েন্সটি খুঁজে না পাওয়া যায়, তখন true রিটার্ন হবে। অন্যথায়, যদি "01" সিকোয়েন্স পাওয়া যায় (যেমন '1001' বা '110101'), তখন false রিটার্ন হবে।

এই লজিকটি নিশ্চিত করে যে স্ট্রিংয়ে একটানা '1' এর সেগমেন্ট থাকতে হবে। যখন "01" সিকোয়েন্স খুঁজে পাওয়া যায়, তখন তা নির্দেশ করে যে স্ট্রিংয়ে দুটি আলাদা সেগমেন্ট রয়েছে (প্রথমে '1', তারপর '0', এবং পরে আবার '1')। এই ধরনের সিকোয়েন্স থাকার মানে হল যে '1' গুলি একটানা (contiguous) নেই। তবে, যদি "01" সিকোয়েন্স না থাকে, তখন '1' গুলি একটানা থাকতে পারে এবং কোডটি true রিটার্ন করবে।
*/
