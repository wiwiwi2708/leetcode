class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;

        for (int i = 0; i < nums.size();) {
            int ind2 = i;

            while (ind2 < nums.size() && (minK <= nums[ind2]) &&
                   (nums[ind2] <= maxK)) {
                ind2++;
                ans++;
            }

            if (i != ind2) {
                long long n = ind2 - i;
                ans += ((n * (n + 1) / 2) - n);
                i = ind2 + 1;
            } else {
                i++;
            }
        }
        return ans;
    }
};