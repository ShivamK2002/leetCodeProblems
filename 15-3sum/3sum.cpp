class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
    
        vector<vector<int>>temp;
        int n = arr.size();
        int count = 0;
       set<vector<int>>st;
        unordered_map<int,int>mpp;
        for(auto i:arr){
            mpp[i]++;
            if(i==0) count++;
        }
        if(count>=3){
            st.insert({0,0,0});
        }

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int target = arr[i]+arr[j];
                // if(target==0 &&  mpp.find(0)!=mpp.end() ) st.insert({0,0,0});
                if(mpp.find(-target)!=mpp.end() && -target!=arr[i] && -target!=arr[j]){
                    
                    vector<int> ans = {arr[i],arr[j],-target};
                    sort(ans.begin(),ans.end());
                    st.insert(ans);

                 
                }
            }
        }
        for(auto i:st){
            temp.push_back(i);
        }
    
        return temp;
        }
};