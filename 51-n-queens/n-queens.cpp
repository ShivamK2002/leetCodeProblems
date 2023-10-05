class Solution {
public:

    bool isSafe(vector<string>&board,int row,int col,int n){

        for(int i=col; i>=0; i--){
            if(board[row][i]=='Q') return false;
        }
        int tempRow = row;
        int tempCol = col;

        while(tempRow>=0 && tempCol>=0){
            if(board[tempRow][tempCol]=='Q') return false;
            tempRow--;
            tempCol--;
        }
         tempRow = row;
         tempCol = col;
        while(tempRow<n && tempCol>=0){
            if(board[tempRow][tempCol]=='Q') return false;
            tempRow++;
            tempCol--;
            
        }
        return true;
    }




    void solve(vector<vector<string>>&ans,vector<string>&board,int n, int col){
        if(col >= n){
            ans.push_back(board);
            return ;
        }
        for(int i=0; i<n; i++){
            if(isSafe(board,i,col,n)){
            board[i][col] = 'Q';
            solve(ans,board,n,col+1);
            board[i][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string temp(n,'.');
        for(auto &i:board){
            i = temp;
        }
        solve(ans,board,n,0);
        return ans;

    }
};