class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = speed.size();
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++)vec.push_back({position[i],speed[i]});
        sort(vec.begin(),vec.end(),[](const auto& a, const auto& b){
            return a.first<b.first;
        });
        vector<double> time(n);
        for(int i=0;i<n;i++){
            time[i] = (double)(target - vec[i].first) / vec[i].second;
        }
        int fleet =1;
        int i = n-1;double curr = time[n-1];
        while(i>=0){
            if(time[i]<=curr){
                i--;continue;
            }
            else{
                curr = time[i];
                fleet++;i--;
            }
        }
        return fleet;
    }
};
