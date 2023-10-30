/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

    void insertAtTail(int data, Node* &tail, Node* &newHead) {
    Node* newNode = new Node(data);
    if (newHead == NULL) {
        newHead = newNode;
        tail = newNode;
    }
     else {
        tail->next = newNode;
        tail = newNode;
    }
}

    Node* copyRandomList(Node* head) {
        Node* temp = head;
        Node* tail = NULL;
        Node* newHead = NULL;

        while(temp!=NULL) {
            insertAtTail(temp->val,tail,newHead);
            temp = temp ->next;
        }


        Node* temp2 = newHead;
        // while(temp2!=NULL){
        //     cout<<temp2->val<<"->"<<endl;
        //     temp2 = temp2->next;
        // }

        unordered_map<Node*,Node*>mpp;

        temp = head;

        while(temp!=NULL){
            mpp[temp] = temp2;
            temp = temp->next;
            temp2 = temp2->next;
        }

        temp2 = newHead;
        temp = head;
        while(temp2!=NULL){
            temp2->random = mpp[temp->random];
            temp = temp->next;
            temp2 = temp2->next;
        }
        return newHead;

    }
};