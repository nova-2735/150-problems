class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(string str: strs){
            s.append(to_string(str.size()));
            s+='#';
            s.append(str);
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        for(int i=0;i<s.size();){
            int start = i;
            while(s[i]!='#'){
                i++;
            }
            string sz = s.substr(start,i-start);
            int sze = stoi(sz);
            string x = s.substr(i+1,sze);
            strs.push_back(x);
            i = i + (sze+1);
        }
        return strs;
    }
};
