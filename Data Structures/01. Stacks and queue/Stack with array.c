#include<stdio.h>
#include<stdlib.h>

 void push(int *top,int *p,int n)
{

    if(*top==n-1)
    {
        printf("\t Stack overflow \n");
        return;
    }
    else
    {
        *top+=1;
        printf("\t Enter element \n");
        scanf("%d",p+(*top));
    }
    }

void  pop(int *top,int *p)
{
    if(*top==-1)
    {
        printf("\t stack underflow \n");
        return;
    }
    printf("%d ",*(p+*top));

    *top-=1;

}

void display(int top,int *p)
{
    for (int i=top;i>=0;i--)
    {
        printf("%d ",*(p+i));


    }
}
int main()
{
    int *p;
    int n,top=-1;
    printf("\t Enter the size of stack \n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    int ch=0;
    while(ch!=4)
    {

    printf("\t Enter 1 to push \n\t Enter 2 to pull \n\t Enter 3 to display \n\t Enter 4 to end \n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        push(&top,p,n);
        break;
    case 2:
        pop(&top,p);
        break;
    case 3:
        display(top,p);
        break;
    default :
        printf("\t WRONG \n");
        break;
    }
    }

    return 0;
}
