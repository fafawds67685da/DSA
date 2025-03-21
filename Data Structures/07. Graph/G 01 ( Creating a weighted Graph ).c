#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int ver;
    int wt;
    struct Node* next;
};
typedef struct Node node;

struct graph
{
    int ver;
    node *head;
};

typedef struct graph graph;

graph* list_vertice(int n)
{
    graph *ver_arr = (graph*)malloc(n*sizeof(graph));

    for(int i=0;i<n;i++)
    {
        ver_arr[i].head=NULL;
    }
    return ver_arr;
}


graph* add_edge(graph* ver_arr, int s, int d, int w,int n)
{
    for(int i=0;i<n;i++)
    {
        if(ver_arr[i].ver == s)
        {
            if(ver_arr[i].head == NULL)
            {
                node* edge = (node*)malloc(sizeof(node));
                edge->ver=d;
                edge->wt=w;
                edge->next=NULL;
                ver_arr[i].head=edge;
            }
            else
            {
                node* p1=ver_arr[i].head;
                while(p1->next!=NULL)
                {
                    p1=p1->next;
                }
                node *edge = (node*)malloc(sizeof(node));
                edge->ver = d;
                edge->wt = w;
                edge->next =NULL;
                p1->next=edge;
            }
        }
    }
    return ver_arr;
}


void display(graph* ver_arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(ver_arr[i].head!=NULL)
            {
                printf("\t For the vertice : %d \n",ver_arr[i].ver);
                node* p1=ver_arr[i].head;
                while(p1!=NULL)
                {
                    printf("\t %d -- %d --> %d \n",ver_arr[i].ver,p1->wt,p1->ver);
                    p1=p1->next;
                }
                printf("\n");
            }
    }
}


int valid(graph* ver_arr,int z,int n)
{
    for(int i=0;i<n;i++)
    {
        if(ver_arr[i].ver==z)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("\t Enter number of vertices \n");
    scanf("%d",&n);
    graph* ver_arr;
    ver_arr = list_vertice(n);
    for(int i =0; i<n ;i++)
    {
        printf("\t Enter the %d vertice \n",i+1);
        scanf("%d",&ver_arr[i].ver);

    }
     printf("\t The vertice are :\n");

    for(int i =0; i<n ;i++)
    {
        printf("\t %d \n",ver_arr[i].ver);

    }

    int ch=0;
    int s,d,w,a=0;
    while(ch!=3)
    {
        printf("\t Enter 1 to add edge \n\t Enter 2 to print the graph \n\t Enter 3 to terminate \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("\t Enter the source node \n");
                scanf("%d",&s);
                a=valid(ver_arr,s,n);
                if(a==1)
                {
                    printf("\t Not a valid source vertex, Try again! \n\n");
                    break;
                }
                printf("\t Enter the destination node \n");
                scanf("%d",&d);
                a=valid(ver_arr,s,n);
                if(a==1)
                {
                    printf("\t Not a valid Destination vertex, Try again! \n\n");
                    break;
                }
                printf("\t Enter the cost of the edge \n");
                scanf("%d",&w);
                ver_arr = add_edge(ver_arr,s,d,w,n);
                break;

            case 2:
                display(ver_arr,n);
                break;

            case 3:
                break;

            default:
                printf("\t INVALID \n");
                break;

        }
    }
    return 0;
}
