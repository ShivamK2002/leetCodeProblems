class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>>another = board;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int count = 0;
                if(j+1<n and i<m and  (board[i][j+1])==1 ) count++;
                if(i+1<m and j+1<n and  (board[i+1][j+1])==1  ) count++;
                if(i+1<m and j<n and  (board[i+1][j])==1 )  count++;
                if(i+1<m and j-1>=0 and  (board[i+1][j-1])==1  ) count++;
                if(j-1>=0 and i<m and  (board[i][j-1])==1 )  count++;
                if(i-1>=0 and j-1>=0 and  (board[i-1][j-1])==1  ) count++;
                if(i-1>=0  and j<n and  (board[i-1][j])==1  ) count++;
                if(i-1>=0 and j+1<n and  (board[i-1][j+1])==1  ) count++;

                cout<<count<<endl;
                int ele = board[i][j];
                if(ele==1){
                     if (count==2 or count==3) another[i][j]=1;
                     else another[i][j]=0;
               }
                else if(ele==0 and count==3) another[i][j]=1;
                
            }
        }
        // for(int i=0; i<m; i++){
        //     for(int j=0; j<n; j++){
        //         if(another[i][j]==2) board[i][j]=1;
        //         else if(another[i][j]==-1) board[i][j] = 0;
        //     }
        // }
        board= another;
    }
};