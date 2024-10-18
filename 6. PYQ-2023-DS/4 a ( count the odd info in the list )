#include<stdio.h>
#include<stdlib.h>
struct sn
{
    int info;
    struct sn*next ;
};
typedef struct sn sn;

sn*insert_beg(sn*head)
{
    sn*p1;
    p1=(sn*)malloc(sizeof(sn));
    if(p1==NULL)
    {
        printf("\t Memory not allocated \n");
        return head;
    }
    else
    {
        printf("\t Enter the element \n");
        scanf("%d",&p1->info);
        if(head==NULL)
        {
            head=p1;
            p1->next=NULL;
        }
        else
        {
            sn*p2;
            p2=head;
            head=p1;
            p1->next=p2;
        }
        return head;
    }
}

void odd_info(sn*head)
{
    if(head==NULL)
    {
        printf("\t list is empty \n");

    }
    else
    {
        int k=0;
        sn*p1=head;
        while(p1!=NULL)
        {

            if(p1->info%2 !=0)
            {
                k+=1;
            }
            p1=p1->next;
        }
        printf("\t count of odd info in the list is : %d \n",k);

    }
}


void display(sn*head)
{
    sn*p1;
    p1=head;
    while(p1!=NULL)
    {
        printf("%d ",p1->info);
        p1=p1->next;
    }
}

int main()
{
    int ch=0;
    sn*head =NULL;
    while(ch!=4)
    {
        printf("\t Enter 1 to insert at the begining \n\t Enter 2 to display the list \n\t Enter 3 to count odd info in list \n\t Enter 4 to terminate the code \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            head=insert_beg(head);
            break;

        case 2:
            display(head);
            break;

        case 3:
             odd_info(head);
            break;

        default :
            printf("\t WRONG \n");
            break;
        }
    }
    return 0;
}
