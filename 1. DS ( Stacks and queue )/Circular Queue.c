#include<stdio.h>
#define max 5
void enqueue(int*p,int *f , int*r)
{
    if(*f==(*r+1)%max)
    {
        printf("\t Queue overflow \n");
        return ;
    }
    if(*r==-1&&*f==-1)
    {
        int item;
        *f=*r=0;
        printf("\t Enter the element \n");
        scanf("%d",&item);
        *(p+*r)=item;
    }
    else
    {
        int item;
        *r=(*r+1)%max;
        printf("\t Enter the element \n");
        scanf("%d",&item);
        *(p+*r)=item;
    }
}

void dequeue(int*p,int *f,int *r)
{
    if(*r==-1&&*f==-1)
    {
        printf("\t Queue underflow \n");
        return ;
    }
    if(*f==*r)
    {
        *f=*r=-1;
    }
    else
    {
        *f=(*f+1)%max;
    }
}

void traverse(int *p,int*f,int*r)
{
    if(*r==-1&&*f==-1)
    {
        printf("\t Queue is empty \n");
        return ;
    }
    else
    {
        int i;
        for(i=*f;i!=*r;i=(i+1)%max)
        {
            printf("%d ",*(p+i));
        }
        printf("%d ",*(p+i));
    }
}

int main()
{
    int front,rear;
    front=rear=-1;
    int ar[max];
    int *p=ar;
    int ch=0;
    while(ch!=3)
    {
        printf("\t Enter 1 for insertion \n Enter 2 for deletion \n Enter 3 for display \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                enqueue(p,&front,&rear);
                break;
            }
            case 2:
            {
                dequeue(p,&front,&rear);
                break;
            }
            case 3:
            {
                traverse(p,&front,&rear);
                break;
            }
            default:
            {
                printf("\t INVALID CHOICE \n");
                break;
            }
        }
    }

 return 0;
}
