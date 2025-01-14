#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string smallestNumber(string num, long long t)
    {
        if (!has_only_2357_prime_factors(t))
        {
            return "-1";
        }



        long long int_num = stoll(num);
        long long ans = mul_digit(int_num);

        if (ans != 0 && ans % t == 0)
        {
            return to_string(int_num);
        }
        else
        {
            int_num++;
            num = to_string(int_num);
            return smallestNumber(num, t);
        }
    }

    long long mul_digit(long long x)
    {
        long long multiple = 1;
        while (x > 0)
        {
            multiple *= (x % 10);
            x = x / 10;
        }
        return multiple;
    }

    bool has_only_2357_prime_factors(long long t)
    {
        for (long long prime :
                {
                    2, 3, 5, 7
                })
        {
            while (t % prime == 0)
            {
                t /= prime;
            }
        }

        return t == 1;
    }
};

int main()
{
    Solution ob1;
    string num;
    long long t;

    cin >> num >> t;

    cout << ob1.smallestNumber(num, t) << endl;

    return 0;
}
/*

class Solution {
    unordered_map<int,vector<int>> cut{
            {2, {2}},
            {3, {3}},
            {4, {2,2}},
            {5, {5}},
            {6, {2,3}},
            {7, {7}},
            {8,{2,2,2}},
            {9, {3,3}}
    };
    int minLength(vector<int>& A) {
        int res = A[5] + A[7] + A[2] / 3 + A[3] / 2;
        if(A[2] % 3 == 2) res += 1 + (A[3] & 1);
        else if(A[2] % 3 == 1) res += max(1, A[3] & 1);
        else res += A[3] & 1;
        return res;
    }
    string build(vector<int>& count) {
        string res = "";
        res += string(count[2] / 3, '8'); count[2] %= 3;
        res += string(count[3] / 2, '9'); count[3] %= 2;
        res += string(count[7], '7'); res += string(count[5], '5');
        if(count[2] == 1 and count[3] == 1) {
            res += "6";
            count[2] -= 1, count[3] -= 1;
        } else if(count[2] == 2 and count[3] == 1) {
            res += "26";
            count[2] -= 2;
            count[3] -= 1;
        } else if(count[2] == 2) {
            res += "4";
            count[2] -= 2;
        }
        if(count[2]) res += "2";
        if(count[3]) res += "3";
        sort(begin(res), end(res));
        return res;
    }
    string helper(string& s, vector<int>& C) {
        bool ok = false;
        string str = "";
        vector<array<int,4>> st;
        st.push_back({0,0,0,0});
        while(st.size()) {
            auto [pos, fl, apply, x] = st.back(); st.pop_back();
            if(ok) str.push_back('0' + x);
            else {
                for(auto& c : cut[apply]) {
                    C[c]++;
                }
                if(apply) {
                    if(++x == 10) continue;
                    else {
                        int napply = 1;
                        for(auto& c : cut[x]) {
                            if(C[c]) C[c]--, napply *= c;
                        }
                        st.push_back({pos,true,napply,x});
                        st.push_back({pos+1,true,0,-1});
                    }
                } else {
                    if(pos == s.length()) {
                        int cnt = count(begin(C), end(C), 0);
                        if(cnt == 10) ok = true;
                    } else {
                        if(fl) {
                            int len = minLength(C);
                            if(s.length() - pos < len) continue;
                            str = string(s.length() - pos - len,'1') + build(C);
                            reverse(begin(str), end(str));
                            ok = true;
                        } else {
                            x = pos ? max(1, s[pos] - '0') : 0;
                            int napply = 1;
                            for(auto& c : cut[x]) {
                                if(C[c]) C[c]--, napply *= c;
                            }
                            st.push_back({pos,true,napply,x});
                            st.push_back({pos+1,x != (s[pos] - '0'),0,-1});
                        }
                    }
                }
            }
        }
        return str;
    }
public:
    string smallestNumber(string num, long long t) {
        vector<int> count(10);
        for(int i = 2; i <= 7 and i <= t; i++) {
            while(t % i == 0) {
                count[i]++; t /= i;
            }
        }
        if(t != 1) return "-1";
        if(minLength(count) > num.length()) return build(count);
        num = "0" + num;
        auto res = helper(num,count);
        if(res.back() == '0') res.pop_back();
        reverse(begin(res), end(res));
        return res;
    }
};

*/
