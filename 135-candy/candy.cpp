class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int>left(n+1,0);
        vector<int>right(n+1,0);


        left[0] = 1;
        int candies = 1;
        for(int i=1; i<n; i++){
            if(ratings[i]>ratings[i-1]){
                candies++;
            }
            else candies = 1;
            left[i] = (candies);
        }
        right[n-1] = 1;
         candies = 1;
        for(int i=n-2; i>=0; i--){
            if(ratings[i]>ratings[i+1]){
                candies++;
            }
            else candies = 1;
            right[i] = candies;
        }
        candies = 0;
        for(int i=0; i<n; i++){
            candies+=max(left[i],right[i]);
        }


        return candies;

    }
};