void push(int *stack,int* top,int a)
{
    if(*top==-1)
    {
        *top=0;
    }
        *(stack+*top)=a;
        *top+=1;
}

int pop(int *stack, int*top)
{
    int z=*(stack+(*top)-1);
    *top-=1;
    return z;
}

void DFS(graph* ver_arr,int n,int a)
{
    int u;
    printf("%d ",a);
    int* stack =(int*)malloc(n*sizeof(int));
    int* visited =(int*)malloc(n+1*sizeof(int));
    for(int i=0;i<n+1;i++)
    {
        *(visited+i)=0;
    }
    visited[a]=1;
    int top=-1;
    push(stack,&top,a);
    int z=1;
    while(z<n)
    {
        u=pop(stack,&top);
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
                        z+=1;
                        visited[p1->ver]=1;
                        push(stack,&top,p1->ver);

                    }
                    p1=p1->next;
                }


            }
            break;
        }
    }
}
