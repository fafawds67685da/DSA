void enque(int *q, int*f, int*r, int a)
{
    if(*f==-1 && *r==-1)
    {
        *f=0;
        *r=0;
    }
        *(q+*r)=a;
        *r+=1;

}

int deque(int *q, int*f)
{
    int z=*(q+*f);
    *f+=1;
    return z;
}

void BFS(graph* ver_arr,int n,int a)
{
    int u;
    printf("%d ",a);
    int* q =(int*)malloc(n*sizeof(int));
    int* visited =(int*)malloc(n+1*sizeof(int));
    for(int i=0;i<n+1;i++)
    {
        *(visited+i)=0;
    }
    visited[a]=1;
    int f=-1,r=-1;
    enque(q,&f,&r,a);

    while(f<=r)
    {
        u=deque(q,&f);
        for(int i=0;i<n;i++)
        {
            if(ver_arr[i].ver==u)
            {
                node*p1=ver_arr[i].head;
                while(p1!=NULL)
                {
                    if(visited[p1->ver]==0)
                    {
                        printf("%d ",p1->ver);
                        visited[p1->ver]=1;
                        enque(q,&f,&r,p1->ver);
                    }
                    p1=p1->next;
                }
            }
        }
    }
}


case 3:
            a=0;
            printf("\t Enter the starting vertex \n");
            scanf("%d",&a);
            BFS(ver_arr,n,a);
            break;
