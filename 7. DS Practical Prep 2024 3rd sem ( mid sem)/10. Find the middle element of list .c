void mid(sn*head)
{
    if(head==NULL)
    {
        printf("\t List is empty \n");
        return ;
    }
    else if(head->next==NULL || head->next->next==NULL)
    {
        printf("\t Not enough nodes \n");
        return ;
    }
    else
    {
        sn*p1=head;
        int k=0,z=0,y=0;
        while(p1!=NULL)
        {
            k+=1;
            p1=p1->next;
        }
        if(k%2==0)
        {
            z=k/2;
            y=1;
        }
        else
        {
            z=k/2 +1;
            y=0;
        }
        k=1;
        p1=head;
        while(p1!=NULL)
        {
            if(k==z)
            {
                if(y==0)
                {
                    printf("\t The middle element is : %d \n",p1->info);
                    return;
                }
                if(y==1)
                {
                    printf("\t As number of nodes  is even , there is no middle element\n\t Hence, the two middle elements are : %d , %d \n",p1->info,p1->next->info);
                    return;
                }
            }
            p1=p1->next;
            k+=1;
        }

    }
}
