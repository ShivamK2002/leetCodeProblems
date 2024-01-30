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
    ListNode* rotateRight(ListNode* head, int k) {
        int n = 0;
        ListNode* temp = head;
        while(temp!=NULL) {
            n++;
            temp = temp->next;
        }
        if(n==0) return head;
        int rotate = k%n;
        if(rotate==0) return head;
        int it = n-rotate-1;

        temp = head;
        while(it--){
            temp = temp->next;
        }
        ListNode* second = temp->next;
        temp->next = NULL;
        temp = second;
        while(temp->next!=NULL){

            temp = temp->next;
        }
        temp->next = head;
        return second;



    }
};