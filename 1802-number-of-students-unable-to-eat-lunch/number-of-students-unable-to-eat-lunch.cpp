class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        stack<int>st;
        int n = students.size();
        int eat = 0;
        int repeat = 0;

        for(auto i:students) q.push(i);
        for(int i=n-1; i>=0; i--) st.push(sandwiches[i]);

        while(!q.empty() && !st.empty() && repeat<n){
            if( q.front()==st.top()) {
                st.pop();
                q.pop();
                eat++;
                repeat = 0;
            }
   
                else
             {
                int ele = q.front();
                q.pop();
                q.push(ele);
                repeat++;

            }

        }
    return n-eat;

    }
};