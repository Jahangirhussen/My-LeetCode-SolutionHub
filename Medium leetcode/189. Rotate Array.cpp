#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void rotate(vector<int>& nums, int k)
    {

        int n = nums.size();
        k = k % n;
        if (k == 0) return;

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin() + k, nums.end());
    }
};

int main()
{
    Solution ob1;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    ob1.rotate(nums, k);

    cout << "Rotated Array: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

/*
	If you want to rotate the array 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 by k = 4, let's see how it works.

Input:
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
Now, we need to rotate this array by 4 positions to the right.

Step 1: Reverse the entire array
First, reverse the entire array:
11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
Now, the array is fully reversed.
Step 2: Reverse the first k = 4 elements
Now, reverse the first 4 elements (11, 10, 9, 8):
8, 9, 10, 11, 7, 6, 5, 4, 3, 2, 1
Now, the first 4 elements are reversed.
Step 3: Reverse the remaining n-k = 7 elements
Now, reverse the remaining 7 elements (7, 6, 5, 4, 3, 2, 1):
8, 9, 10, 11, 1, 2, 3, 4, 5, 6, 7
Now, the array is correctly rotated. The elements 7, 8, 9, 10, 11 have moved to the back, and the remaining elements 1, 2, 3, 4, 5, 6 have moved to the front.


তুমি যদি অ্যারে 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 রোটেট করতে চাও k = 4 হিসেবে, তাহলে কিভাবে কাজ করবে তা দেখে নিই।
ইনপুট:
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
এখন, আমাদের কাজ হলো এই অ্যারেটি ৪টি ডান দিকে রোটেট করা।
ধাপ ১: পুরো অ্যারে রিভার্স করা
প্রথমে পুরো অ্যারেটি রিভার্স করি:
11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
এখন পুরো অ্যারেটি উল্টে গেছে।
ধাপ ২: প্রথম k = 4 এলিমেন্ট রিভার্স করা
এখন, প্রথম ৪টি এলিমেন্ট (এখানে ১১, ১০, ৯, ৮) রিভার্স করি:
8, 9, 10, 11, 7, 6, 5, 4, 3, 2, 1
এখন, প্রথম ৪টি এলিমেন্ট রিভার্স হয়ে গেছে।
ধাপ ৩: বাকি n-k = 7 এলিমেন্ট রিভার্স করা
এখন, বাকি ৭টি এলিমেন্ট (এখানে ৭, ৬, ৫, ৪, ৩, ২, ১) রিভার্স করি:
8, 9, 10, 11, 1, 2, 3, 4, 5, 6, 7
এখন অ্যারেটি সঠিকভাবে রোটেটেড হয়েছে। এখানে 7, 8, 9, 10, 11 পেছনে চলে গেছে এবং বাকি 1, 2, 3, 4, 5, 6 সামনে চলে এসেছে।
*/
