sn * delete_bef(sn*head)
{
    sn *temp,*p1,*p2;
    int k,k2=1;
        printf("\t Enter the value of k \n");
        scanf("%d",&k);
        temp=head;
        if(k==1)
        {
            printf("\t Deletion before 1st node is not possible \n");
            

        }
        else if(k==2)
        {
            head==temp->next;
            free(temp);
            
        }
        else
        {
        while(temp->next!=NULL)
        {
            p1=p2;
            p2=temp;
            temp=temp->next;
            k2+=1;
            if(k2==k)
            {
                p1->next=temp;
                
                
            }
        }
        }// free the deleting node as well
    
           
    return head;
}
