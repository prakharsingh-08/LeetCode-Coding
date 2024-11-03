/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */


class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        Node* curr = head;
        while( curr->next != NULL) {
            if( key == curr->data) {
                return true;
            }
            curr = curr->next;
        }
        return false;
    }
};
