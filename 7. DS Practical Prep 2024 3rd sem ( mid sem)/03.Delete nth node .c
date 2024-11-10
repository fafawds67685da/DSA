sn*del(sn*head)
{
    if(head==NULL)
    {
        return head;
    }
    else
    {
        int n;
        printf("\t Enter the value of n \n");
        scanf("%d",&n);
        int k=1,z=0;
        sn*p1=head,*p2=NULL;
        if(n==1)
        {
            return head->next;
        }
        while(p1!=NULL)
        {
            if(k==n)
            {
                p2->next=p1->next;
                z+=1;
                return head;
            }
            else
            {
                p2=p1;
                p1=p1->next;
                k+=1;
            }
        }
        if(z==0)
        {
            printf("\t NOT enough nodes \n");
        }
        return head;
    }
}