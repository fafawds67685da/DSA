void push(int *s, int *top, int a)
{
    if(*top==-1)
    {
        *top=0;
    }
    *(s+*top)=a;
    *top+=1;
}

int pop(int *s, int*top)
{
    int z =*top;
    *top -=1;
    return *(s+z);
}
void DFS(graph* ver_arr, int n, int a)
{
    int* s=(int*)malloc(n*sizeof(int));
    int* visited = (int*)malloc(n+1 * sizeof(int));
    for(int i=1;i<=n;i++)
    {
        visited[i]=0;
    }
    printf("%d ",a);
    visited[a]=1;
    int top=-1;
    push(s,&top,a);
    while(top>=0)
    {
        int u=pop(s,&top);
        //printf("%d",u);
        for(int i=0;i<n;i++)
        {
            if(ver_arr[i].ver==u)
            {
                node*p1=ver_arr[i].head;
                while(p1!=NULL)
                {
                    int vert=p1->ver;
                    if(visited[vert]==0)
                    {
                        printf("%d ",vert);
                        push(s,&top,vert);
                        visited[vert]=1;
                        break;
                    }
                    p1=p1->next;



                }
            }
        }
    }

}
