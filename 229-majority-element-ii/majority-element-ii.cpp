class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
         int count1 = 0;
         int count2 = 0;
        int ele1;  
        int ele2;  
        int n = nums.size();
        for(auto i:nums){
            if(count1==0 && i!=ele2) {
                count1=1;
                ele1 = i;
            }
            else if(count2==0 && i!=ele1) {
                count2=1;
                ele2 = i;
            }
            else if(ele1==i) count1++;
            else if(ele2==i) count2++;
            else{
                count1--;
                count2--;
            }
            
        }

        count1 = 0 ;
        count2 = 0 ;
         for(auto i:nums){
             if(i==ele1) count1++;
             else if(i==ele2) count2++;

         }        
        if(count1>n/3) ans.push_back(ele1);
        if(count2>n/3) ans.push_back(ele2);

        return ans;


    }
};