#include<stdio.h>
struct snode
{
    int info;
    struct snode *next;
}s[5];
int main()
{
    struct snode*head = NULL;
    for(int i=0;i<5;i++)
    {
        printf("\t Enter the element \n");
        scanf("%d",&s[i].info);
        s[i].next=head;
        head = &s[i];
    }
    printf("\t elements of linked list are \n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",s[i].info);
    }
    return 0;
}
