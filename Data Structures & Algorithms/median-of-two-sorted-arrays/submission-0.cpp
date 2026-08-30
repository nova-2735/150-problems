class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int half = (n + m + 1)/2;
        if(m<n){
            swap(n,m);
            swap(nums1,nums2);
        }
        int l = -1, r = n - 1;
        while(l<=r){
            int mid = l + (r - l)/2;
            int other = half - (mid+1) -1;            
            int maxleft1 = (mid<0) ? INT_MIN : nums1[mid];
            int maxleft2 = (other<0) ? INT_MIN : nums2[other];
            int minright1 = (mid==n-1) ? INT_MAX : nums1[mid + 1];
            int minright2 = (other==m-1) ? INT_MAX : nums2[other + 1];
            if(maxleft1 > minright2) r = mid - 1;
            else if(maxleft2 > minright1) l = mid + 1;
            else{
                if((n + m) % 2)return max(maxleft1, maxleft2);
                else return (max(maxleft1, maxleft2) + min(minright1,minright2))/2.0;
            }
        }
        
    }
};
