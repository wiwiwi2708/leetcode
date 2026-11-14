class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int k = 0;
        string w = word;

        while (sequence.find(word) != string::npos) {
            k++;
            word += w;
        }
        return k;
    }
};