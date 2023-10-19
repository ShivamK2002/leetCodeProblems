class Solution {
public:
    string decodeString(string s) {
        string res  ="";
        int num = 0;
        string temp = "";
        stack<string>st;
        stack<int>st2;
        int n = s.size();
        for(int i=0; i<n; i++){
           if(s[i]==']'){
               while(!st.empty()){
                   string ch  = st.top();
                   st.pop();
                   if(ch=="[") break; 
                    temp+=ch;
               }
               if(!st2.empty()) num = st2.top();
                   if(num!=0){
                   string store = "";
                   while(num){
                       store+=temp;
                       num--;
                   }
                   cout<<store<<endl;
                   st.push(store);
                   temp = "";
                   num = 0;
                   st2.pop();
                   }

               
           }
           else if(isdigit(s[i])) {
               int dig = 0;
               while(isdigit(s[i])){
                   dig = 10*dig + (s[i]-'0');
                   i++;
               }
               i--;
               cout<<dig<<endl;
               st2.push(dig);
           }
           else {
               string str = "";
               str+=s[i];
               st.push(str);
           }
    }
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
        reverse(res.begin(),res.end());
           return res;
    }
};