SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position)
{
    SinglyLinkedListNode *temp=new SinglyLinkedListNode(data);
    SinglyLinkedListNode *newnode=head;
    for(int i=0;i<position-1;i++)
    {
        newnode=newnode->next;
    }
    SinglyLinkedListNode *t;
    t=newnode->next;
    newnode->next=temp;
    temp->next=t;
    return head;


}
