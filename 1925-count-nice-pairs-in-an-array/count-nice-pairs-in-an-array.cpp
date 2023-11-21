class Solution {
public:
    // int rev(int val){
    //     int ans = 0;
    //     while(val){
    //         ans = ans*10 + val%10;
    //         val/=10;
    //     }
    //     return ans;
    // }
    int countNicePairs(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        vector<int>rev;
        for(auto val:nums){
        int ans = 0;
        while(val){
            ans = ans*10 + val%10;
            val/=10;
        }
        rev.push_back(ans);
        }

        for(int i=0; i<n; i++){
            nums[i]-=rev[i];
        }

        unordered_map<int,int>mpp;

        for(auto i:nums){
            if(mpp.find(i)!=mpp.end()){
                count= count%1000000007+ mpp[i]%1000000007;
                // mpp[i]--;
            }
             mpp[i]++;
        }


    return count%1000000007;
    }
};