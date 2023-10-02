class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        int n = nums.size();

        for(int i = 0; i<n; i++ ){
            for(int j= i+1; j<n; j++){
                vector<int > temp;
                if((abs(nums[i]-nums[j]) == k)) {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    sort(temp.begin(),temp.end());
                    if(v.empty()) v.push_back(temp);
                    else if(v.back()!=temp) v.push_back(temp);
                }
            }
        }















        return v.size();
    }
};