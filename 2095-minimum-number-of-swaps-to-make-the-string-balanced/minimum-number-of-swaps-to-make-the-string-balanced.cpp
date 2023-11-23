class Solution {
public:
    int minSwaps(string s) {
        
        int count = 0;
        int n = s.size();
        int i = 0;
        int j = n-1;

        int open = 0;
        int close = 0;

        while(i<j){
            if(s[i]=='[') open++; 
            else close++;
            
            if(close>open){
                count++;
                while(s[j]!='[') j--;
                swap(s[i],s[j]);
                open++;
                close--;
            }
            i++;

        }
    return count;
    }
};