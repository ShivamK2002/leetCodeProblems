class Solution {
public:
    int minAddToMakeValid(string s) {
            int count = 0;
            stack<char> st;
            for(auto i:s){
                if(i=='(') st.push(i);
                else {
                    if(st.empty()) count++;
                    else if(st.top()=='(') st.pop();
                } 
            }


            return count+st.size();
    }
};