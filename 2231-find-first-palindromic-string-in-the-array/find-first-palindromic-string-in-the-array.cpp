class Solution {
public:
    bool isPalidrome(string s){
        int n = s.size();
        int i = 0 ;
        int j = n-1;

        while(i<=j){
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto i:words){
            if(isPalidrome(i)) return i;
        }
        return "";
    }
};