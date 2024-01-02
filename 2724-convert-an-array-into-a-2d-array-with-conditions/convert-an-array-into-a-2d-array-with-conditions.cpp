class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        unordered_map<int,int>mpp;
        for(auto i:nums) mpp[i]++;

        int it = 0;
        for(auto i:mpp){
            it = max(i.second,it);
        }

        while(it--){
            vector<int>temp;
            for(auto &i:mpp) {
               if(i.second>0) temp.push_back(i.first);
               i.second--;
            }
            ans.push_back(temp);

            }

        return ans;
    }
};