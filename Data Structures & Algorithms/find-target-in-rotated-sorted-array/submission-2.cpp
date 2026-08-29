class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n -1 ;
        while( l < r){
            int mid = l + (r - l)/2;
            if(nums[mid] == target)return mid;
            if( nums[mid] > nums[r]){
                if(nums[mid] < target || nums[r] >= target) l = mid + 1;
                else r = mid -1;
            }
            else{
                if(nums[mid] > target || nums[r] < target) r = mid -1;
                else l = mid + 1;
            }
        }
        if(nums[l]==target)return l;
        return -1;
    }
};
