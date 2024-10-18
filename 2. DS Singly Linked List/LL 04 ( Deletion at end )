sn * delete_end(sn*head)
{
    sn *temp,*p1;
    temp=head;
    while(temp->next!=NULL)
    {
        p1=temp;
        temp=temp->next;
    }
    p1->next=NULL   ;
    free(temp);
    return head;
}
