class Solution {
public:
    string reverseWords(string s) {
        int n = -1; 
        int m = -1; 
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                if (n == -1) {
                    n = i;
                }
                m = i;
            } else {
                if (n != -1 && m != -1) {
                    reverse(s.begin() + n, s.begin() + m + 1);
                    n = -1;
                    m = -1;
                }
            }
        }
        
        if (n != -1 && m != -1) {
            reverse(s.begin() + n, s.begin() + m + 1);
        }
        
        return s;
    }
};
