class Solution {
public:
    bool isPalidrome(string s){
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<=j){
            if(s[i++]!=s[j--]) return false; 
        }
        return true;
    }
    int countSubstrings(string s) {
        int n = s.size();
        int count = 0;
        for(int i=0; i<n; i++){
        string temp = "";
            for(int j=i; j<n; j++){
                temp+=s[j];
            if(isPalidrome(temp)) count++;
            }
        }
        return count;
    }
};