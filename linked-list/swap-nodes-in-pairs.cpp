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
    ListNode* swapPairs(ListNode* head) {
        
        int count = 0;
        ListNode *temp = head;
        while (count < 2)
        {
            if (temp == NULL)
            {
                return head;
            }
            temp = temp->next;
            count++;
        }

        ListNode *junction = swapPairs(temp);
        temp = head;
        count = 0;

        while (count < 2)
        {
            ListNode *next = temp->next;
            temp->next = junction;
            junction = temp;
            temp = next;
            count++;
        }
        return junction; // junction will eventually become the new head;
    
    };
};