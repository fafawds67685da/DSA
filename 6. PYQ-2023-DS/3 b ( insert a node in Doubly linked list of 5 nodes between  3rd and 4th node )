#include<stdio.h>
#include<stdlib.h>
struct sn
{
    struct sn *prev;
    int info;
    struct sn *next;
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
            p1->prev=NULL;
            p1->next=NULL;
        }
        else
        {
            sn*p2=head;
            p1->next=head;
            head=p1;

            p1->prev=NULL;
            p2->prev=p1;
        }



    }
    return head;
}

sn*insert_at(sn*head)
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
        int k=3;
        sn*p2=head;
        int z=1;
        while(p2!=NULL)
        {
            if(z==k)
            {
                sn*p3=p2->next;
                p1->prev=p2;
                p2->next=p1;
                p3->prev=p1;
                p1->next=p3;
                return head;
            }
            else
            {
                z+=1;
                p2=p2->next;
            }
        }

    }
    return head;
}

void display(sn*head)
{
    if(head==NULL)
    {
        printf("\t list is empty \n");

    }
    else
    {
        sn*p1=head;
        while(p1!=NULL)
        {
            printf("%d ",p1->info);
            p1=p1->next;
        }
    }
}
int main()
{
    int ch=0;
    sn*head =NULL;
    while(ch!=4)
    {
        printf("\t Enter 1 to insert at the begining \n\t Enter 2 to display the list \n\t Enter 3 to insert between  \n\t Enter 4 to terminate the code \n");
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
            head =insert_at(head);
            break;

        default :
            printf("\t WRONG \n");
            break;
        }
    }
    return 0;
}
