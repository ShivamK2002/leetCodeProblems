class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int count = 0;
        for(auto i:nums){
            mpp[i]++;
        }
        for(auto i:mpp){

            if(k==0) {
                if(i.second>1)
                count++; 
            }
            else if(mpp.find(i.first+k)!=mpp.end()) {
                count++;
                mpp[i.first]--;
                mpp[i.first+k]--;
            }


        }
        return count;
    }
};