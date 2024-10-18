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

sn*div_list(sn*head)
{
    if(head ==NULL||head->next ==NULL)
    {
        printf("\t insufficient nodes \n");
        return NULL;
    }
    else
    {
        int k;
        printf("\t Enter the position after which the list will be divided \n");
        scanf("%d",&k);
        int z=1,y=0;
        sn*p1=head;
        while(p1!=NULL)
        {
            if(z==k)
            {
                y+=1;
                sn*p2=p1->next;
                p1->next=NULL;
                return p2;
            }
            else
            {
                z+=1;
                p1=p1->next;
            }
        }
        if(y==0)
        {
                    printf("\t insufficient nodes \n");
                    return NULL;
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
    while(ch!=4)
    {
        printf("\t Enter 1 to insert at the begining \n\t Enter 2 to display the list \n\t Enter 3 to divide the list \n\t Enter 4 to terminate the code \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            head=insert_beg(head);
            break;

        case 2:
            display(head);
            printf("\n");
            display(head2);
            break;

        case 3:
            head2 =div_list(head);
            break;

        default :
            printf("\t WRONG \n");
            break;
        }
    }
    return 0;
}
