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
        if(head == NULL){
            return head;
        }
        ListNode* start = head, *delValue = head;
        if(start == NULL && n == 1){
            return NULL;

        } 
        while(n){
            start = start->next;
            n--;
        }
        if(start == NULL) return delValue->next;
        while(start->next){
            start = start->next;
            delValue = delValue->next;
        }
        delValue->next = delValue->next->next;
        return head;
        
    }
};
