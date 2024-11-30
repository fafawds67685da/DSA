sn* insert_befn(sn*head)
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
        int k,z=0;
        printf("\t Enter the elemnt \n");
        scanf("%d",&p1->info);
        printf("\t Enter number of node \n");
        scanf("%d",&k);
        sn*p2,*p3;
        p2=head;
        while(p2!=NULL)
        {
            z=z+1;
            if(z==k)
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
