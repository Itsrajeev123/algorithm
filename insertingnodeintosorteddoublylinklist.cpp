

/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
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

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode *new = create_doubly_linked_list_node(data);
if(llist==NULL)
return new;
if(new->data<llist->data){
    new->next=llist;
    llist->prev=new;
    llist=new;}
    else{
        DoublyLinkedListNode *temp=llist;
        while(new->data>temp->data){
            if(temp->next==NULL){
                temp->next=new;
                new->prev=temp;
                return llist;
            }
            temp=temp->next;
        }
        temp->prev->next=new;
        new->prev=temp->prev;
        new->next=temp;
        temp->prev=new;
    }
    return llist;
}


