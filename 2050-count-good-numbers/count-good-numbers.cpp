class Solution {
public:
    int mod = 1e9 + 7;

    long long exponent(long long b, long long e) {

        long long ans = 1;
        while (e) {
            if (e & 1) {
                ans = ans * b;
                ans = ans % mod;
            }
            b = (b * b) % mod;
            e >>= 1;
        }

        return ans % mod;
    }
    int countGoodNumbers(long long n) {
        long long even_places = (n + 1) / 2;
        long long odd_places = n / 2;

        long long five = 5;
        long long four = 4;

        long long a = exponent(five, even_places);
        long long b = exponent(four, odd_places);

        return (a * b) % mod;
    }
};