class Solution {
public:
    string reversePrefix(string word, char ch) {
        auto it = word.find(ch);
        if (it != string::npos)
            reverse(word.begin(), word.begin() + it + 1);
        return word;
    }
};
/*
The error happens because word.find(ch) returns an integer index (size_t), not an iterator. You cannot compare an integer index to word.end() or pass it directly as an iterator to reverse().

Why It Fails

• Invalid comparison: it holds a size_t index, while word.end() is a std::string::iterator. Comparing them causes a compiler type mismatch error.
• Wrong reverse() argument: std::reverse() expects two iterators. Passing it + 1 provides an integer instead of an iterator.


Two Ways to Fix It


Option 1: Keep word.find() (Index-based)

Compare the index against string::npos and add the index to word.begin() to create an iterator:
cpp
class Solution {
public:
    string reversePrefix(string word, char ch) {
        size_t idx = word.find(ch);
        if (idx != string::npos) {
            reverse(word.begin(), word.begin() + idx + 1);
        }
        return word;
    }
};
Use code with caution.

Option 2: Use std::find() (Iterator-based)

If you want to work directly with iterators and word.end(), use the <algorithm> function find() instead of the string member method:
cpp
class Solution {
public:
    string reversePrefix(string word, char ch) {
        auto it = find(word.begin(), word.end(), ch);
        if (it != word.end()) {
            reverse(word.begin(), it + 1);
        }
        return word;
    }
};
Use code with caution.

Complexity

• Time Complexity: \(O(N)\) where \(N\) is the length of word, as finding and reversing each scan the string at most once.
• Space Complexity: \(O(1)\) because std::reverse modifies the string in place
*/