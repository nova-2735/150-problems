class Solution {
public:
    int hours(int k,vector<int>& piles){
        int cnt=0;
        for(int num: piles){
            cnt+= (num + k-1)/k;
        }
        return cnt;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int mp =0;
        for(int num: piles)mp= max(mp,num);
        int l = 1, r = mp,ans=mp;
        while(l<=r){
            int mid = l + (r - l)/2;
            if(hours(mid,piles) <= h){ r = mid - 1; ans =mid;}
            else if(hours(mid,piles) > h) l = mid + 1;
            else return mid;
        }
        return ans;
    }
};
