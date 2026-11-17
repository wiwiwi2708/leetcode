class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0;
        int f = tickets[k];
        for (int i = 0; i < tickets.size(); i++) {
            if (i <= k) {
                ans += min(f, tickets[i]);
            } else {
                ans += min(f - 1, tickets[i]);
            }
        }
        return ans;
    }
};