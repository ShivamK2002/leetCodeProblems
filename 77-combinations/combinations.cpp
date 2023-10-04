class Solution {
public:
    void combo(vector<vector<int>>&ans,vector<int>&temp,int n, int k, int i){
        if(i>n){

            if(temp.size()==k ) 
            {
                ans.push_back(temp);
              
            }
            return;
        }
        temp.push_back(i);
        combo(ans,temp,n,k,i+1);
       if(!temp.empty()) temp.pop_back();
        combo(ans,temp,n,k,i+1);


    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        // vector<vector<int>>finalAns;
        vector<int> temp;
        combo(ans,temp,n,k,1);

        // for(auto i:ans){
        //     finalAns.push_back(i);
        // }

        return ans;
    }
};