#include <vector>

using namespace std;

class Solution {
public:

    void dfs(vector<vector<int>>& results, vector<int> elements, vector<int> prev_elements){
        if (elements.size() == 0){
            results.push_back(prev_elements);
        }

        int i;

        for (auto x: elements){
            vector<int> next_elements(elements);
            for (i = 0; i<next_elements.size();i++){
                if (next_elements[i] == x) next_elements.erase(next_elements.begin() + i);
            }

            vector<int> prev_elements_copy(prev_elements);
            prev_elements_copy.push_back(x);
            dfs(results, next_elements, prev_elements_copy);
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> results;
        vector<int> prev_elements;
        dfs(results, nums, prev_elements);

        return results;
    }
};