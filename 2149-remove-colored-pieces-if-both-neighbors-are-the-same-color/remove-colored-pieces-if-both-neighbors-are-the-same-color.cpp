class Solution {
public:
    bool winnerOfGame(string colors) {
        bool ans  = false;
        int n = colors.length();

        int count = 0;
        int aMoves = 0;
        int bMoves = 0;
        for(int i=0; i<n; i++){
            if(colors[i]=='A') count++;
            if(colors[i] == 'B' || i==n-1 ) {
                if(count>=3) aMoves += (count-2);
                count = 0;
            }
        }

        for(int i=0; i<n; i++){
            if(colors[i]=='B') count++;
             if(colors[i] == 'A' || i==n-1 ) {
                if(count>=3) bMoves += (count-2);
                count = 0;
            }
          
        }
        cout<<aMoves<<endl;
        cout<<bMoves<<endl;
        if(aMoves>bMoves) ans = true;






        return ans;
    }
};