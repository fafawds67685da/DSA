sn*rotate_clock(sn*head)
{
    sn*p1,*p2,*p3;
    p1=head;
    p2=head;
    while(p1->next!=NULL)
    {
        p1=p1->next;
    }
    p3=p2->next;
    head=p3;
    p3->prev = NULL;
    p1->next=p2;
    p2->prev=p1;
    p2->next=NULL;
    return head;
}

