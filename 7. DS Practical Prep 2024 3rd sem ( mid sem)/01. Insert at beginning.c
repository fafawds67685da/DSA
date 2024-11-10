sn* insert_beg(sn*head)
{
    sn*p1=head,*p2;

    p2=(sn*)malloc(sizeof(sn));
    if(p2==NULL)
    {
        return head;
    }
    else
    {
        printf("\t Enter the value \n");
        scanf("%d",&p2->info);

        if(p1==NULL)
        {
            head=p2;
            p2->next=NULL;
            return head;
        }
        else
        {
            sn*p3;
            p3=head;
            head=p2;
            p2->next=p3;
            return head;
        }
    }
}
