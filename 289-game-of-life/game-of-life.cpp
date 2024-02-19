class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int count = 0;
                if(j+1<n and  abs(board[i][j+1])==1 ) count++;
                if(i+1<m and j+1<n and  abs(board[i+1][j+1])==1  ) count++;
                if(i+1<m and  abs(board[i+1][j])==1 )  count++;
                if(i+1<m and j-1>=0 and  abs(board[i+1][j-1])==1  ) count++;
                if(j-1>=0 and  abs(board[i][j-1])==1 )  count++;
                if(i-1>=0 and j-1>=0 and  abs(board[i-1][j-1])==1  ) count++;
                if(i-1>=0 and  abs(board[i-1][j])==1  ) count++;
                if(i-1>=0 and j+1<n and  abs(board[i-1][j+1])==1  ) count++;

                cout<<count<<endl;
                int ele = board[i][j];
                if(ele){
                     if (count==2 or count==3) board[i][j]=1;
                     else board[i][j]=-1;
               }
                else if(ele==0 and count==3) board[i][j]=2;
                
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j]==2) board[i][j]=1;
                else if(board[i][j]==-1) board[i][j] = 0;
            }
        }
    }
};