class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        unordered_map<char,int>mpp;
        // for(auto i:s) mpp[i]++;
        int len = 0;
        while(j<n){
            char ch = s[j];
            if(mpp.find(ch)==mpp.end() || mpp[s[j]] < i)
            {
                mpp[s[j]] = j;
                len = max(len,j-i+1);
            }
            else {
                // len = max(len,j-i);

                i=mpp[s[j]]+1;
                mpp[s[j]] = j;

            }

            j++;
        }
        return len;
    }
};