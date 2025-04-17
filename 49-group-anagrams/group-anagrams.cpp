class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;

        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            ans[temp].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for(auto& i : ans){
            result.push_back(i.second);
        }

        return result;
    }
};