sn* insert_beg(sn* head)
{
    sn* p1=(sn*)malloc(sizeof(sn));
    if(p1==NULL)
    {
        printf("\t Memory not allocated \n");
        return head;
    }
    printf("\t Enter the info \n");
    scanf("%d",&p1->info);
    p1->next=head;
    return p1;
}
