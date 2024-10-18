sn* insert_bef(sn*head)
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
        if(head==NULL)
        {
        printf("\t list is empty \n");
        return head;
        }
        else
        {
        int k;
        printf("\t Enter the elemnt \n");
        scanf("%d",&p1->info);
        printf("\t Enter value of info \n");
        scanf("%d",&k);
        sn*p2,*p3;
        p2=head;
        while(p2!=NULL)
        {
            if(p2->info==k)
            {
                if(head==p2)
                {
                    p2->prev=p1;
                    p1->next=p2;
                    p1->prev=NULL;
                    head=p1;

                }
                else
                {
                p3=p2->prev;
                p3->next=p1;
                p1->prev=p3;
                p1->next=p2;
                p2->prev=p1;
                }

            }
            p2=p2->next;

        }

        return head;

        }
    }
}
