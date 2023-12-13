class Solution {
public:
    bool checkZeroes(int i, int j, int m, int n,vector<vector<int>>& mat){
        int c1=0;
        int c2=0;
        for(int it=0; it<n; it++){
            if(mat[i][it]==0) c1++;
        }
        for(int it=0; it<m; it++){
            if(mat[it][j]==0) c2++;
        }
        if(c1==n-1 and c2==m-1) return true;
        return false;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int count = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]){
                    if(checkZeroes(i,j,m,n,mat)) count++;;
                }
            }
        }
        return count;
    }
};