class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if ((minK <= nums[i]) && (nums[i] <= maxK)) {
                nums[i] = 1;
                ans++;
            }
            else{
                nums[i] = 0;
            }
        }

        for (int i = 0; i < nums.size();) {
            int ind1 = i;
            int ind2 = i;

            while (ind2 < nums.size() && nums[ind2] == 1)
                ind2++;

            if (ind1 != ind2) {
                long long n = ind2 - ind1;
                ans += ((n * (n + 1) / 2) - n);
                i = ind2 + 1;
            } else {
                i++;
            }
        }
        return ans;
    }
};