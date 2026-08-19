/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        // Step 1: Detect cycle and find meeting point
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) {  // Cycle detected!
                // Step 2: Find cycle start
                slow = head;  // Reset slow to head
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;  // Move both one step
                }
                return slow;  // Return the cycle start node
            }
        }
        
        // No cycle found
        return NULL;
    }
};