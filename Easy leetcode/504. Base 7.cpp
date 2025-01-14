class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

        bool isNegative = num < 0;
        num = abs(num);

        string result = "";

        while (num) {
            result = to_string(num % 7) + result;
            num /= 7;
        }

        if (isNegative) result = "-" + result;

        return result;
    }
};
