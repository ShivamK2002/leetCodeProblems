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
    void createNew(ListNode* &head,ListNode* &tail,int data){
        ListNode* newNode = new ListNode(data);
        if(head==NULL){
            head = newNode;
            tail = head;
            return;
        }
       else{ 
        tail->next = newNode;
        tail = newNode;
       }
    }
    ListNode* deleteDuplicates(ListNode* head) {
        set<int>st;
        ListNode *temp = head;

        while(temp!=NULL) {
        st.insert(temp->val);
        temp = temp->next;
        }
        ListNode* ans = NULL;
        ListNode* tail = NULL;
        for(auto i:st){ 
            createNew(ans,tail,i);
        }

    return ans;
    }
};