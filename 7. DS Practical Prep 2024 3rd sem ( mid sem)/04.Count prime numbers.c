void pc(sn*head)
{
    sn*p1=head;
    int z=0;
    while(p1!=NULL)
    {
        int x=p1->info,a=0;
        for(int i=2;i<x;i++)
        {
            if(x%i==0)
            {
                a+=1;
            }
        }
        if(a==0)
        {
            z+=1;
        }
        p1=p1->next;
    }
    printf("\t Number of prime nodes is %d \n",z);
}