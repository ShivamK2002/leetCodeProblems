class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        unordered_map<int,int>mpp;

        for(auto i:nums){
            mpp[i]++;
        }
        for(auto i:mpp)
        {
            //  n * (n – 1) // 2
             if(i.second>1) count+=(i.second*(i.second-1)/2);
        }
     
        return count;
    }
};