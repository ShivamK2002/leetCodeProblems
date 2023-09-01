class Solution {
public:
    void solve(int num,vector<int>&ans){
        int count = 0;
        while(num){
            if(num&1) count++;
            num>>=1;
        }
        ans.push_back(count);
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0; i<=n; i++){
            solve(i,ans);
        }
        return ans;
    }
};