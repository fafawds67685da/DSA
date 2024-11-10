sn*large_del(sn*head)
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
        sn*p1=head,*p2=NULL,*p3=NULL,*p4=head;
        int z=p1->info;
        while(p1!=NULL)
        {
            if(p1->info>z)
            {
                z=p1->info;
                p3=p2;
                p4=p1;
            }
            p2=p1;
            p1=p1->next;
        }
        if(p3==NULL)
        {
            head=p4->next;
            free(p4);
            return head;
        }
        else
        {
            p3->next=p4->next;
            free(p4);
            return head;
        }
    }
}