sn* insert_end(sn*head)
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
        sn* p2;
        p2=head;
        while(p2->next!=NULL)
        {
            p2=p2->next;
        }

            p1->next=NULL;
            p1->prev=p2;
            p2->next=p1;

        }
        return head;
    }
}
