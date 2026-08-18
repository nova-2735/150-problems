class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        unordered_set<int> look;
        for(int num:nums){
            look.insert(num);
        }
        int l=1;
        for(int num: look){
            if(look.find(num-1)!=look.end())continue;
            int siz = 1,k=num+1;
            while(look.find(k)!=look.end()){
                siz++;k++;
            }
            l = max(l,siz);
        }
        return l;
    }
};
