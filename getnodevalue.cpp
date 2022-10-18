

/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
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

int getNode(SinglyLinkedListNode* head, int positionFromTail) {
SinglyLinkedListNode *first=head,*second=head;
int poscount=0;
while(second->next!=NULL){
    second=second->next;
    poscount++;
    if(poscount>positionFromTail)
    first=first->next;
}
return first->data;
}

