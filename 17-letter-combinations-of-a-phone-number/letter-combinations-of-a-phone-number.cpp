class Solution {
public:
    void solve(string digits,vector<string>&ans,string op,int index,string mpp[]){
        if(index>=digits.size()){
            ans.push_back(op);
            return;
        }
     int num = digits[index]-'0';
     string traverse = "";
     traverse+=mpp[num];

    for(int i=0; i<traverse.size(); i++){
        op.push_back(traverse[i]);
        solve(digits,ans,op,index+1,mpp);
        op.pop_back();
    }
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="")return {};
        vector<string>ans;
        string op = "";
        int index = 0;
        string mpp[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,op,index,mpp);

        return ans;
    }
};