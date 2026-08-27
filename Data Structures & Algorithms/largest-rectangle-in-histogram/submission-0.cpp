class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> mymy;
        int maxarea=0;
        for(int i=0;i<n;i++){
            while(!mymy.empty() && heights[i]<heights[mymy.top()]){
                int curr = mymy.top();
                mymy.pop();
                int left = mymy.empty()? -1 : mymy.top();
                maxarea = max(maxarea, ((i-1)-left)*heights[curr]);
            }
            mymy.push(i);
        }
        while(!mymy.empty()){
            int curr = mymy.top();
            mymy.pop();
            int left = mymy.empty()? -1 : mymy.top();
            maxarea = max(maxarea, ((n-1)-left)*heights[curr]);
        }
        return maxarea;
    }
};
