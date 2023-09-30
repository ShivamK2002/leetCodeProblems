class Solution {
public:
    // static bool cmp(pair<int,int>a,pair<int,int>b){
    //     return a.first<b.first;
    // }
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
       int n = arr.size();
    //    for(int i=0; i<n; i++){
    //        int start = arr[i][0];
    //        int end = arr[i][1];
    //        if(!ans.empty() && ans.back()[1]>=arr[i][1]) continue;
    //        for(int j=i+1; j<n; j++){
    //            if(end>=arr[j][0]) end = max(end,arr[j][1]);
    //        }

    //        ans.push_back({start,end});
            

    //    }
        for(int i=0; i<n; i++){
            if(ans.empty() || ans.back()[1]<arr[i][0]) ans.push_back({arr[i][0],arr[i][1]});
            else{
                ans.back()[1] = max(arr[i][1],ans.back()[1]);
            }


        }
        return ans;
    }
};