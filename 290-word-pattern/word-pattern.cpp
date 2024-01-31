class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mpp1;
        unordered_map<string,char>mpp2;

        int n = s.size();
        int j = 0;
        int m = pattern.size();
        if(s==pattern and n!=1) return false;

        for(int i=0; i<n ; i++){
            string temp = "";
            while(i<n and s[i]!=' ') temp+=s[i++];

            if(mpp1.find(pattern[j])!=mpp1.end()) {
                if(mpp1[pattern[j]] != temp) return false;
            }
            if(mpp2.find(temp)!=mpp2.end()) {
                if(mpp2[temp] != pattern[j]) return false;
            }
            mpp1[pattern[j]]  = temp;
            mpp2[temp]  = pattern[j];
            
            j++;


        }
        if(j!=m) return false;

    return true;



    }
};