#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int sumOfDigits(int num)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int countBalls(int lowLimit, int highLimit)
    {
        unordered_map<int, int> box;
        int max_balls_in_any_box = 0;

        for (int i = lowLimit; i <= highLimit; i++)
        {
            int sum = sumOfDigits(i);
            box[sum]++;
            max_balls_in_any_box = max(max_balls_in_any_box, box[sum]);
        }

        return max_balls_in_any_box;
    }
};


/*#include <iostream>
#include <vector>
using namespace std;

int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int countBalls(int lowLimit, int highLimit)
{
    vector<int> box(100, 0);
    int max_balls_in_any_box = 0;

    for (int i = lowLimit; i <= highLimit; i++)
    {
        int sum = sumOfDigits(i);
        box[sum]++;

        max_balls_in_any_box = max(max_balls_in_any_box, box[sum]);
    }

    return max_balls_in_any_box;
}

int main()
{
    int lowLimit, highLimit;
    cin >> lowLimit >> highLimit;
    cout << countBalls(lowLimit, highLimit) << endl;
    return 0;
}

*/

/**
উদাহরণ:
ধরা যাক, lowLimit = 1 এবং highLimit = 10:

বল 1 যাবে বক্স 1-এ (1 এর যোগফল 1)
বল 2 যাবে বক্স 2-এ (2 এর যোগফল 2)
বল 3 যাবে বক্স 3-এ (3 এর যোগফল 3)
বল 4 যাবে বক্স 4-এ (4 এর যোগফল 4)
বল 5 যাবে বক্স 5-এ (5 এর যোগফল 5)
বল 6 যাবে বক্স 6-এ (6 এর যোগফল 6)
বল 7 যাবে বক্স 7-এ (7 এর যোগফল 7)
বল 8 যাবে বক্স 8-এ (8 এর যোগফল 8)
বল 9 যাবে বক্স 9-এ (9 এর যোগফল 9)
বল 10 যাবে বক্স 1-এ (1 + 0 = 1)
এখানে বক্স 1-এ দুটি বল (বল 1 এবং বল 10) রয়েছে, অন্য সব বক্সে ১টি করে বল রয়েছে। তাই, বক্স 1-এ সবচেয়ে বেশি বল রয়েছে (২টি)।
*/
