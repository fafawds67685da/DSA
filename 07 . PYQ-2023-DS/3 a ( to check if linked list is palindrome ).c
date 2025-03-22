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

void pal(sn*head)
{
    if(head==NULL)
    {
        printf("\t list is empty \n");

    }
    else if(head->next==NULL)
    {
        printf("\t List is palindrome \n");
    }
    else
    {
        sn*p1=head;
        int s=0;
        while(p1!=NULL)
        {
            s=(s*10)+p1->info;
            p1=p1->next;
        }
        int s2=s,s3=0;
        while(s2!=0)
        {
            s3=(s3*10)+s2%10;
            s2=s2/10;
        }
        if(s3==s)
        {
            printf("\t List is palindrome \n");
        }
        else
        {
            printf("\t List is not palindrome \n");
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
        printf("\t Enter 1 to insert at the begining \n\t Enter 2 to display the list \n\t Enter 3 to if list is palindrome \n\t Enter 4 to terminate the code \n");
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
             pal(head);
            break;

        default :
            printf("\t WRONG \n");
            break;
        }
    }
    return 0;
}
