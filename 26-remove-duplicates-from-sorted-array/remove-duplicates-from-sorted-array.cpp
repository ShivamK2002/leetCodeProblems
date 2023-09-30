class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i = 0;
        int j = 0;
        int k = 1;
        while(j<arr.size()){
            if(arr[i]==arr[j]){
                j++;
            }
            else{
                k++;
                arr[i+1] = arr[j];
                i++;
                j++;
            }
        }
        return k;
    }
};