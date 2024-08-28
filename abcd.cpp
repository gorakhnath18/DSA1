 class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid1.size();
        int n = grid1[0].size();
        int count = 0;

         function<void(int, int, vector<vector<int>>&)> dfs = [&](int x, int y, vector<vector<int>>& grid) {
            stack<pair<int, int>> stk;
            stk.push({x, y});
            while (!stk.empty()) {
                auto [i, j] = stk.top();
                stk.pop();
                if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0) {
                    continue;
                }
                grid[i][j] = 0;  
                for (auto [di, dj] : vector<pair<int, int>>{{-1, 0}, {1, 0}, {0, -1}, {0, 1}}) {
                    stk.push({i + di, j + dj});
                }
            }
        };

         for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid2[i][j] == 1) {
                    bool isSubIsland = true;
                    stack<pair<int, int>> stk;
                    stk.push({i, j});
                    vector<pair<int, int>> cells;
                    
                    while (!stk.empty()) {
                        auto [x, y] = stk.top();
                        stk.pop();
                        if (x < 0 || x >= m || y < 0 || y >= n || grid2[x][y] == 0) {
                            continue;
                        }
                        cells.push_back({x, y});
                        grid2[x][y] = 0;  
                        for (auto [dx, dy] : vector<pair<int, int>>{{-1, 0}, {1, 0}, {0, -1}, {0, 1}}) {
                            stk.push({x + dx, y + dy});
                        }
                    }
                    
                     for (auto [x, y] : cells) {
                        if (grid1[x][y] == 0) {
                            isSubIsland = false;
                            break;
                        }
                    }
                    
                    if (isSubIsland) {
                        ++count;
                    }
                }
            }
        }
        return count;
    }
};
