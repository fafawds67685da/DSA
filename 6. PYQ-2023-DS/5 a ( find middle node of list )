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

void midd(sn*head)
{
    if(head==NULL||head->next==NULL)
    {
        printf("\t not enough nodes \n");
    }
    else
    {
         sn*p1=head;
         int z=0;
         while(p1!=NULL)
         {
             z+=1;
             p1=p1->next;
         }
         if(z%2==0)
         {
             printf("\t there is no middle elemnt \n");
         }
         else
         {
             int k=z/2;
             z=1;
             p1=head;
             while(p1!=NULL)
             {
                 if(z==k+1)
                 {
                     printf("\t Middle node is : %d \n",p1->info);
                     return ;

                 }
                 else
                 {
                     z+=1;
                     p1=p1->next;
                 }
             }
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
    sn*head =NULL;
    while(ch!=4)
    {
        printf("\t Enter 1 to insert at the begining \n\t Enter 2 to display the list \n\t Enter 3 to find middle elemnt of list \n\t Enter 4 to terminate the code \n");
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
            midd(head);
            break;

        default :
            printf("\t WRONG \n");
            break;
        }
    }
    return 0;
}
