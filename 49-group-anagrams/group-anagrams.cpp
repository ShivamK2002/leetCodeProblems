class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(auto i:strs){
            
            string temp = i;
            sort(temp.begin(),temp.end());

             mpp[temp].push_back(i);   
            // if(mpp.find(temp)!=mpp.end()){
            // }
            // else {
            //     vector<string> store;
            //     store.push_back(i);
            //     mpp[temp] = store;
            // }
        }      

        vector<vector<string>>ans;
        for(auto i:mpp){
            ans.push_back(i.second);
        }
        return ans;
    }
};