#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool canJump(vector<int>& nums)
    {
        int max_reach = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > max_reach) return false; // লাফের সীমার বাইরে গেলে শেষ ইন্ডেক্সে যাওয়া সম্ভব নয়।
            max_reach = max(max_reach, i + nums[i]); // সর্বোচ্চ দূরত্ব আপডেট করি।
        }
        return true;
    }
};
int main()
{
    Solution ob1;
    vector<int> nums = { 3,2,1,0,4};
    cout << (ob1.canJump(nums) ? "true" : "false") << endl;
    return 0;
}

/*
ধাপে ধাপে বুঝিয়ে দিচ্ছি:
১. maxReach কেন লাগছে?
maxReach হচ্ছে এমন একটি ভেরিয়েবল যা ট্র্যাক রাখে যে আমরা সর্বোচ্চ কোন ইন্ডেক্স পর্যন্ত পৌঁছাতে পারি।

উদাহরণ:
nums = [2, 3, 1, 1, 4]

শুরুতে maxReach = 0।
ইন্ডেক্স ০ থেকে আমরা 2 ধাপ লাফ দিতে পারি। তাই maxReach = 0 + 2 = 2।

২. i > maxReach চেক করার কারণ?
আমরা যদি এমন একটি ইন্ডেক্সে পৌঁছে যাই যা আমাদের maxReach এর বাইরে (অর্থাৎ লাফ দিয়ে সেখানে যাওয়া সম্ভব নয়), তখন আমাদের উত্তর false।

উদাহরণ:
nums = [3, 2, 1, 0, 4]

ইন্ডেক্স ৩ পর্যন্ত পৌঁছানো সম্ভব, কিন্তু ইন্ডেক্স ৪-এ পৌঁছানোর জন্য লাফ নেই (কারণ ইন্ডেক্স ৩-এর মান 0)। তাই i > maxReach।

৩. maxReach = max(maxReach, i + nums[i])
প্রত্যেক ইন্ডেক্সে, আমরা সর্বোচ্চ দূরত্ব আপডেট করি:

i + nums[i] হলো সেই ইন্ডেক্স থেকে সর্বোচ্চ লাফ দিয়ে পৌঁছানোর দূরত্ব।
max(maxReach, i + nums[i]) দিয়ে আমরা চেক করি আগের maxReach বড়, নাকি নতুন লাফের ফলাফল বড়।

উদাহরণ সহ ব্যাখ্যা:
উদাহরণ ১:
ইনপুট: nums = [2, 3, 1, 1, 4]
প্রক্রিয়া:

ইন্ডেক্স ০ → maxReach = 0 + 2 = 2
ইন্ডেক্স ১ → maxReach = max(2, 1 + 3) = 4
ইন্ডেক্স ২ → maxReach = max(4, 2 + 1) = 4
ইন্ডেক্স ৩ → maxReach = max(4, 3 + 1) = 4
ইন্ডেক্স ৪ → আমরা শেষ ইন্ডেক্সে পৌঁছে গেছি। আউটপুট: true।

উদাহরণ ২:
ইনপুট: nums = [3, 2, 1, 0, 4]
প্রক্রিয়া:

ইন্ডেক্স ০ → maxReach = 0 + 3 = 3
ইন্ডেক্স ১ → maxReach = max(3, 1 + 2) = 3
ইন্ডেক্স ২ → maxReach = max(3, 2 + 1) = 3
ইন্ডেক্স ৩ → maxReach = max(3, 3 + 0) = 3
ইন্ডেক্স ৪ → ইন্ডেক্স ৪ তে পৌঁছানো সম্ভব নয় কারণ i > maxReach। আউটপুট: false।
*/
