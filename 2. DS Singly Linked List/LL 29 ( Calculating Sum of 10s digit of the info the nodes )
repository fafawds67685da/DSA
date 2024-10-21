#include<stdio.h>
#include<stdlib.h>
struct snode
{
    int info;
    struct snode *next;
};

typedef struct snode sn;

sn * insert_beg(sn*head)
{
    sn *temp;
    temp=(sn*)malloc(sizeof(sn));
    if(temp==NULL)
    {
        printf("\t Memory is not allocated \n");
    }
    else
    {

    printf("\t Enter the element \n");
    scanf("%d",&temp->info);
    temp->next=head;
    head = temp;

    }
    return head;
}

void sum(sn*head)
{
    sn*p1=head;
    int s=0,z;
    while(p1!=NULL)
    {
        if(p1->info >9)
        {
            z=p1->info/10;
            z=z%10;
            s=s+z;
        }
        else
        {
            s=s+0;
        }
        p1=p1->next;

    }
    printf("\t Sum of tens digit of nodes info is %d :",s);
    printf("\n");
}

void display(sn* head)
{
    sn*temp;
    temp=head;
    if(temp==NULL)
    {
        printf("\t Linked list is empty \n");
        return;
    }
    while(temp->next!=NULL)
    {
        printf("%d ",temp->info);
        temp=temp->next;
    }
    printf("%d ",temp->info);

}
int main()
{
    int ch=0;
    sn *head = NULL;
    while(ch!=4)
    {
        printf("\t Enter 1 to insert at the begining \n\t Enter 2 to display the linked list \n \t Enter 3 to find sum of tens digit of the number \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                head=insert_beg(head);
                break;
            }


            case 2:
            {
               display(head);
                break;
            }

            case 3:
            {
               sum(head);
                break;
            }

            default:
            {
                printf("\t INVALID CHOICE\n");
                break;
            }
        }
    }
    return 0;
}
