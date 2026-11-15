class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = nums[0] == k;
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i - 1] + nums[i];
            ans += (nums[i] == k);
        }

        for (int i = 1; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                ans += (nums[j] - nums[i - 1] == k);
            }
        }
        return ans;
    }
};