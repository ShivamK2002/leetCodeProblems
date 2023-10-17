class Solution {
public:
    vector<int> asteroidCollision(vector<int>& astra) {
        stack<int>st;
        vector<int>ans;
        for(int &i:astra){
                    
                    while(!st.empty() && st.top()>0 && i<0){
                        int sum = st.top()+i;
                        if(sum<0) st.pop();
                        else if(sum==0) st.pop(), i=0;
                        else if(sum>0) i=0;
                    }
                    if(i!=0) st.push(i); 
             
        }

        while(!st.empty()) ans.push_back(st.top()),st.pop();
         reverse(ans.begin(),ans.end());
         return ans;
    }
};