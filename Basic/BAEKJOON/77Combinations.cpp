#include <vector>

using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& results, vector<int> elements, int start, int n, int k){
        if (elements.size() == k){
            results.push_back(elements);
            return;
        }

        for (start; start<n+1; start++){
            vector<int> new_elements (elements);
            new_elements.push_back(start);
            dfs(results,new_elements, start+1, n, k);
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> results;
        vector<int> elements;

        dfs(results, elements, 1, n, k);

        return results;
    }
};