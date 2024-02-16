class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int,int>mpp;
        for(auto i:arr) mpp[i]++;
        vector<pair<int,int>>v;
        for(auto i:mpp){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size() and k>0;i++){
            while(k and v[i].first>0){
                v[i].first--;
                k--;
            }
        }
        int count = 0;
        for(auto i:v){
            if(i.first!=0) count++;
        }
        return count;

    }
};