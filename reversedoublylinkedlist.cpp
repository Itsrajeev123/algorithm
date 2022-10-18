

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts INTEGER_DOUBLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
DoublyLinkedListNode   *next = NULL, *prev = NULL;
    while (head != NULL) {
        next = head->next;
        head->next = prev;
        head->prev = next;
        prev = head;
        head = next;
    }
    return prev;
}

