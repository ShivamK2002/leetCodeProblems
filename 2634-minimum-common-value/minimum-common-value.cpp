class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();

        map<int,int>mpp;
        for(auto i:nums1) mpp[i]++;
        for(auto i:nums2) if(mpp[i]!=0) return i;

        return -1;
    }
};