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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        while(temp!=NULL) {
            count++;
            temp = temp->next;
        }      
        int rm = count-n+1;
            temp = head;

        if(rm==1) return head->next;

        count = 1;
        ListNode* prev = NULL;
        while(count!=rm){
            prev = temp;
            temp = temp->next;
            count++;
        }
        prev->next = temp->next;
        return head;

        
    }
};