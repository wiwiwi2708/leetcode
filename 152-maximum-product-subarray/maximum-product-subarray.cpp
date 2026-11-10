class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;

        int product = 1;
        int sp = 1;

        for (int num : nums) {
            product *= num;
            ans = max(ans, num);
            ans = max(ans, product);
            if (product == 0) {
                sp = 1;
                product = 1;
            } else if (product < 0) {
                if (product * sp > 0) {
                    product = product * sp;
                    ans = max(ans, product);
                    sp = 1;
                } else {
                    sp = product;
                    product = 1;
                }
            }
        }

        reverse(nums.begin(), nums.end());

        product = 1;
        sp = 1;
        
        for (int num : nums) {
            product *= num;
            ans = max(ans, num);
            ans = max(ans, product);
            if (product == 0) {
                sp = 1;
                product = 1;
            } else if (product < 0) {
                if (product * sp > 0) {
                    product = product * sp;
                    ans = max(ans, product);
                    sp = 1;
                } else {
                    sp = product;
                    product = 1;
                }
            }
        }

        return ans;
    }
};