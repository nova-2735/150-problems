class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        stack<int> mystack;
        vector<int> ans(n,0);
        for(int i = n-1; i>=0; i--){
            while(!mystack.empty() && temp[mystack.top()]<=temp[i]) mystack.pop();
            if(!mystack.empty())ans[i]= mystack.top()-i;
            mystack.push(i);
        }
        return ans;
    }
};
