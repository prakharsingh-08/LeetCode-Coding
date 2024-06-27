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
    bool hasCycle(ListNode *head) {

        ListNode* slowPtr = head;
        ListNode* fastPtr = head;

        while(slowPtr != nullptr && fastPtr != nullptr && fastPtr->next != nullptr)
        {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;

            if(slowPtr == fastPtr)
            {
                return true;
            }
        }

        return false;

    }  
};
