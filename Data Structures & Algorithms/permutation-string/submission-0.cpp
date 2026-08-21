class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        vector<int>cnt1(26,0);
        for(int i=0;i<n;i++)cnt1[s1[i]-'a']++;
        int l=0, r=l+n-1;
        vector<int>cnt2(26,0);
        int k=0;while(k<r){
            cnt2[s2[k]-'a']++;
            k++;
        }
        while(r<m){
            cnt2[s2[r]-'a']++;
            int flag=1;
            for(int i=0;i<26;i++)if(cnt1[i]!=cnt2[i])flag=0;
            if(flag)return true;
            cnt2[s2[l]-'a']--;
            l++;
            r++;
        }
        return false;
    }
};
