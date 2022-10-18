

/*
 * Complete the 'removeDuplicates' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
if(head == NULL) 
return head;
    SinglyLinkedListNode* curr = head;
    SinglyLinkedListNode* next = curr->next;
    while(next!= NULL){
        if(curr->data == next->data){
            SinglyLinkedListNode* temp = next;
            next = next->next;
            curr->next = next;
            temp->next = NULL;
            free(temp);
        } 
        else {
            curr= curr->next;
            next= next->next;
        }
    }
    return head;
}

