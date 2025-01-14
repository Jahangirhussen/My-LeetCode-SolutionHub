/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   :leetcode
Problem Name   :two-sum
Difficulty     :easy
Problem Link   :https://leetcode.com/problems/two-sum/
STATUS         : Accepted
Problem Logic  :
Problem Task   :
**/
#include <unordered_map>  // unordered_map লাইব্রেরি ইনক্লুড করা হচ্ছে, যা দ্রুত key-value পেয়ার রাখার জন্য ব্যবহৃত হয়
#include <vector>  // vector লাইব্রেরি ইনক্লুড করা হচ্ছে, যা ডাইনামিক অ্যারে হিসেবে ব্যবহৃত হয়
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> hashMap;  // একটি unordered_map তৈরি করা হচ্ছে, যেখানে key হচ্ছে সংখ্যা এবং value হচ্ছে ইনডেক্স

        // প্রতিটি উপাদানের জন্য লুপ শুরু হচ্ছে
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];  // complement বের করা হচ্ছে, যা target থেকে nums[i] বিয়োগ করার মাধ্যমে পাওয়া যায়

            // যদি complement ইতিমধ্যেই hashMap-এ থাকে, তবে সেটা আগেই দেখা হয়েছে
            if (hashMap.count(complement))    // hashMap.count(complement) চেক করে complement আছে কি না
            {
                return {hashMap[complement], i};  // complement পাওয়া গেলে, আগের ইনডেক্স এবং বর্তমান ইনডেক্স রিটার্ন করা হচ্ছে
            }

            // complement না পেলে, nums[i] এবং তার ইনডেক্স hashMap-এ সংরক্ষণ করা হচ্ছে
            hashMap[nums[i]] = i;
        }

        return {};  // যদি কোন মিল না পাওয়া যায়, তবে খালি ভেক্টর রিটার্ন করা হচ্ছে
    }
};

// উদাহরণ
// Solution sol;
// vector<int> result = sol.twoSum({2, 7, 11, 15}, 9); // আউটপুট: [0, 1]
// vector<int> result = sol.twoSum({3, 2, 4}, 6);       // আউটপুট: [1, 2]
// vector<int> result = sol.twoSum({3, 3}, 6);          // আউটপুট: [0, 1]
