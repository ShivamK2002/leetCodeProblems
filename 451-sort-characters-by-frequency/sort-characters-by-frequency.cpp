class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(auto i:s) mpp[i]++;
        vector<pair<int,char>>v;
        for(auto i:mpp){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        string ans = "";
        for(auto i:v){
            int it = i.first;
            
            ans+=string(i.first,i.second);
        }
        return ans;
    }
};