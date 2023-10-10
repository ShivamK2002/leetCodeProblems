class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        st.push(-1);
        int n = nums1.size();
        int m = nums2.size();
        vector<int>ans;
        vector<int>finalAns;

        for(int i=m-1; i>=0; i--){
            int ele = nums2[i];
            if(ele>st.top()){
                while(st.top()!=-1 && ele>st.top()){
                    st.pop();
                }
                ans.push_back(st.top());
                st.push(ele);
            }
            else if(ele<st.top()){
                ans.push_back(st.top());
                st.push(ele);
            }
        }
        reverse(ans.begin(),ans.end());
        for(auto i:ans){
            cout<<i<<endl;
        }

        for(int i=0; i<n; i++){
            int find = nums1[i];
            for(int j=0; j<m; j++){
                if(nums2[j]==find) finalAns.push_back(ans[j]);
            }
        }
        return finalAns;
    }
};