class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> seen(2001,-1);
        for (int i = 0; i < nums.size(); i++) {
            int mapped_val = nums[i] + 1000;
            int new_map = target - nums[i];
            if(seen[mapped_val]!=-1){
                i+=1;seen[mapped_val]+=1;
                return {min(i,seen[mapped_val]),max(i,seen[mapped_val])};
            }
            
            if(new_map<=1000 && new_map>=-1000)seen[new_map+1000] = i;
        }
    }
};
