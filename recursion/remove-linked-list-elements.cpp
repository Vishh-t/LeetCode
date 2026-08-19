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
    ListNode* removeElements(ListNode* Head, int val) {
         if (Head == NULL)
            return Head;

        // Remove all matching nodes from the front
        while (Head != NULL && Head->val == val) {
            ListNode* del = Head;
            Head = Head->next;
            delete del;
        }

        // If list becomes empty
        if (Head == NULL)
            return Head;

        ListNode* temp = Head;
        while (temp != NULL && temp->next != NULL) {
            if (temp->next->val == val) {
                ListNode* del = temp->next;
                temp->next = temp->next->next;
                delete del;
            } else {
                temp = temp->next;
            }
        }

        return Head;
    
    };
};