class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int>trusted_by;
        unordered_map<int,int>trusts;

        for(auto i:trust){
            int ele1 = i[0];
            int ele2 = i[1];

            trusted_by[i[1]]++;
            trusts[i[0]]++;

        }
        int count = 0;
        int ans = -1;
        for ( int i = 1; i<=n; i++){
            if(trusted_by[i]==n-1 and trusts[i]==0){
                count++;
                ans = i;  

            }
        }

        if(count==1) return ans;
        return -1;
    }
};