class Solution {
public:
    int strStr(string s, string needle) {
        int n = s.size();
        int m = needle.size();

        int i=0;
        int j=0;
        string temp = "";
        while(j<n){
            if(j-i+1<m){
                temp+=s[j];
                cout<<temp<<endl;
            }
            if(j-i+1==m){
                temp+=s[j];
                if(temp==needle) return i;
                temp.erase(0,1);
                i++;
            }
            j++;
        }

        return -1;
    }
};