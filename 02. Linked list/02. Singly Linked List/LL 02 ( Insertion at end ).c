sn * insert_end(sn*head)
{
    sn *temp,*p1;
    int item;
    p1=(sn*)malloc(sizeof(sn));
    if(p1==NULL)
    {
        printf("\t Memory is not allocated \n");
        return head;
    }
    else
    {
        printf("\t Enter the element \n");
        scanf("%d",&item);
    if(head==NULL)
    {
        head=p1;
        p1->info=item;
        p1->next=NULL;
        return head;
    }
    else
    {
        temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    p1->info=item;
    p1->next = NULL;
    temp->next = p1;
    return head;
    }

    }
}
