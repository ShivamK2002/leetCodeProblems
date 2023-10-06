class Solution {
public:
    void merge(vector<int>&nums,int firstStart,int firstEnd,int secondStart,int secondEnd){
        int left = firstStart;
        int right = secondStart;
        vector<int> temp;
        while(left<=firstEnd && right<=secondEnd){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
            while(left<=firstEnd){
                temp.push_back(nums[left]);
                left++;
            }
            while(right<=secondEnd){
                temp.push_back(nums[right]);
                right++;
            }
            
           int i = 0;
           left = firstStart;
           while(left<=secondEnd){
               nums[left] = temp[i];
               left++;
               i++;
           }

        }
    
    void mergeSort(vector<int>&nums,int low, int high){
        if(low == high) return;
        int mid = (low+high)/2;
        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);
        merge(nums,low,mid,mid+1,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
           mergeSort(nums,low,high);
           return nums;
    }
};