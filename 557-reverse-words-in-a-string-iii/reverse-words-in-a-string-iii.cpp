class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string temp = "";
        int n = s.length();

        for(int i=0; i<n; i++){
            char ch = s[i];

            if(ch==' ') {
                reverse(temp.begin(),temp.end());
                ans+=temp;
                ans+=" ";
                temp = "";
            } 
            else temp+=ch;

        }

          reverse(temp.begin(),temp.end());
                ans+=temp;












        return ans;


    }
};