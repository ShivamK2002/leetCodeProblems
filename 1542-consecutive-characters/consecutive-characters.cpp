class Solution {
public:
    int maxPower(string s) {
        int count  =1;
        int ans = 1;
        int i = 0;
        int j = 1;
        int n  = s.size();
        while(j<n){
            if(s[j]==s[i]) count++;
            else{
                count = 1;
                i = j;
            }
                ans = max(count,ans);
            j++;
        }

        return ans;
    }
};