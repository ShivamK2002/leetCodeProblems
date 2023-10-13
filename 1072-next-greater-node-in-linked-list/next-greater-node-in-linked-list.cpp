/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>arr;
        stack<int>st;
        ListNode* temp = head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n = arr.size();
        vector<int>ans;
        for(int i=n-1; i>=0; i--){
            if(st.empty())
            {
             st.push(arr[i]);
             ans.push_back(0);
            continue;
            }
            else if(!st.empty() && st.top()<=arr[i]) {
                while(!st.empty() && st.top()<=arr[i])
                st.pop();
            }
             if(!st.empty() && st.top()>arr[i] )ans.push_back(st.top());
            else ans.push_back(0);

            st.push(arr[i]);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};