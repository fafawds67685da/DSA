sn * delete_af(sn*head)
{
    sn *temp,*p1,*p2;
        int k,k2=1;
        printf("\t Enter the value of k \n");
        scanf("%d",&k);
        temp=head;
        while(temp->next!=NULL)
        {
            
            temp=temp->next;
            k2+=1;
            if(k2==k)
            {
                p2=temp->next;
                p1=p2->next;;
                temp->next=p1;
                
            }
        }// free the deleting node as well
    
           
    return head;
}
