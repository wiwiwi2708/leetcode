class Solution {
public:
    vector<int> sumOfPrimeFactors(int n) {
        vector<int> prime_factors;
        while (n % 2 == 0) {
            prime_factors.push_back(2);
            n /= 2;
        }

        for (int i = 3; i * i <= n; i++) {
            while (n % i == 0) {
                prime_factors.push_back(i);
                n /= i;
            }
        }

        if (n > 1) {
            prime_factors.push_back(n);
        }

        return prime_factors;
    }
    int smallestValue(int n) {
        vector<int> primes = sumOfPrimeFactors(n);
        int sum = accumulate(primes.begin(), primes.end(), 0);
        while (n != sum) {
            n = sum;
            primes = sumOfPrimeFactors(n);
            sum = accumulate(primes.begin(), primes.end(), 0);
        }

        return n;
    }
};