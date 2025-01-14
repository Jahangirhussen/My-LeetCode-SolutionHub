class Solution {
    public int romanToInt(String s) {
        int sum = 0;
        // রোমান সংখ্যার মান
        int I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000;

        // রোমান সংখ্যার মান অ্যারে হিসেবে সংরক্ষণ
        int[] a = new int[s.length()];

        // প্রতিটি ক্যারেক্টার দেখে তার মান অ্যারেতে রাখা
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'I') a[i] = I;
            else if (s.charAt(i) == 'V') a[i] = V;
            else if (s.charAt(i) == 'X') a[i] = X;
            else if (s.charAt(i) == 'L') a[i] = L;
            else if (s.charAt(i) == 'C') a[i] = C;
            else if (s.charAt(i) == 'D') a[i] = D;
            else if (s.charAt(i) == 'M') a[i] = M;
        }

        // রোমান সংখ্যার মান যোগ বা বিয়োগ করে ফলাফল নির্ণয়
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && a[i] < a[i + 1]) {
                sum += a[i + 1] - a[i];
                i++; // পরবর্তী ইন্ডেক্স স্কিপ করা
            } else {
                sum += a[i];
            }
        }

        return sum;
    }
}

