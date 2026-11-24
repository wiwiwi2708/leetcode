class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = 1;
        for (int i = 0; i < nums.size(); i++) {
            long long prod = nums[i];
            long long l = nums[i], g = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                prod *= nums[j];
                g = gcd(g, nums[j]);
                l = lcm(l, nums[j]);
                if (prod == g * l)
                    ans = max(ans, j - i + 1);
                if(prod > g*l) break;
            }
        }
        return ans;
    }
};