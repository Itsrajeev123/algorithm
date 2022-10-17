 

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
SinglyLinkedListNode* insertNode=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
SinglyLinkedListNode* trav=llist;
insertNode->data=data;
for(int i=1;i<position;i++){
    trav=trav->next;
}
insertNode->next=trav->next;
trav->next=insertNode;
return llist;


}

