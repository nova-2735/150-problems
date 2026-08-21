class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(),m=t.size();
        unordered_map<char,int>tmap;
        for(char c:t)tmap[c]+=1;
        unordered_map<char,int>smap;
        int l = 0, r =0,ml=1000000,start=-1;
        string res = "";
        while(r<n){
            smap[s[r]]+=1;
            int flag =1;
            for(auto const& p: tmap){
                if(smap[p.first] < tmap[p.first])flag=0;
            }
            if(!flag){
                r++;continue;
            }
            while(flag){
                smap[s[l]]-=1;
                for(auto const& p: tmap)if(smap[p.first] < tmap[p.first])flag=0;
                l++;
            }
            l--;smap[s[l]]++;
            if(r-l + 1 <ml){
                ml = r-l+1;
                start = l;
            }
            r++;
        }
        if(start!=-1)return s.substr(start,ml);
        return res;
    }
};
