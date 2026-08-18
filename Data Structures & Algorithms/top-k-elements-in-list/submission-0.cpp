class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> wok;
        for(int num: nums){
            wok[num] = 1 + wok[num];
        }
        vector<vector<int>>freq(nums.size()+1);
        for(const auto& x: wok){
            freq[x.second].push_back(x.first);
        }
        vector<int> res;
        for(int i = freq.size()-1;i>0;i--){
            for(int num: freq[i])res.push_back(num);
            if(res.size()==k)return res;
        }
    }
};
