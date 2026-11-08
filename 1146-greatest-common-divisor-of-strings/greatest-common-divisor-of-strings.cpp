class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans = "";
        string prefix = "";
        int l = min(str1.size(), str2.size());
        for (int i = 0; i < l; i++) {
            if (str1[i] != str2[i])
                break;
            prefix += str1[i];
            string s1 = "";
            string s2 = "";

            while (s1.size() < str1.size()) {
                s1 += prefix;
            }
            while (s2.size() < str2.size()) {
                s2 += prefix;
            }

            if (s1 == str1 && s2 == str2)
                ans = prefix;
        }
        return ans;
    }
};