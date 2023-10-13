class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s;
        stringstream ss(path);
        string directory, result;
        while (getline(ss, directory, '/')) {
            if (directory == "" || directory == ".") {
                continue;
            } else if (directory == "..") {
                if (!s.empty()) {
                    s.pop();
                }
            } else {
                s.push(directory);
            }
        }
        while (!s.empty()) {
            result = "/" + s.top() + result;
            s.pop();
        }
        return result.empty() ? "/" : result;
    }
};