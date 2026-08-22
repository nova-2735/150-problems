class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<int> mine;
        for(int i =0; i<n; i++){
            if(s[i]==')'){
                if(mine.empty()||mine.top()!='(')return false;
                else mine.pop();
            }
            else if(s[i]=='}'){
                if(mine.empty()||mine.top()!='{')return false;
                else mine.pop();
            }
            else if(s[i]==']'){
                if(mine.empty()||mine.top()!='[')return false;
                else mine.pop();
            }
            else mine.push(s[i]);
        }
        if(mine.empty())return true;
        return false;
    }
};
