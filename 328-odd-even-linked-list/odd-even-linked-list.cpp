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
    void createNewList(int data,ListNode* &ans, ListNode*&tail){
            ListNode* newNode = new ListNode(data);
            if(ans==NULL){
                ans = newNode;
                tail = ans;
                return;
            }
            tail->next = newNode;
            tail = newNode;
    }
    ListNode* oddEvenList(ListNode* head) {
        ListNode* ans = NULL;
        ListNode* tail = NULL;

        ListNode*temp = head;

        int count = 1;
        while(temp!=NULL){
            if(count&1)createNewList(temp->val,ans,tail);
            temp = temp->next;
            count++;
        }
         count = 1;
         temp = head;
        while(temp!=NULL){
            if(count%2==0)createNewList(temp->val,ans,tail);
            temp = temp->next;
            count++;
        }
        return ans;
    }
};