class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        while (x) {
            int digit = x % 10;
            if (ans * 10 > INT_MAX || (ans * 10 == INT_MAX && digit > 7))
                return 0;
            if (ans * 10 < INT_MIN || (ans * 10 == INT_MIN && digit < -8))
                return 0;
            ans = ans * 10 + digit;
            x/=10;
        }

        return ans;
    }
};