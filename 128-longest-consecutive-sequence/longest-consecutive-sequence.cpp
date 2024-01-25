class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>mpp;
        for(auto i:nums) mpp[i]++;

        int m = mpp.size();
        int it = 0;
        for(auto i:mpp){
            nums[it++] = i.first;
        }

        
        if(m<=1) return m;
        int len = 1;
        int ans = 1;

        for(int i=1; i<m;i++){
            cout<<len<<endl;
            if(nums[i]== nums[i-1]+1) len++;
            else{
                ans = max(len,ans);
                len = 1;
            }
        }
        ans = max(len,ans);

        return ans; 
    }
};