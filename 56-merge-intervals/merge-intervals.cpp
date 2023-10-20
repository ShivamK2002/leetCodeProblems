class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        stack<pair<int,int>>st;
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        st.push({intervals[0][0],intervals[0][1]});
        
        for(int i=1; i<n; i++){
            if(intervals[i][0]<=st.top().second){
                int ele1 = st.top().first;
                int ele2 = intervals[i][1];
                if(st.top().second > ele2) ele2 = st.top().second;
                st.pop();
                st.push({ele1,ele2});
            }
            else st.push({intervals[i][0],intervals[i][1]});
        }

        vector<vector<int>>ans;
        while(!st.empty()){
            int ele1 = st.top().first;
            int ele2 = st.top().second;
            ans.push_back({ele1,ele2});
            st.pop();
        }
        return ans;
    }
};