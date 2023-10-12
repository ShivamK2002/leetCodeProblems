class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int>ans(n);
        stack<int>st;

        for(int i= n-1; i>=0; i--){
            int ele = temp[i];
            while(!st.empty() && temp[st.top()]<=ele) st.pop();
            if(!st.empty())ans[i] = st.top()-i;
            st.push(i);
        }
        for(auto i:ans){
            cout<<i<<endl;
        }
      


        return ans;
    }
};