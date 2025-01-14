class Solution
{
public:
    bool isUgly(int n)
    {
        if (n <= 0) return false;

        // যতক্ষণ n ২, ৩, ৫ দ্বারা ভাগযোগ্য, ততক্ষণ ভাগ করে চলুন
        while (n % 2 == 0)
        {
            n /= 2;
        }
        while (n % 3 == 0)
        {
            n /= 3;
        }
        while (n % 5 == 0)
        {
            n /= 5;
        }

        // যদি n ১ হয়ে যায়, তবে এটি একটি অভ্যন্তরীণ সংখ্যা, অন্যথায় নয়
        return n == 1;
    }
}
}

