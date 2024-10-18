sn* delete_sec_last(sn*head)
{

        if(head==NULL||head->next==NULL)
        {
        printf("\t Not enough elements in the list \n");
        }
        else if(head->next->next==NULL)
        {
            sn*p2,*p1;
            p2=head->next;
            p1=head;
            head=p2;
            p2->prev=NULL;
            free(p1);

        }
        else
        {
           sn*p1;
           p1=head;
           while(p1->next!=NULL)
           {
            p1=p1->next;
           }
           sn*p2,*p3;
           p2=p1->prev;
           p3=p2->prev;
           p3->next=p1;
           p1->prev=p3;
           free(p2);
        }
        return head;

}
