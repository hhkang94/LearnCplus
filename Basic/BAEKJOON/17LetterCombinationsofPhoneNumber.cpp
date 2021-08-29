#include <map>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    void dfs(map<char,string>& dic, vector<string>& result, string& digits, int index, string path){
        if (path.length() == digits.length()){
            result.push_back(path);
            return;
        }
        
        int i;
        
        for (i = index; i < digits.length(); i++){
            for (auto j: dic[digits[i]]){
                string new_path(path);
                new_path.push_back(j);
                dfs(dic, result, digits, i+1, new_path);
            }
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        
        if (digits.empty()) return result;
        
        map<char, string> dic = {{'2',"abc"},{'3',"def"},{'4',"ghi"},
        {'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        int i;
        string path;
        
        dfs(dic, result, digits, 0, path);
        return result;
    }
};