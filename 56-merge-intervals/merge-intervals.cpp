class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(ans.empty() || ans.back()[1]<arr[i][0]) ans.push_back({arr[i][0],arr[i][1]});
            else{
                ans.back()[0] = min(ans.back()[0],arr[i][0]);
                ans.back()[1] = max(ans.back()[1],arr[i][1]);
            }
        }
        return ans;
    }
};