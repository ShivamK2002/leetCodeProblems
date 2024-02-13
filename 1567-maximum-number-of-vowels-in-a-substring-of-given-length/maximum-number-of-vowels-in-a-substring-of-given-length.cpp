class Solution {
public:
      bool isVowel(char i){
      if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u') return true;
      return false;
      }
    // int countVowels(string temp){
    //     int count = 0;
    //     for(auto i:temp){
    //         if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u') count++;
    //     }
    //     return count;
    // }
    int maxVowels(string s, int k) {
        int n = s.size();
        int i = 0;
        int j = 0 ;
        int ans = INT_MIN;
        int vowels = 0;
        while(j<n){
            if(isVowel(s[j])) vowels++;
             if(j-i+1==k){
                ans = max(ans,vowels);
                if(isVowel(s[i])) vowels--;
                i++;
            }


            j++;
        }
    return ans;
    }
};