class Solution {
public:
    void combo(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& temp, int index) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = index; i < candidates.size(); i++) {
            if (candidates[i] > target) {
                // If the current candidate is greater than the target, skip it.
                continue;
            }
            if (i > index && candidates[i] == candidates[i - 1]) {
                // Skip duplicates at the same level.
                continue;
            }
            temp.push_back(candidates[i]);
            combo(candidates, target - candidates[i], ans, temp, i + 1);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end()); // Sort to handle duplicates.
        combo(candidates, target, ans, temp, 0);
        return ans;
    }
};