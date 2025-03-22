sn*del_prime(sn*head)
{
    if(head == NULL)
    {
        printf("\t list is empty \n");
        return head;
    }
    else
    {
        sn*p1=head->next,*p2=head,*p3=head;
        while(p1!=NULL)
        {
            
            int x=p1->info,z=0;
            for(int i=1;i<=x;i++)
            {
                if(x%i==0)
                {
                    z+=1;
                }
            }
            if(z==2)
            {
                p1=p1->next;

                
                
            }
            else
            {
                p2->next=p1;
                p2=p2->next;
            p1=p1->next;

            }
            
            
            z=0;
            p2->next=NULL;
           
        }
        int x=head->info;
        int y=0;
        p3=head;
        for(int i=1;i<=x;i++)
            {
                if(x%i==0)
                {
                    y+=1;
                }
            }
            if(y==2)
            {
                head=p3->next;
            }
        return head;
    }
}
