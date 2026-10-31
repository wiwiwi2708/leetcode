class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int length = 0;

        for (int x : nums) {
            if (x >= minK && x <= maxK)
                length++;
            else
                length = 0;

            ans += length;
        }

        return ans;
    }
};