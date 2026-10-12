class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int s = 0;
        int dup = x;
        while (dup) {
            s += dup % 10;
            dup /= 10;
        }
        if (x % s == 0)
            return s;
        else
            return -1;
    }
};