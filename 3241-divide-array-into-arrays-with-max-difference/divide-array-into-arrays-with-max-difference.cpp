class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(auto i:nums) cout<<i<<" ";

        int it = k;
        for(int i=0; i<nums.size(); i++){
            vector<int>temp;
            int count = 3;
        int x = nums[i];
            while(count--){
               if( nums[i]-x<=k){
                temp.push_back(nums[i]);
                cout<<x<<endl;
                i++;
                }
                else return {};
            }

            i--;
            ans.push_back(temp);
        }


        return ans;
    }
};