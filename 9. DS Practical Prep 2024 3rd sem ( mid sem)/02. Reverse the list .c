sn*rev(sn*head)
{
    if(head==NULL || head->next==NULL)
    {
        printf("\t Not enough nodes \n");
        return head;
    }
    else
    {
        sn*p1=head,*p2=head,*p3=NULL;
        while(p1->next!=NULL)
        {
            p3=p1->next;
            p1->next=p3->next;
            p3->next=p2;
            p2=p3;


        }
        return p2;
    }
}