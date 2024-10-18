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

sn*del(sn*head)
{
    if(head==NULL)
    {
        printf("\t list is empty \n");

    }
    else
    {
        int k;
        printf("\t Enter the position at which node is to be deleted \n");
        scanf("%d",&k);
        sn*p1=head,*p2;
        int z=1;
        while(p1!=NULL)
        {

            if(z==k)
            {
                p2->next=p1->next;
                free(p1);
                return head;
            }
            else
            {
                z+=1;
                p2=p1;
                p1=p1->next;
            }
        }
        printf("\t Node was not found \n");
        return head;
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
        printf("\t Enter 1 to insert at the begining \n\t Enter 2 to display the list \n\t Enter 3 to delete a node \n\t Enter 4 to terminate the code \n");
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
             head=del(head);
            break;

        default :
            printf("\t WRONG \n");
            break;
        }
    }
    return 0;
}
