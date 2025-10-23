




void print(Node* head) {
    while (head != nullptr) {
        // Print the data in the current node
        cout << head->data << " "; 
        // Move to the next node
        head = head->next;         
    }
}
Node* deleteHead(Node* head) {
    if (head == nullptr || head->next == nullptr) {
      // Return NULL if the list is empty or contains only one element
        return nullptr; 
    }

   // Store the current head as 'prev'
    Node* prev = head;      
     // Move 'head' to the next node
    head = head->next;    

 // Set 'back' pointer of the new head to nullptr
    head->back = nullptr;   

 // Set 'next' pointer of 'prev' to nullptr
    prev->next = nullptr;  

   // Return the new head
    return head;          
}
