sn*small2_del(sn*head)
{
    if(head==NULL)
    {
        printf("\t List is empty \n");
        return head;
    }
    else if(head->next==NULL)
    {
        sn*p1=head->next;
        head=NULL;
        free(p1);
        return head;
    }
    else
    {
        sn* p1=head,*p2=NULL,*p3=NULL,*p4=NULL;
        int z=INT_MAX,z2=INT_MAX;

        while(p1!=NULL)
        {
            if(p1->info<z)
            {
                z=p1->info;
            }
            p1=p1->next;
        }

        p1=head;




        while(p1!=NULL)
        {
            if(p1->info>z && p1->info<z2)
            {
                z2=p1->info;

                p4=p3;

                p2=p1;
            }
            p3=p1;
            p1=p1->next;
        }


        if(p2==head)
        {
            head=head->next;
            free(p2);
        }
        else
        {
            p4->next=p2->next;
            free(p2);
        }

        return head;
    }
}
