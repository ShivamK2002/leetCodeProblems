class Solution {
public:
    void generateParentheses(int n, int open, int close, string temp, vector<string>& result) {
        if (open == n && close == n) {
            result.push_back(temp);
            return;
        }

        if (open < n) {
        
            generateParentheses(n, open + 1, close, temp+'(', result);
        }

        if (close < open) {

            generateParentheses(n, open, close + 1, temp+')', result);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string temp = "";
        generateParentheses(n, 0, 0, temp, result);
        return result;
    }
};
