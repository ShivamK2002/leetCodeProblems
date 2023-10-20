class Solution {
public:
    string removeKdigits(string num, int k) {
      string ans = "";
      stack<char>st;
      int n = num.size();

      for(int i=0; i<n; i++){
          char ele = num[i];
      
          while(!st.empty() and st.top()>ele and k>0){
          
              st.pop();
              k--;
          }
          st.push(ele);
          
      }
      while(k>0 and !st.empty()) {
          st.pop();
          k--;
      }
      while(!st.empty()){
            char ch = st.top();
            ans.push_back(ch);
          st.pop();
      }  
      reverse(ans.begin(),ans.end());
     int i = 0;
      while (i < ans.size() && ans[i] == '0') {
          i++;
      }
      if (ans.substr(i)=="") return "0";
      return ans.substr(i);
    }
};