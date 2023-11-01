class Solution {
public:
    int romanToInt(string s) {
    map<char, int> mpp = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};



        int ans = 0;
        char prev = s[0];
        ans+=mpp[prev];
                cout<<ans<<endl;

        for(int i=1; i<s.size(); i++){
            char ch = s[i];
            if(mpp[ch]<=mpp[prev]){
                prev =ch;
                ans+=mpp[ch];
            }
            else {
                ans+=(mpp[ch]-2*mpp[prev]);
                prev = ch;
            }
        }


        return ans;
    }
};