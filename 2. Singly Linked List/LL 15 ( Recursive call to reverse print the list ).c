sn*rev_rec(sn*head)
{
    if(head==NULL)
    {
        
        return head;    
    }
    else
    {
        rev_rec(head->next);
        printf("%d ",head->info);
    }
}
