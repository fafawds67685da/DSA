#include<stdio.h>
#include<stdlib.h>
struct snode
{
    int info;
    struct snode*next;
};
typedef struct snode sn;

sn*insert(sn*head)
{
    sn*p1,*p2;
    p1=(sn*)malloc(sizeof(sn));
    if(p1==NULL)
    {
        printf("\t Memory is not allocated \n");
        return head;
    }
    else
    {
        printf("\t Enter the element \n");
        scanf("%d",&p1->info);
    }
    if(head==NULL)
    {
        head=p1;
        p1->next=NULL;
        return head;
    }
    p2=head;
    while(p2->next!=NULL)
    {
        p2=p2->next;
    }
    p2->next=p1;
    p1->next=NULL;
    return head;
}

sn* merge(sn* head, sn* head2)
{
    sn* p3 = (sn*)malloc(sizeof(sn));
    sn*p4=p3;
    while(head !=NULL && head2!=NULL)
    {
        if(head->info<=head2->info)
        {
            p3->next=head;
            head=head->next;
        }
        else
        {
            p3->next=head2;
            head2=head2->next;
        }
        p3=p3->next;
    }
    if(head!=NULL)
    {
        p3->next=head;
    }
    else
    {
        p3->next=head2;
    }
    return p4->next;    
}
void display(sn*head)
{
    sn*p1;
    p1=head;
    while(p1->next!=NULL)
    {
        printf("%d ",p1->info);
        p1=p1->next;
    }
    printf("%d ",p1->info);
    
}

int main()
{
    sn*head = NULL,*head2=NULL,*head3=NULL;
    int ch=0;
    while(ch!=4)
    {
        printf("\t Enter 1 to insert elements into the first linked list\n\t Enter 2 to insert elements into the 2nd linked list \n\t Enter 3 to merge both the linked list \n\t Enter 4 to display the merged linked list \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                head=insert(head);
                break;
            }

            case 2:
            {
                head2=insert(head2);
                break;
            }

            case 3:
            {
                head3=merge(head,head2);
                break;
            }

            case 4:
            {
                
                display(head3);
                break;
            }

            default:
            {
                printf("\t INVALID CHOICE !! \n");
                break;
            }
        
        }
    }
}
