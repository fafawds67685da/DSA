sn * insert_bef(sn*head)
{
    sn *temp,*p1,*p2;
    p1=(sn*)malloc(sizeof(sn));
    if(p1==NULL)
    {
        printf("\t Memory is not allocated \n");
        return head;
    }
    
    else
    {
        int k,k2=1,item;
        printf("\t Enter the element \n");
        scanf("%d",&item);
        p1->info=item;
        printf("\t Enter the value of k \n");
        scanf("%d",&k);
        temp=head;
        if(k==1)
        {
            head=p1;
            p1->next=temp;

        }
        while(temp->next!=NULL)
        {
            p2=temp;
            temp=temp->next;
            k2+=1;
            if(k2==k)
            {
                p2->next=p1;
                p1->next=temp;
                
            }
        }
    }
           
    return head;
}
