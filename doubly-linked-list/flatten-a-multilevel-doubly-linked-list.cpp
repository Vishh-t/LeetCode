/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;
        while (curr != NULL) {
            // flatten the list
            if(head==NULL) return head;
            if (curr->child != NULL) {
                Node* next = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;
                // find the tail
                while (curr->next != NULL) {
                    curr = curr->next;
                }
                // connect the tail
                if (next != NULL) {
                    curr->next = next;
                    next->prev = curr;
                }
            }
            curr = curr-> next;
        }
        return head;
    }
};