class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int ml=0;
        // for(int l =0; l<n; l++){
        //     vector<int> cnt(26,0);
        //     for(int r = l; r<n; r++){
        //         cnt[s[r]-'A']++;
        //         int val = *max_element(cnt.begin(),cnt.end());
        //         int length_rem = (r - l + 1) - val;
        //         if(length_rem <= k) ml = max(ml,r - l + 1);
        //     }
        // }
        int l =0, r=0,leng_rem=0,val=0;
        vector<int> cnt(26,0);
        while(r<n){
            cnt[s[r] - 'A']++;
            val = *max_element(cnt.begin(),cnt.end());
            leng_rem = (r - l + 1) - val;
            while(leng_rem > k){
                cnt[s[l] - 'A']--;
                l++;
                val = *max_element(cnt.begin(),cnt.end());
                leng_rem = (r - l + 1 ) - val;
            }
            ml = max(ml, r - l + 1);
            r++;
        }
        return ml;
    }
};
