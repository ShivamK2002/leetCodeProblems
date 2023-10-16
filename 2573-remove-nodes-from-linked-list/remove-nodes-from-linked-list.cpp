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
    void deleteNode(ListNode* curr,ListNode* &head){
        ListNode* forw = curr->next;
        ListNode* temp = head;
        if(temp==curr) 
        {
        head = forw;
        return;
        }
        
        while(temp!=NULL && temp->next!=curr) temp = temp->next;
        temp->next = forw;

    }
    ListNode* removeNodes(ListNode* head) {
        vector<int>ans;
        vector<int>v;

        ListNode* temp = head;
   

    
          while(temp!=NULL){
              v.push_back(temp->val);
            temp = temp->next;
        }
        stack<int>st;
        int n = v.size();
        if(n==0) return head;

        for(int i=n-1; i>=0; i--){
            if(!st.empty() && st.top()<=v[i]){
                while(!st.empty() && st.top()<=v[i]) st.pop();
            }
            if(st.empty()) ans.push_back(0);
            if(!st.empty())ans.push_back(st.top());
            st.push(v[i]);
        }
        reverse(ans.begin(),ans.end());
        temp = head;
        int i=0;
        while(temp!=NULL){
            if(ans[i]!=0) deleteNode(temp,head);
            i++;
            temp = temp->next;
        }
        return head;
    }
};