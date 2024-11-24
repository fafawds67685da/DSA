void display (sn*head)
{
    sn*p1;
    p1=head;
    while(p1!=NULL)
    {
        printf("%d ",p1->info);
        p1=p1->next;
    }
    printf("\n");
}
