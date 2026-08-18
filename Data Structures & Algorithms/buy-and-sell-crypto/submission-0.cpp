class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mt=prices[0],mdiff=0;
       for(int i=1; i<prices.size(); i++){
        mdiff = max(mdiff,prices[i]-mt);
        mt = min(mt,prices[i]);
       }
       return mdiff;
    }
};
