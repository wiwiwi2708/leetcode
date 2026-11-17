class Solution {
public:
    string clearDigits(string s) {
        string ans = "";
        for (char c : s) {
            if (c >= 48 && c <= 57)
                ans.pop_back();
            else
                ans.push_back(c);
        }
        return ans;
    }
};