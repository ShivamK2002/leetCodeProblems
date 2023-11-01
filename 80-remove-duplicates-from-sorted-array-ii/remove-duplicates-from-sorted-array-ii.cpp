class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mpp;

        for(auto i:nums) mpp[i]++;
        int j = 0;
        // int k = 0;
        for(auto i:mpp){
            int count = i.second;
            if(count>2) count = 2;
            while(count--
            ){
                nums[j++] = i.first;
            }
        }
        return j;
    }
};