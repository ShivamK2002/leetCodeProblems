class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mpp;
        for(auto i:s) mpp[i]++;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(mpp.find(s[i])!=mpp.end() and mpp[s[i]]==1) return i; 
        }
        return -1;
    }
};