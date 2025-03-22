#include<stdio.h>
#include<stdlib.h>
struct node
{
    int ver,wt;
    struct node* next;
};
typedef struct node node;

struct graph
{
    int ver;
    node* head;
};

typedef struct graph graph;

graph* create_ver(int n)
{
    graph* ver_arr=(graph*)malloc(n*sizeof(graph));

    for(int i=0;i<n;i++)
    {
        printf("\t Enter the %d vertex \n",i+1);
        scanf("%d",&ver_arr[i].ver);
        ver_arr[i].head=NULL;
    }
    return ver_arr;
}

graph* create_edge(graph* ver_arr, int s, int d, int wt, int n)
{
    for(int i=0;i<n;i++)
    {
        if(ver_arr[i].ver==s)
        {
            node* p1=(node*)malloc(sizeof(node));
            p1->next=NULL;
            p1->ver=d;
            p1->wt=wt;
            if(ver_arr[i].head==NULL)
            {
                ver_arr[i].head=p1;
            }
            else
            {
                node* p2=ver_arr[i].head;
                while(p2->next!=NULL)
                {
                    p2=p2->next;
                }
                p2->next=p1;
            }
            return ver_arr;
        }
    }
}

void display(graph* ver_arr, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\t For the vertex %d \n",ver_arr[i].ver);
        node*p1=ver_arr[i].head;
        while(p1!=NULL)
        {
            printf("\t %d--%d-->%d \n",ver_arr[i].ver,p1->wt,p1->ver);
            p1=p1->next;
        }
    }
}

int isit(graph* ver_arr, int n, int a)
{
    for(int i=0;i<n;i++)
    {
        if(ver_arr[i].ver==a)
        {
            return 0;
        }
    }
    return 1;
}

void enque(int *q, int *f, int* r, int a)
{
    if(*f==-1 && *r==-1)
    {
        *f=0;
        *r=0;
    }
    *(q+*r)=a;
    *r+=1;
}

int deque(int *q, int *f)
{
    int z=*f;
    *f+=1;
    return *(q+z);
}

void BFS(graph* ver_arr, int n, int a)
{
    int *q=(int*)malloc(n*sizeof(int));
    int *visited=(int*)malloc(n+1 * sizeof(int));
    for(int i=1;i<=n;i++)
    {
        visited[i]=0;
    }
    printf("%d ",a);
    visited[a]=1;
    int f=-1, r=-1;
    enque(q,&f,&r,a);
    while(f<=r)
    {
        int u=deque(q,&f);
        for(int i=0;i<n;i++)
        {
            if(ver_arr[i].ver==u)
            {
                node*p1=ver_arr[i].head;
                while(p1!=NULL)
                {
                    if(visited[p1->ver]==0)
                    {
                        visited[p1->ver]=1;
                        printf("%d ",p1->ver);
                        enque(q,&f,&r,p1->ver);
                    }
                    p1=p1->next;
                }
                break;
            }
        }
    }

}

void push(int *s, int* top, int a)
{
    if(*top ==-1)
    {
        *top =0;
    }
    *(s+*top)=a;
    *top+=1;
}

int pop(int*s , int* top)
{
    int z=*top;
    *top-=1;
    return *(s+z);
}

void DFS(graph* ver_arr, int n, int a)
{
    int*s =(int*)malloc(n* sizeof(int));
    int* visited =(int*)malloc(n+1 *sizeof(int));
    for(int i=1;i<=n;i++)
    {
        visited[i]=0;
    }
    printf("%d ",a);
    visited[a]=1;
    int top=-1;
    push(s,&top,a);
    while(top>=-1)
    {
        int u = pop(s,&top);
        for(int i=0;i<n;i++)
        {
            if(ver_arr[i].ver==u)
            {
                node* p1=ver_arr[i].head;
                while(p1!=NULL)
                {
                    if(visited[p1->ver]==0)
                    {
                        visited[p1->ver]=1;
                        printf("%d ",p1->ver);
                        push(s,&top,p1->ver);
                        break;
                    }
                    p1=p1->next;
                }
                //break;
            }
        }
    }
}

int main()
{
    int ch=0,n,s,d,wt,a;
    graph* ver_arr;
    printf("\t Enter number of vertexes \n");
    scanf("%d",&n);
    ver_arr=create_ver(n);

    while(ch!=5)
    {
        printf("\t Enter 1 to add edge \n\t Enter 2 to display the graph \n\t Enter 3 for BFS traversal \n\t Enter 4 for DFS traversal \n\t Enter 5 to terminate \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\t Enter the source vertex \n");
            scanf("%d",&s);
            a=isit(ver_arr,n,s);
            if(a==1)
            {
                printf("\t Vertex not found \n");
                break;
            }
            printf("\t Enter the destination vertex \n");
            scanf("%d",&d);
            a=isit(ver_arr,n,d);
            if(a==1)
            {
                printf("\t Vertex not found \n");
                break;
            }
            printf("\t Enter the cost of the path \n");
            scanf("%d",&wt);
            ver_arr=create_edge(ver_arr,s,d,wt,n);
            break;

        case 2:
            display(ver_arr,n);
            break;

        case 3:
            printf("\t Enter the source node \n");
            scanf("%d",&s);
            a=isit(ver_arr,n,s);
            if(a==1)
            {
                printf("\t Not a valid vertex \n");
                break;
            }
            BFS(ver_arr,n,s);
            printf("\n");
            break;

        case 4:
            printf("\t Enter the source node \n");
            scanf("%d",&s);
            a=isit(ver_arr,n,s);
            if(a==1)
            {
                printf("\t Not a valid vertex \n");
                break;
            }
            DFS(ver_arr,n,s);
            printf("\n");
            break;

        case 5:
            break;

        default:
            printf("\t INVALID \n");
            break;
        }
    }
    return 0;
}
