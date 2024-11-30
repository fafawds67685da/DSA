sn * rev2(sn*head)
{
    sn*p1,*p2,*p3;
    p1=NULL;
    p2=head;
    p3=NULL;
    if(head==NULL)
    {
        printf("\t list is empty \n");
        return head;
    }
    else
    {
        while(p2!=NULL)
        {
            p3=p2->next;
            p2->next=p1;
            p1=p2;
            p2=p3;
        }
        head=p1;
        return head;
    }

}

