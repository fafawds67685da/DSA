#include<stdio.h>
#include<stdlib.h>
struct sn
{
    int info;
    struct sn*next;
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
            p1->next=p1;
            return head;
        }
        else
        {
            sn*p2;


            p2=head;
            while(p2->next!=head)
            {
                    p2=p2->next;
            }

            p2->next=p1;
            p1->next =head;
            head=p1;
            return head;

        }

    }
}

void display(sn*head)
{
    sn*p1;
    p1=head->next;
    printf("%d ",head->info);
    while(p1!=head)
    {
        printf("%d ",p1->info);
        p1=p1->next;
    }
}

int main()
{
    int ch=0;
    sn*head =NULL;
    while(ch!=3)
    {
        printf("\t Enter 1 to insert at the begining \n\t Enter 2 to display the list \n\t Enter 3 to terminate the code \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            head=insert_beg(head);
            break;

        case 2:
            display(head);
            break;

        

        default :
            printf("\t WRONG \n");
            break;
        }
    }
    return 0;
}
