#include <vector>

using namespace std;

class Solution {
public:

    void dfs(vector<vector<int>>& results, int index, vector<int> nums, vector<int> subset){
        int i;
        for (i = index; i < nums.size();i++){
            vector<int> new_subset(subset);
            new_subset.push_back(nums[i]);
            results.push_back(new_subset);
            dfs(results, i+1, nums, new_subset);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> results;

        vector<int> subset;
        results.push_back(subset);

        dfs(results, 0, nums, subset);
        return results;
    }
};