class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        if(n%2!=0) return false;

    string half = s.substr(n/2,n/2);

        int count1 = 0;
        int count2 = 0;

    for(int i=0; i<n/2; i++){
      if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U') count1++;

  }       
    for(auto i:half){
 if(i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u' or i == 'A' or i == 'E' or i == 'I' or i == 'O' or i == 'U') count2++;

  }       
        cout<<count1;                                                                       
        cout<<count2;                                                                                                   if(count1!=count2) return false;
                    return true;





    }
};