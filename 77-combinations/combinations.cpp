class Solution {
public:
    void combo(vector<vector<int>>& ans, vector<int>& temp, int n, int k, int i) {
        if (temp.size() == k) {
            ans.push_back(temp);
            return;
        }

        if (i > n) {
            return;
        }

        // Include the current element i in the combination
        temp.push_back(i);
        combo(ans, temp, n, k, i + 1);

        // Exclude the current element i from the combination
        temp.pop_back();
        combo(ans, temp, n, k, i + 1);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        combo(ans, temp, n, k, 1);
        return ans;
    }
};
