sn* insert_beg(sn*head)
{
    sn*p1;
    p1=(sn*)malloc(sizeof(sn));
    if(p1==NULL)
    {
        printf("\t Memory not allocated \n");
        return head;
    }
    else
    {
        printf("\t Enter the elemnt \n");
        scanf("%d",&p1->info);
        if(head==NULL)
        {
        p1->prev=NULL;
        p1->next=NULL;
        head=p1;
        }
        else
        {
            head->prev=p1;
            p1->prev=NULL;
            p1->next=head;
            head=p1;
        }
        return head;
    }
}
