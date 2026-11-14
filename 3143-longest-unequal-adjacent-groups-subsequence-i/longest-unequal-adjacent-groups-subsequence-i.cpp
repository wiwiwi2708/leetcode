class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words,
                                         vector<int>& groups) {
        int f = !groups[0];
        vector<string> ans;
        for (int i = 0; i < groups.size(); i++) {
            int b = groups[i];
            if (b != f) {
                ans.push_back(words[i]);
                f = b;
            }
        }
        return ans;
    }
};