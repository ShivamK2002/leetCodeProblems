class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        st.push(-1);
        for(auto i:s){
            char ch = i;

            if(i=='(' || i=='[' || i=='{') st.push(ch);
            else {
                if(i==')' && st.top()=='(') st.pop();
                else if(i==']' && st.top()=='[') st.pop();
                else if(i=='}' && st.top()=='{') st.pop();
                else return false;
                 
            }
        }
        if(st.top()!=-1)return false;
         return true;
    }
};