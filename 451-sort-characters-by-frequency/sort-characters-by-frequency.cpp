class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(auto i:s) mpp[i]++;
        priority_queue<pair<int,char>>pq;
        for(auto i:mpp){
            pq.push({i.second,i.first});
        }
        
         s = "";
        while(!pq.empty()){
                       
            s+=string(pq.top().first,pq.top().second);
            pq.pop();
        }
        return s;
    }
};