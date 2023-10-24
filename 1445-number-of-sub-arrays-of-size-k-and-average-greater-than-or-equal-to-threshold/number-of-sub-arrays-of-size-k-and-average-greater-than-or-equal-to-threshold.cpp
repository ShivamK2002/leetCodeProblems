class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        int n = arr.size();
       
       int i = 0;
       int j = 0;
       int sum = 0;
       while(j<n){
           if(j-i+1<k){
               sum+=arr[j];
               j++;
           }
           else {
               sum+=arr[j];
               if(sum/k >= threshold) count++;
               sum-=arr[i];
               i++;
               j++;
            
           }
       }
return count;








    }
};