class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>nsr(n);
        vector<int>nsl;
        stack<int>st;
        for(int i=0; i<n; i++){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            if(st.empty()) nsl.push_back(-1);
            else nsl.push_back(st.top());
            st.push(i);
        }
        stack<int>stt;
        
        for(int i=n-1; i>=0; i--){
            while(!stt.empty() && heights[stt.top()]>=heights[i]) stt.pop();

            if(stt.empty()) nsr[i] = (n);
            else nsr[i] = (stt.top());
            stt.push(i);
        }
        int ans = INT_MIN;
        for(auto i:nsl) cout<<i<<" ";
        cout<<endl; 
        for(auto i:nsr) cout<<i<<" ";

        for(int i=0; i<n; i++){
            int w = (i-nsl[i]-1)+nsr[i]-i;
            cout<<w<<endl;
            w*=heights[i];
            ans = max(ans,w);

        }
        return ans;
    }
};