class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            int x = nums[i];
            int l = i+1, r = n-1;
            while(l<r){
                int y = nums[l],z=nums[r];
                if(x + y + z > 0)r--;
                else if (x+ y + z <0)l++;
                else{
                     ans.push_back({x,y,z});
                     while(l < r &&nums[l]==nums[l+1])l++;
                     while(l < r &&nums[r]==nums[r-1])r--;
                     l++;r--;
                }
            }
        }
        return ans;
    }
};
