class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int n = numbers.size();
        int j = n-1;

        while(i<j){
            int add = numbers[i]+numbers[j];
            if(add==target) return {i+1,j+1};
            else if(add<target) i++;
            else j--;
        }

        return {-1,-1};
    }
};