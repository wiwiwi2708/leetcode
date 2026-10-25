class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        vector<int> diffs;
        for (int i : nums) {
            string str = to_string(i);
            sort(str.begin(), str.end(), greater<int>());
            int j = stoi(str);
            diffs.push_back(j - i);
        }

        sort(diffs.begin(), diffs.end(), greater<int>());

        long long ans = accumulate(nums.begin(), nums.end(), 0*1LL);
        ans += accumulate(diffs.begin(), diffs.begin() + k, 0*1LL);

        return ans;
    }
};