#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxChunksToSorted(vector<int>& arr)
    {
        int max_val = 0; // বর্তমান পর্যন্ত সর্বোচ্চ মান রাখার জন্য ভেরিয়েবল
        int chunks = 0;  // চাঙ্কের সংখ্যা গণনার জন্য ভেরিয়েবল

        for (int i = 0; i < arr.size(); i++)
        {
            max_val = max(max_val, arr[i]); // সর্বোচ্চ মান আপডেট করা
            if (max_val == i) // যদি সর্বোচ্চ মান বর্তমান ইন্ডেক্সের সমান হয়
            {
                chunks++; // নতুন চাঙ্ক তৈরি
            }
        }
        return chunks; // চাঙ্কের সংখ্যা রিটার্ন
    }
};

int main()
{
    Solution ob1;
    int n;
    cin >> n;
    vector<int> arr(n); // অ্যারের জন্য স্থান বরাদ্দ
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // ইনপুট নেওয়া
    }
    cout << ob1.maxChunksToSorted(arr) << endl; // ফলাফল আউটপুট

    return 0;
}
/**

অ্যারেটি: [1, 0, 2, 3, 4]

Iteration 1: i = 0
arr[0] = 1
max_val = max(0, 1) = 1 (এখন পর্যন্ত সর্বোচ্চ মান 1)
max_val != i (কারণ 1 != 0)
তাই, এখন চাঙ্ক তৈরি করা সম্ভব নয়।

Iteration 2: i = 1
arr[1] = 0
max_val = max(1, 0) = 1 (এখন পর্যন্ত সর্বোচ্চ মান 1)
max_val == i (কারণ 1 == 1)
চাঙ্ক ১: [1, 0] → এটি একটি চাঙ্ক।

Iteration 3: i = 2
arr[2] = 2
max_val = max(1, 2) = 2 (এখন পর্যন্ত সর্বোচ্চ মান 2)
max_val == i (কারণ 2 == 2)
চাঙ্ক ২: [2] → এটি একটি চাঙ্ক।

Iteration 4: i = 3
arr[3] = 3
max_val = max(2, 3) = 3 (এখন পর্যন্ত সর্বোচ্চ মান 3)
max_val == i (কারণ 3 == 3)
চাঙ্ক ৩: [3] → এটি একটি চাঙ্ক।

Iteration 5: i = 4
arr[4] = 4
max_val = max(3, 4) = 4 (এখন পর্যন্ত সর্বোচ্চ মান 4)
max_val == i (কারণ 4 == 4)
চাঙ্ক ৪: [4] → এটি একটি চাঙ্ক।

*/
/**
অ্যারেটি: [4, 3, 2, 1, 0]

Iteration 1: i = 0
arr[0] = 4
max_val = max(0, 4) = 4 (এখন পর্যন্ত সর্বোচ্চ মান 4)
max_val != i (কারণ 4 != 0)
তাই, এখন চাঙ্ক তৈরি করা সম্ভব নয়।

Iteration 2: i = 1
arr[1] = 3
max_val = max(4, 3) = 4 (এখন পর্যন্ত সর্বোচ্চ মান 4)
max_val != i (কারণ 4 != 1)
তাই, এখন চাঙ্ক তৈরি করা সম্ভব নয়।

Iteration 3: i = 2
arr[2] = 2
max_val = max(4, 2) = 4 (এখন পর্যন্ত সর্বোচ্চ মান 4)
max_val != i (কারণ 4 != 2)
তাই, এখন চাঙ্ক তৈরি করা সম্ভব নয়।

Iteration 4: i = 3
arr[3] = 1
max_val = max(4, 1) = 4 (এখন পর্যন্ত সর্বোচ্চ মান 4)
max_val != i (কারণ 4 != 3)
তাই, এখন চাঙ্ক তৈরি করা সম্ভব নয়।

Iteration 5: i = 4
arr[4] = 0
max_val = max(4, 0) = 4 (এখন পর্যন্ত সর্বোচ্চ মান 4)
max_val == i (কারণ 4 == 4)
চাঙ্ক ১: [4, 3, 2, 1, 0] → পুরো অ্যারেটি একটি চাঙ্ক।
*/
/**
আমরা অ্যারের প্রতিটি ইন্ডেক্স পর্যবেক্ষণ করবো এবং max_val আপডেট করবো।
arr = [1, 0, 2, 3, 4]
Index	Element	max_val	   max_val == i?	Chunk Count
0	     1	      1	        ❌ (1 ≠ 0)	        0
1        0	      1	        ✔ (1 = 1)       	1
2	     2	      2	        ✔ (2 = 2)       	2
3	     3	      3         ✔ (3 = 3)       	3
4	     4	      4	        ✔ (4 = 4)       	4
*/
