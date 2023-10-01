class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int start,end;

        int n = nums.size();

        if(n==0) return 1;
        
        
        sort(nums.begin(),nums.end());
    
        int index;
        for(int i=0; i<n; i++){
            if(nums[i]>0 ){

            start = nums[i];
            index = i;
            break;
            }
        }

        if(start !=1) return 1;

        int prev = INT_MAX;
        for(int i=index; i<n; i++){
            if(nums[i]==prev) continue;
            if(nums[i]!=start && nums[i]!=prev ) return start;
            start++;
            prev = nums[i];
        }

        return start;
    }
};