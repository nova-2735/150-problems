class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> deq;
        vector<int> ans;
        int l=0, r=k-1;
        int q=0;
        while(q<=r){
            while(!deq.empty()&&nums[deq.back()]<nums[q])deq.pop_back();
            deq.push_back(q);
            q++;
        }
        ans.push_back(nums[deq.front()]);
        while(++r<n){
            if(deq.front() <= l)deq.pop_front();
            while(!deq.empty()&&nums[deq.back()]<nums[r])deq.pop_back();
            deq.push_back(r);
            ans.push_back(nums[deq.front()]);
            l++;
        }
        return ans;
    }
};
