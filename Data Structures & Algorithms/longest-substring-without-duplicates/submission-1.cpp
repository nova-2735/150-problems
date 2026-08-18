class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char,int> uwu;
        int cnt=0,mcnt=0,left=0;
        for(int i=0;i<n;i++){
            if(uwu.count(s[i])){
                while(left<=uwu[s[i]]){
                    uwu.erase(s[left]);
                    cnt--;
                    left++;
                }
                uwu[s[i]]=i;cnt++;
                mcnt = max(cnt,mcnt);
            }
            else{
                uwu[s[i]] = i;
                cnt++;
                mcnt = max(cnt,mcnt);
            }
        }
        return mcnt;
    }
};
