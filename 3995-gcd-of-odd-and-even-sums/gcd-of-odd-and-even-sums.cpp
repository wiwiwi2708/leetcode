class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd = pow(n, 2);
        int sumeven = 0;
        for (int i = 1; i <= n; i++) {
            sumeven += (2 * i);
        }
        return gcd(sumodd, sumeven);
    }
};