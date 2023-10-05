class Solution {
public:
    bool isSafe(int col,int row,vector<string>&board,int n){
        for(int i=col; i>=0; i--){
            if(board[row][i] == 'Q') return false;
        }

        int tempRow = row;
        int tempCol = col;
        
        while(tempRow>=0 && tempCol >=0){
            if(board[tempRow][tempCol] == 'Q') return false;
            tempRow--;
            tempCol--;
        }
        tempRow = row;
        tempCol = col;
           while(tempRow<n && tempCol>=0){
            if(board[tempRow][tempCol] == 'Q') return false;

           
            tempRow++;
            tempCol--;
        }
        return true;


    }

    void solve(int n, vector<string>&board,vector<vector<string>>&ans,int col){
        if(col >= n) {
        ans.push_back(board);
        return;
        }
        for(int i=0; i<n; i++){
            if(isSafe(col,i,board,n)){
                board[i][col] = 'Q';
                solve(n,board,ans,col+1);
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


        solve(n,board,ans,0);
        return ans;
    }
};