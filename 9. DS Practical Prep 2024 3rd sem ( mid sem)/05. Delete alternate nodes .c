sn*del_alt(sn*head)
{
    if(head==NULL)
    {
        return head;
    }
    else
    {
        int k=1;
        sn*p1=head,*p2;
        while(p1!=NULL)
        {
            if(k%2==0)
            {
                p2->next=p1->next;
                sn*p3=p1;
                p1=p1->next;
                k+=1;
                free(p3);


            }
            else{

                p2=p1;
                p1=p1->next;
                k+=1;
            }

        }
        return head;
    }
}