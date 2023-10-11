class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>st;

        for(auto i:ops){
            if(i=="C"){
                st.pop();
            }
            else if(i=="D"){
                int num = st.top();
                num*=2;
                st.push(num);
            }
            else if (i=="+"){
                int num1 = st.top();
                st.pop();
                int ans = num1+st.top();
                st.push(num1);
                st.push(ans);
            }
            else{
                st.push(stoi(i));
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};