class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        vector<int> finalAns;

        unordered_map<int,int>mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        for(auto i:mpp){
            if(i.second>n/3) finalAns.push_back(i.first);
        }
     
        return finalAns;
    }
};