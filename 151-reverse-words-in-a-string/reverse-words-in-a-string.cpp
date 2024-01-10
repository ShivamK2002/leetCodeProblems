class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = n-1;
        string ans = "";

        while(i>=0){

            string temp = "";

            while(i>=0 and s[i]!=' ' ){
                temp+=s[i];
                i--;
            }

           if (temp!="") {
               reverse(temp.begin(),temp.end());
            ans+=temp;
            ans+=" ";
           }
            i--;
        }

     ans.pop_back();
        return ans;
    }
};