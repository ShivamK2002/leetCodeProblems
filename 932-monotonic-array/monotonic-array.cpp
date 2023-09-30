class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> cp1 = nums;
        vector<int> cp2 = nums;
        sort(cp1.begin(),cp1.end());
        sort(cp2.rbegin(),cp2.rend());
        // sort(cp2.begin(),cp2.end(),vector<int>greater());
        bool one = true;
        bool two = true;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] !=cp1[i]) one = false;     
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=cp2[i]) two = false;
        }
        return one|| two;
    }
};