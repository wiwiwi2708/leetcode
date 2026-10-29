class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size());
        for (int i = 0; i < nums1.size(); i++) {
            int num1 = nums1[i];
            int el = -1;
            bool found = false;
            for (int j : nums2) {
                if (j == num1)
                    found = true;
                if (found && j > num1) {
                    el = j;
                    break;
                }
            }
            ans[i] = el;
        }
        return ans;
    }
};