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
        sn*p1=head,*p2=NULL,*p3=NULL,*p4=head,*p5=NULL,*p6=head;
        int z=p1->info,z2=p1->info;
        while(p1!=NULL)
        {
            if(p1->info<z)
            {
                z2=z;
                z=p1->info;
                p5=p3;
                p3=p2;
                p6=p4;
                p4=p1;
            }
            p2=p1;
            p1=p1->next;
        }
        if(p5==NULL)
        {
            head=p6->next;
            free(p6);
            return head;
        }
        else
        {
            p5->next=p6->next;
            free(p6);
            return head;
        }
    }
}
