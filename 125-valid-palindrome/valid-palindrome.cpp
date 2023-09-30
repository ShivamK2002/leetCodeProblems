class Solution {
public:
    bool isPalindrome(string s) {
      string temp = "";
        for(auto i:s){
          if(isalnum(i)) temp.push_back(tolower(i));
        }
        cout<<temp<<endl;
        int n = temp.length();
        int i = 0;
        int j = n-1;
        while(i<=j){
          if(temp[i]!=temp[j]) return false;
          i++;
          j--;
        }

        return true;
    }
};