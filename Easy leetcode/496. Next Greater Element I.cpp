#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int, int> nextGreaterMap; // nums2-এ পরবর্তী বড় উপাদান
        stack<int> s; // স্ট্যাক

        // nums2-তে পরবর্তী বড় উপাদান বের করা
        for (int x : nums2)
        {
            // স্ট্যাকের উপরে থাকা উপাদানগুলির সাথে তুলনা করা
            while (!s.empty() && s.top() < x)
            {
                nextGreaterMap[s.top()] = x; // পরবর্তী বড় উপাদান সংরক্ষণ করা
                s.pop(); // স্ট্যাক থেকে বের করে দেয়া
            }
            s.push(x); // বর্তমান উপাদান স্ট্যাকে যোগ করা
        }

        // nums1-এ পরবর্তী বড় উপাদানগুলো বের করা
        vector<int> result;
        for (int num : nums1)
        {
            if (nextGreaterMap.find(num) != nextGreaterMap.end())
            {
                result.push_back(nextGreaterMap[num]);
            }
            else
            {
                result.push_back(-1); // পরবর্তী বড় উপাদান না থাকলে -1
            }
        }

        return result;
    }
};

















/*
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int, int> nextGreaterMap; // nums2-এ পরবর্তী বড় উপাদান
        vector<int> result; // আউটপুট ফলাফল

        // nums2-তে পরবর্তী বড় উপাদান বের করা
        for (int i = 0; i < nums2.size(); ++i)
        {
            // nums2[i] এর পরবর্তী বড় উপাদান খুঁজে নিচ্ছি
            for (int j = i + 1; j < nums2.size(); ++j)
            {
                if (nums2[j] > nums2[i])
                {
                    nextGreaterMap[nums2[i]] = nums2[j];
                    break; // প্রথম বড় সংখ্যা পেলে থেমে যাব
                }
            }
            // যদি বড় কিছু না পাওয়া যায়, -1 দিয়ে সেট করবো
            if (nextGreaterMap.find(nums2[i]) == nextGreaterMap.end())
            {
                nextGreaterMap[nums2[i]] = -1;
            }
        }

        // nums1-এ পরবর্তী বড় উপাদানগুলো বের করা
        for (int num : nums1)
        {
            result.push_back(nextGreaterMap[num]);
        }

        return result;
    }
};
*/
