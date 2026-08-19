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
    ListNode* middleNode(ListNode* Head) {
         ListNode *slow = Head;
        ListNode *fast = Head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;       // moves with a speed of +1
            fast = fast->next->next; // moves with a speed of +2
        }
        return slow;
    }
};