#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countCompleteDayPairs(vector<int>& hours)
    {
        int ans = 0;

        for (int i = 0; i < hours.size(); i++)
        {
            for (int j = i + 1; j < hours.size(); j++)
            {
                int sum = hours[i] + hours[j];

                if (sum % 24 == 0)
                {
                    ans++;
                }
            }
        }

        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> hours = {12, 12, 30, 24, 24};

    cout << sol.countCompleteDayPairs(hours) << endl;

    return 0;
}
/*
ইনপুট:
hours = [5, 19, 7, 17, 8]

ব্যাখ্যা:

(5 + 19) = 24 → এটি একটি পূর্ণ দিন (24 ঘণ্টা)।
(7 + 17) = 24 → এটি একটি পূর্ণ দিন (24 ঘণ্টা)।
(5 + 7) = 12 → এটি পূর্ণ দিনের যোগফল নয়।
(19 + 17) = 36 → এটি পূর্ণ দিনের যোগফল নয়।
(19 + 8) = 27 → এটি পূর্ণ দিনের যোগফল নয়।
ফলস্বরূপ: মোট 2টি পেয়ার রয়েছে যা একটি পূর্ণ দিন গঠন করে।
আউটপুট:
2
*/
