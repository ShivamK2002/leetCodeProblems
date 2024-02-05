class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mpp;
        for(auto i:s) mpp[i]++;

        for(int i=0; i<s.size(); i++){
            if(mpp.find(s[i])!=mpp.end() and mpp[s[i]]==1) return i; 
        }
        return -1;
    }
};