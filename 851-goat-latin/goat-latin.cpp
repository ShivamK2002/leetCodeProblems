class Solution {
public:
    string toGoatLatin(string sentence) {
        
        vector<string>v;

        for(int i=0; i<sentence.size(); i++){
            string temp = "";
            while(sentence[i]!=' ' and i<sentence.size()){
                temp+=sentence[i++];
            }
            v.push_back(temp);
        }

        string ans = "";
        int it = 1;
        for(auto i:v){
            if(i[0]=='a' or i[0]=='e' or i[0]=='i' or i[0]=='o' or i[0]=='u' or i[0]=='A' or i[0]=='E' or i[0]=='O' or i[0]=='U' or i[0]=='I')
            {
                ans+=i;
            }
            else{
                ans+=(i.substr(1,i.size()));
                ans+=i[0];
            }
            ans+="ma";
            int count = it;
            while(count--) ans+='a';
            it++;
         ans+=" ";
            

        }
        ans.pop_back();

            
            return ans;


    }
};