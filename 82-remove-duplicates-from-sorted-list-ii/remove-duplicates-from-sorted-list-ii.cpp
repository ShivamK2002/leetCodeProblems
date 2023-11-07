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
        vector<int>v;
        ListNode *temp = head;
        if(!head or !head->next) return head;
        int headVal = head->val;
        v.push_back(headVal);
        int prev = headVal;
        temp = temp->next;
        while(temp!=NULL) {
         
            if(temp->val!=prev) {
               v.push_back(temp->val);
               prev = temp->val;
            }
            else if(!v.empty()){
                    if(v.back()==temp->val) {
                    cout<<"ala"<<endl;
                    v.pop_back();
                    }
            
            }
        
        
        temp = temp->next;
        }

        ListNode* ans = NULL;
        ListNode* tail = NULL;
        for(auto i:v){ 
            createNew(ans,tail,i);
        }

    return ans;
    }
};
