class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        vector<int>v;
        for(auto i:arr) mpp[i]++;
        for(auto i:mpp) v.push_back(i.second);
        sort(v.begin(),v.end());
        for(int i=1; i<v.size();i++){
            if(v[i]==v[i-1]) return false;
        }
        return true;
    }
};