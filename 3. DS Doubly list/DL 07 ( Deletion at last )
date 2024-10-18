
sn* delete_end(sn*head)
{

        if(head==NULL)
        {
        printf("\t list is empty \n");
        }
        else
        {
           sn*p1;
           p1=head;
           while(p1->next!=NULL)
           {
            p1=p1->next;
           }
           p1->prev->next=NULL;
           free(p1);
        }
        return head;

}
