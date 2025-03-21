void sec_last(sn*head)
{
    if(head==NULL||head->next==NULL)
    {
        printf("\t since the list has less than 2 elments , second last node does not exist !! \n");
        return ;
    }
    sn*p1,*p2,*p3;
    p1=head;
    p2=p1;
    p3=p2;
    while(p1!=NULL)
    {
        p3=p2;
        p2=p1;
        p1=p1->next;
    }
    printf("%d ",p3->info);
    printf("\n");
}
