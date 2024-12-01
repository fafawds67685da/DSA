int is_it(int *q,int z,int a,int b)
{
    for(int i=0;i<=b;i++)
    {
        if(*(q+i)==z)
        {
            return 0;
        }
    }
    return 1;
}

BFS(graph* ver_arr, int n)
{
    int*q =(int*)malloc(n*sizeof(int));
    *q=ver_arr[0].ver;

    int front=1,rear=n-1;
    for(int i=0;i<n;i++)
    {
        node*p1 = ver_arr[i].head;
        int v = ver_arr[i].ver;
        int x= is_it(q,v,front,rear);
            if(x==1)
            {
                *(q+front)=v;
                front+=1;
            }

        while(p1!=NULL)
        {
            int x= is_it(q,p1->ver,front,rear);
            if(x==1)
            {
                *(q+front)=p1->ver;
                front+=1;
            }
            p1=p1->next;
        }


    }
    printf("\t BFS \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(q+i));
    }

}
