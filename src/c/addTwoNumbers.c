// A generalized function to push a link to the end of a linked list
void newNode( int newVal, struct ListNode **head ) {
    struct ListNode *newNode = malloc(sizeof(struct ListNode));
    newNode->val = newVal;
    newNode->next = NULL;

    if ( *head == NULL ) {
        // The link was already initialized somehow, but is NULL indicating the list
        // is totally empty
        *head = newNode;
    }
    else {
        // Find the end of the chain
        struct ListNode *current = *head;
        while( current->next != NULL ) current = current->next; 
        current->next = newNode;
    }
}

int getValue(struct ListNode* link) {
    // Edge case,. item is NULL
    return (link == NULL) ? 0 : link->val;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    // Edge case, both item are null?
    if ( l1 == NULL && l2 == NULL )
        return NULL;
    
    struct ListNode *head = NULL;
    int carryOut = 0;

    // Initialize the start of the head node.
    while( l1 != NULL || l2 != NULL ) {
        int arg1 = getValue(l1);
        int arg2 = getValue(l2);
        int result = arg1 + arg2 + carryOut;
        int value = result % 10;
        carryOut = ( result > 9 ) ? 1 : 0; 
        newNode( value, &head );
        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
    }

    // At the end of this, if there is a carry out, push a 1
    if ( carryOut ) newNode( 1, &head );

    return head;
}