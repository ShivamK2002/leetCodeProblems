class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;

        unordered_map<int,int>mpp;
        for(auto i:nums) mpp[i]++;

        for(auto i:mpp){
             if(i.second>1) ans.push_back(i.first);
             
        }
       
       for(int i=1; i<=n; i++) if(mpp.find(i)==mpp.end()) ans.push_back(i);
        return ans;
    }
};