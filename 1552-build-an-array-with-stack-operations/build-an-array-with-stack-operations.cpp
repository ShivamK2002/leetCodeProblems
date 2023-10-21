class Solution {
public:
    vector<string> buildArray(vector<int>& target, int notNeeded) {
        vector<string> ans;
        int N = target.size();
        stack<int>st;
        int it = 1;
        
        for(int i=0; i<N; i++){
            int ele = target[i];
            if(it!=ele){
            while(it!=ele) {
                ans.push_back("Push");
                ans.push_back("Pop");
                it++;
                
            }
            }
            if(it==ele){
                st.push(ele);
                ans.push_back("Push");
                it++;
            }
        }
        return ans;
    }
};