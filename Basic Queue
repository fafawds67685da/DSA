#include<stdio.h>
#include<stdlib.h>

void enque(int *f,int *r,int *p,int n)
{
    if(*r==n-1)
    {
        printf("\t Queue overflow \n");
        return ;
    }
    else
    {
        if(*f==*r==-1)
        {
            f=r=0;
        }
        printf("\t Enter the element \n");
        scanf("%d",(p+(*r)));
        *r+=1;
    }
}

void deque(int *f,int *r,int *p)
{
    if(*r==*f)
    {
        printf("\t Queue underflow \n");
        return ;
    }
    else
    {
        printf("\t %d \n",*(p+(*f)));
        *f+=1;
    }
}

void display(int *f,int *r,int *p)
{
    for(int i=*f;i<*r;i++)
    {
        printf("%d ",*(p+i));
    }
}


int main()
{
    int *p;
    int n,r=-1,f=-1;
    printf("\t Enter the size of queue \n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    int ch=0;
    while(ch!=4)
    {

    printf("\t Enter 1 to enque \n\t Enter 2 to deque \n\t Enter 3 to display \n\t Enter 4 to end \n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        enque(&f,&r,p,n);
        break;
    case 2:
        deque(&f,&r,p);
        break;
    case 3:
        display(&f,&r,p);
        break;
    default :
        printf("\t WRONG \n");
        break;
    }
    }

    return 0;
}
