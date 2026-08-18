class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> a;
        for(int i=0;i<nums.size();i++){
            a.push_back({nums[i],i});
        }
        sort(a.begin(),a.end());
        int l =0, r=nums.size()-1;
        while(l<r){
            int c = a[l].first + a[r].first;
            if(c==target){
                return {min(a[l].second,a[r].second),
                max(a[l].second,a[r].second)};
            }
            if(c<target)l++;
            if(c>target)r--;
        }

    }
};
