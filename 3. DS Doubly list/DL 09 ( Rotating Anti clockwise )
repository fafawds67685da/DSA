sn*rotate_anti_clock(sn*head)
{
    sn*p1,*p2,*p3;
    p1=head;
    p2=head;
    while(p1->next!=NULL)
    {
        p1=p1->next;
    }
    p3=p1;
    p1->prev->next=NULL;
    head=p3;
    p3->prev=NULL;
    p3->next=p2;
    return head;
}
