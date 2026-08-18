class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> val;
        for(int i=0;i<n;i++){
            val[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            auto it = val.find(target - nums[i]);
            if(it!=val.end() && it->second != i){
                int j = it->second;
                return {min(i, j), max(i, j)};
            }
        }
        return{};
    }
};
