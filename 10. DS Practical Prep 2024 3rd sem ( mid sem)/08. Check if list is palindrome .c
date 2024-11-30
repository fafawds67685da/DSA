void pal(sn*head)
{
    sn*p1=head;
    int d=0,s=0;
    while(p1!=NULL)
    {
        s=(s*10)+p1->info;
        p1=p1->next;
    }
    int n=s;
    while(n!=0)
    {
        d=(d*10)+(n%10);
        n=n/10;
    }
    if(d==s)
    {
        printf("\t List is palindrome \n");
    }
    else
    {
        printf("\t List is not palindrome \n");
    }
}