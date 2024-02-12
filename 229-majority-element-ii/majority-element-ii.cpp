class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;

        int count1 = 0;
        int count2 = 0;

        int majority1 = nums[0];
        int majority2 = 0;

        for(int i=0; i<n; i++){
            int num = nums[i];
            if(count1==0 and num!=majority2) {
                count1++;
                majority1 = num;
            }
            else if(count2==0 and num!=majority1) {
                count2++;
                majority2 = num;
            }
            else if(majority1==num) count1++;
            else if(majority2==num) count2++;
            else{
                count1--;
                count2--;
            }
        }
        int check1 = 0;
        int check2 = 0;
        for(auto i:nums){
            if(i==majority1) check1++;
            else if(i==majority2) check2++;
        }
        if(check1>n/3) ans.push_back(majority1);
        if(check2>n/3) ans.push_back(majority2);


        return ans;

    }
};