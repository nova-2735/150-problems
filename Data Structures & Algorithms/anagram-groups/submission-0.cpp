class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ans;
        for(const auto& s: strs){
            string val(26,0);
            for(int i=0;i<s.size();i++){
                val[s[i]-'a']++;
            }
            ans[val].push_back(s);
        }
        vector<vector<string>>res;
        for(const auto& k: ans){
            vector<string> abc;
            for(const auto& s: k.second){
                abc.push_back(s);
            }
            res.push_back(abc);
        }
        return res;
    }
};
