class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mpp;
        for(auto i:s) mpp[i]++;
        int count = 0;
        for(auto i:t){
            if(mpp.find(i)!=mpp.end() and mpp[i]>0) mpp[i]--;
            else count++;
        }
        return count;
    }
};