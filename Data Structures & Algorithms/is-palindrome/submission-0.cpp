class Solution {
public:
    bool isPalindrome(string s) {
        int n =s.size();
        string res;
        for(int i=0;i<n;i++){
            char t = s[i];
            if(t>='A'&& t<='Z'){
                t = t + 'a'- 'A';
            }
            if((t>='a'&&t<='z')||(t>='0'&&t<='9'))res+=t;
        }int i=0,j=res.size()-1;
        while(i<j){
            if(res[i]!=res[j])return false;
            i++;j--;
        }
        return true;
    }
};
