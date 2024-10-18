sn * rev(sn*head)
{
    sn *temp,*p1,*p2,*p3;
    temp =head->next;
    p1=head;
    p1->next=NULL;
    p2=temp;
    while(p2->next!=NULL)
    {
        
        p3=head;
        temp=p2->next;
        
        p2->next=p3;
        p1=p2;
        p2=temp;
       

    }
       p2->next=p1;
       head=p2;
    return head;
}
