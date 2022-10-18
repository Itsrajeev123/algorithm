

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
SinglyLinkedListNode *tmp1=head,*tmp2=head;
while(tmp1!=NULL && tmp1->next!=NULL){
    tmp1= tmp1->next->next;
    tmp2=tmp2->next;
    if(tmp1==tmp2)
    return 1;
}
return  0;

}

