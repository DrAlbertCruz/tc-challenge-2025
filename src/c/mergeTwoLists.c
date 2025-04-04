// A generalized function to push a link to the end of a linked list
void newNode( int newVal, struct ListNode **head ) {
    struct ListNode *newNode = malloc(sizeof(struct ListNode));
    newNode->val = newVal;
    newNode->next = NULL;

    if ( *head == NULL ) {
        *head = newNode;
    }
    else {
        struct ListNode *current = *head;
        while( current->next != NULL ) current = current->next; 
        current->next = newNode;
    }
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    // Edge case, both item are null?
    if ( list1 == NULL && list2 == NULL )
        return NULL;
    
    struct ListNode *head = NULL;
    int list1value, list2value;

    // Initialize the start of the head node.
    while( list1 != NULL || list2 != NULL ) {
        list1value = ( list1 != NULL ) ? list1->val : 51;
        list2value = ( list2 != NULL ) ? list2->val : 51;

        if ( list1value < list2value ) {
            newNode( list1value, &head );
            list1 = list1->next;
        }
        else {
            newNode( list2value, &head );
            list2 = list2->next;
        }
    }

    return head;   
}