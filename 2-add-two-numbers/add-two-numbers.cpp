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

    void createNewList(int data,ListNode* &head,ListNode*&tail,bool &flag){
        if(flag) {
            data+=1;
            flag = false;
        }
        if(data>=10) {
            flag = true;
            data%=10;
        }
        ListNode* newNode = new ListNode(data);
        if(head==NULL) {
            head = newNode;
            tail = head;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* tail = head;

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        bool flag;
        while(temp1!=NULL and temp2!=NULL){

            createNewList(temp1->val+temp2->val,head,tail,flag);
            temp1= temp1->next;
            temp2= temp2->next;

        }
        while(temp1!=NULL){

            createNewList(temp1->val,head,tail,flag);
            temp1= temp1->next;

        }
        while(temp2!=NULL){

            createNewList(temp2->val,head,tail,flag);
            temp2= temp2->next;

        }
    if(flag) tail->next = new ListNode(1);
    return head;

    }
};