class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;

        for(auto i:s){
            if(i=='#' and !st1.empty()) st1.pop();
            else if(isalpha(i)) {
                st1.push(i);
            }
        }
        for(auto i:t){
            if(i=='#' and !st2.empty()) st2.pop();
            else if(isalpha(i)) st2.push(i);
        }
        while(!st1.empty() and !st2.empty()) {
            char ch1 = st1.top();
            char ch2 = st2.top();
            if(ch1!=ch2) return false;
            st1.pop();
            st2.pop();

        }
        if(!st1.empty() || !st2.empty()) return false;
         return true;

    }
};