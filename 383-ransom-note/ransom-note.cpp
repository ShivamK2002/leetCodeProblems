class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mpp;

        for(auto i:magazine){
            mpp[i]++;
        }
        for(auto i:ransomNote){
            if(mpp.find(i)==mpp.end()) return false;
            else if(mpp.find(i)!=mpp.end()){

            if(mpp[i]==0) return false;
            else mpp[i]--;
            }
        }
        return true;
    }
};