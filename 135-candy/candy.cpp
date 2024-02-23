class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
      

        vector<int> left;
        vector<int> right(n, 0);

        left.push_back(0);
        int candies = 1;
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                candies++;
            } else {
                candies = 1;
            }
            left.push_back(candies);
        }

        right[n - 1] = 1;
        candies = 1;
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                candies++;
            } else {
                candies = 1;
            }
            right[i] = candies;
        }

        candies = 0;
        for (int i = 0; i < n; i++) {
            candies += max(left[i], right[i]);
        }

        return candies;
    }
};
