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

void multi(sn*head,sn*head2)
{
    if(head==NULL||head2==NULL)
    {
        printf("\t list is empty \n");

    }
    else
    {
        int z=1;
        sn*p2=head2;
        sn*p1=head;
        while(p1!=NULL || p2!=NULL)
        {
            z=p1->info*p2->info;

            printf(" %d ",z);

            p1=p1->next;
            p2=p2->next;
        }


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
    sn*head =NULL,*head2=NULL;
    while(ch!=5)
    {
        printf("\t Enter 1 to insert at first list \n\t Enter 2 to insert at second list \n\t Enter 3 to evaluate multiplication of the lists \n\t Enter 4 to display the list \n\t Enter 5 to terminate the code \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            head=insert_beg(head);
            break;

        case 4:
            display(head);
            break;

        case 2:
             head2=insert_beg(head2);
            break;
        case 3:
             multi(head,head2);
             break;

        default :
            printf("\t WRONG \n");
            break;
        }
    }
    return 0;
}
