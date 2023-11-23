class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = nums.size();
        vector<bool>ans;

        int m = l.size();

        for(int i=0; i<m; i++){
            int left = l[i];
            int right = r[i];
            vector<int>temp;
            for(int j=left; j<=right; j++){
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end());
            int diff = temp[1] - temp[0];
            bool store=true;
            for(int i=1; i<temp.size()-1; i++){
                if(temp[i+1]-temp[i]!=diff) {
                    store = false;
                    break;
                }
            }
            ans.push_back(store);

        }


        return ans;
        
    }
};