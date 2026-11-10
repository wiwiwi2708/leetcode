class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int ans = INT_MIN;
        for (int i : nums) {
            if (i < 0) {
                if (sum + i <= 0) {
                    ans = max(ans, i);
                    sum = 0;
                }
                else{
                    sum += i;
                }
            } else {
                sum += i;
                ans = max(ans, int(sum));
            }
        }

        return ans;
    }
};