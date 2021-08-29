#include <vector>

using namespace std;

class Solution {
public:

    void dfs(vector<vector<int>>& results, int csum, int index, vector<int> candidates, vector<int> path){
        if (csum < 0) return;
        if (csum == 0){
            results.push_back(path);
            return;

        int i, new_csum;
        for (i = index; i<candidates.size(); i++){
            vector<int> new_path(path);
            new_path.push_back(candidates[i]);
            new_csum = csum - candidates[i];
            dfs(results, new_csum, i, candidates, new_path);
        }

        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> results;
        vector<int> path;
        dfs(results, target, 0, candidates, path);

        return results;
    }
};