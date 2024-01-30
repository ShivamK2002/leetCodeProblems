class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto str:tokens){
      
		if(str == "+" || str == "-" || str == "*" || str == "/") {
               int op1 = st.top(); st.pop();
			int op2 = st.top(); st.pop();
			if(str == "+") op1 = op2 + op1;
			if(str == "-") op1 = op2 - op1;
			if(str == "/") op1 = op2 / op1;
			if(str == "*") op1 = op2 * op1;   
			st.push(op1);
             }
            else   st.push(stoi(str));

             
        }
        return st.top();
        }
};