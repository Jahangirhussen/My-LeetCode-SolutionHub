#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string& s)
    {
        int n = s.size();
        int sub_size = 0;

        for (int i = 0; i < n; i++)
        {
            vector<bool> visited(256, false);

            for (int j = i; j < n; j++)
            {
                if (visited[s[j]] == true)
                    break;

                else
                {
                    sub_size = max(sub_size, j - i + 1);
                    visited[s[j]] = true;
                }
            }
        }
        return sub_size;
    }
};

int main()
{
    Solution ob1;
    string s;
    cin >> s;
    cout << ob1.lengthOfLongestSubstring(s) << endl;

    return 0;
}
/*
# Intuition
The task is to find the length of the longest substring without repeating characters. A brute-force approach would involve checking all substrings, but a sliding window approach is more efficient.

# Approach
Use two pointers to define a window and track the characters using a visited array.
Expand the window by adding characters until a duplicate is found.
When a duplicate is found, move the start pointer to avoid it and continue.
Update the result whenever a larger substring is found.

# Complexity
Time complexity: O(n^2)
Space complexity: O(n)

# অন্তর্দৃষ্টি
এই সমস্যায় আমাদেরকে এমন একটি স্ট্রিং দেওয়া হয়েছে, যার মধ্যে পুনরাবৃত্তি ছাড়া সবচেয়ে বড় সাবস্ট্রিং এর দৈর্ঘ্য বের করতে হবে। ব্রুট ফোর্স পদ্ধতির বদলে, স্লাইডিং উইন্ডো পদ্ধতি বেশি কার্যকর।

# পদ্ধতি
দুটি পয়েন্টার ব্যবহার করে একটি উইন্ডো তৈরি করা এবং একটি visited অ্যারে দিয়ে চরিত্রগুলো ট্র্যাক করা।
উইন্ডো প্রসারিত করা যতক্ষণ না একটি পুনরাবৃত্তি চরিত্র পাওয়া যায়।
পুনরাবৃত্তি চরিত্র পেলে, স্টার্ট পয়েন্টারটি সরিয়ে দেয়া এবং প্রসেস চালিয়ে যাওয়া।
প্রতিবার বড় সাবস্ট্রিং পাওয়া গেলে ফলাফল আপডেট করা।

# জটিলতা
সময় জটিলতা: O(n^2)
স্থান জটিলতা: O(n)
*/
