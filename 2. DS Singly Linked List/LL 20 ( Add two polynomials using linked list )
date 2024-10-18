#include<stdio.h>
#include<stdlib.h>
struct snode
{
    int coeff;
    int exp;
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
        printf("\t Enter the coefficient \n");
        scanf("%d",&p1->coeff);
        printf("\t Enter the exponent \n");
        scanf("%d",&p1->exp);
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
        if(head->exp<head2->exp)
        {
            p3->next=head2;
            head2=head2->next;
        }
        else if(head->exp>head2->exp)
        {
            p3->next=head;
            head=head->next;
        }
        else
        {
            p3->next=head2;
            head2->coeff=head->coeff + head2->coeff;
            head=head->next;
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
    while(p1!=NULL)
    {
        printf("(%d,%d)",p1->coeff,p1->exp);
        p1=p1->next;
    }


}

int main()
{
    sn*head = NULL,*head2=NULL,*head3=NULL;
    int ch=0;
    while(ch!=4)
    {
        printf("\t Enter 1 to insert elements for first polynomial\n\t Enter 2 to insert elements for 2nd polynomial \n\t Enter 3 to add both the polynomials \n\t Enter 4 to display the resulting polynomial\n");
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
