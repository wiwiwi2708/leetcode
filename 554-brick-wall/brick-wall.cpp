class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
         unordered_map<long long, int> mp;
        int max_edges = 0;
        
        for (const auto& row : wall) {
            long long current_prefix_sum = 0;
            for (int i = 0; i < row.size() - 1; i++) {
                current_prefix_sum += row[i];
                mp[current_prefix_sum]++;
                max_edges = max(max_edges, mp[current_prefix_sum]);
            }
        }
        
        return wall.size() - max_edges;
    }
};