#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j){
            // 땅이 아닌 경우 종료
            if (i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() || grid[i][j] != '1') return;

            grid[i][j] = '0';

            dfs(grid, i + 1, j);
            dfs(grid, i - 1, j);
            dfs(grid, i, j+1);
            dfs(grid, i, j-1);

        }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        
        int count(0);
        int i, j;
        for (i = 0; i<grid.size();i++){
            for (j = 0; j<grid[i].size();j++){
                if (grid[i][j] == '1'){
                    dfs(grid, i, j);
                    count += 1;
                }
            }
        }
        
        return count;
    }
};