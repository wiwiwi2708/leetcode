class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        if(x+y<target) return false;
        int g = gcd(x,y);
        return target%g == 0;
    }
};