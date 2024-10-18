sn* delete_beg(sn*head)
{

        if(head==NULL)
        {
        printf("\t list is empty \n");
        }
        else
        {
           sn*p1;
           p1=head;
           head=p1->next;
           p1->next->prev=NULL;
           free(p1);
        }
        return head;

}
