class Solution {
public:
    int ncr(int r,int c){
        long long res = 1;
        for(int i=1; i<=c; i++){
            res*=(r-i);
            res/=i;
        }
        // for(int i=1; i<=c;  i++){
        // }
        return int(res);
    }
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) return {1};
        vector<int>ans;
        for(int i=0; i<=rowIndex; i++) {
            ans.push_back(ncr(rowIndex+1,i));
        }
        return ans;
    }
};