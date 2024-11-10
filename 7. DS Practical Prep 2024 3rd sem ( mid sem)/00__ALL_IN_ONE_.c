#include<stdio.h>
#include<stdlib.h>

struct snode
{
    int info;
    struct snode *next;

};

typedef struct snode sn;

sn* insert_beg(sn*head)
{
    sn*p1=head,*p2;

    p2=(sn*)malloc(sizeof(sn));
    if(p2==NULL)
    {
        return head;
    }
    else
    {
        printf("\t Enter the value \n");
        scanf("%d",&p2->info);

        if(p1==NULL)
        {
            head=p2;
            p2->next=NULL;
            return head;
        }
        else
        {
            sn*p3;
            p3=head;
            head=p2;
            p2->next=p3;
            return head;
        }
    }
}

sn*rev(sn*head)
{
    if(head==NULL || head->next==NULL)
    {
        printf("\t Not enough nodes \n");
        return head;
    }
    else
    {
        sn*p1=head,*p2=head,*p3=NULL;
        while(p1->next!=NULL)
        {
            p3=p1->next;
            p1->next=p3->next;
            p3->next=p2;
            p2=p3;


        }
        return p2;
    }
}

sn*del(sn*head)
{
    if(head==NULL)
    {
        return head;
    }
    else
    {
        int n;
        printf("\t Enter the value of n \n");
        scanf("%d",&n);
        int k=1,z=0;
        sn*p1=head,*p2=NULL;
        if(n==1)
        {
            return head->next;
        }
        while(p1!=NULL)
        {
            if(k==n)
            {
                p2->next=p1->next;
                z+=1;
                return head;
            }
            else
            {
                p2=p1;
                p1=p1->next;
                k+=1;
            }
        }
        if(z==0)
        {
            printf("\t NOT enough nodes \n");
        }
        return head;
    }
}

sn*del_alt(sn*head)
{
    if(head==NULL)
    {
        return head;
    }
    else
    {
        int k=1;
        sn*p1=head,*p2;
        while(p1!=NULL)
        {
            if(k%2==0)
            {
                p2->next=p1->next;
                sn*p3=p1;
                p1=p1->next;
                k+=1;
                free(p3);


            }
            else{

                p2=p1;
                p1=p1->next;
                k+=1;
            }

        }
        return head;
    }
}

void pc(sn*head)
{
    sn*p1=head;
    int z=0;
    while(p1!=NULL)
    {
        int x=p1->info,a=0;
        for(int i=2;i<x;i++)
        {
            if(x%i==0)
            {
                a+=1;
            }
        }
        if(a==0)
        {
            z+=1;
        }
        p1=p1->next;
    }
    printf("\t Number of prime nodes is %d \n",z);
}

void eo(sn*head,sn**head2,sn**head3)
{
    sn*p1=head;
    if(p1!=NULL)
    {
        while(p1!=NULL)
        {
            sn*temp=(sn*)malloc(sizeof(sn));
            temp->info=p1->info;
            temp->next=NULL;
            if(p1->info%2==0)
            {

                if(*head2==NULL)
                {
                    *head2=temp;
                    temp->next=NULL;
                }
                else
                {
                    sn*p5;
                    p5=*head2;
                    *head2=temp;
                    temp->next=p5;
                }
            }
            else
            {
                if(*head3==NULL)
                {
                    *head3=temp;
                    temp->next=NULL;
                }
                else
                {
                    sn*p5;
                    p5=*head3;
                    *head3=temp;
                    temp->next=p5;
                }
            }
            p1=p1->next;
        }
    }
}

sn*dup(sn*head)
{
    sn*p1=head,*p2;
    if(p1==NULL||p1->next==NULL)
    {
        return head;
    }
    else
    {
        p2=p1;
        p1=p1->next;
        while(p1!=NULL)
        {
            if(p2->info==p1->info)
            {
                sn*temp;
                temp=p1;
                p2->next=p1->next;
                p1=p1->next;
                free(temp);
            }
            else
            {
                p2=p1;
                p1=p1->next;
            }
        }
        return head;
    }
}

void pal(sn*head)
{
    sn*p1=head;
    int d=0,s=0;
    while(p1!=NULL)
    {
        s=(s*10)+p1->info;
        p1=p1->next;
    }
    int n=s;
    while(n!=0)
    {
        d=(d*10)+(n%10);
        n=n/10;
    }
    if(d==s)
    {
        printf("\t List is palindrome \n");
    }
    else
    {
        printf("\t List is not palindrome \n");
    }
}

void split(sn*head,sn**head2,sn**head3)
{
    if(head==NULL||head->next==NULL)
    {
        printf("\t NOt enough nodes \n");

    }
    else
    {
        int n;
        printf("\t Enter value of n \n");
        scanf("%d",&n);
        int k=1,z=0;
        sn*p1=head;
        while(p1!=NULL)
        {
            if(k==n)
            {
                *head2=head;
                *head3=p1->next;
                p1->next=NULL;

                return;

            }
            else
            {
                p1=p1->next;
                k+=1;

            }
        }
        if(z==0)
        {
            printf("\t value of n exceeds number of nodes \n");
        }
    }
}

void mid(sn*head)
{
    if(head==NULL)
    {
        printf("\t List is empty \n");
        return ;
    }
    else if(head->next==NULL || head->next->next==NULL)
    {
        printf("\t Not enough nodes \n");
        return ;
    }
    else
    {
        sn*p1=head;
        int k=0,z=0,y=0;
        while(p1!=NULL)
        {
            k+=1;
            p1=p1->next;
        }
        if(k%2==0)
        {
            z=k/2;
            y=1;
        }
        else
        {
            z=k/2 +1;
            y=0;
        }
        k=1;
        p1=head;
        while(p1!=NULL)
        {
            if(k==z)
            {
                if(y==0)
                {
                    printf("\t The middle element is : %d \n",p1->info);
                    return;
                }
                if(y==1)
                {
                    printf("\t As number of nodes  is even , there is no middle element\n\t Hence, the two middle elements are : %d , %d \n",p1->info,p1->next->info);
                    return;
                }
            }
            p1=p1->next;
            k+=1;
        }

    }
}

sn*small_del(sn*head)
{
    if(head==NULL)
    {
        printf("\t List is empty \n");
        return head;
    }
    else if(head->next==NULL)
    {
        sn*p1=head->next;
        head=NULL;
        free(p1);
        return head;
    }
    else
    {
        sn*p1=head,*p2=NULL,*p3=NULL,*p4=head;
        int z=p1->info;
        while(p1!=NULL)
        {
            if(p1->info<z)
            {
                z=p1->info;
                p3=p2;
                p4=p1;
            }
            p2=p1;
            p1=p1->next;
        }
        if(p3==NULL)
        {
            head=p4->next;
            free(p4);
            return head;
        }
        else
        {
            p3->next=p4->next;
            free(p4);
            return head;
        }
    }
}

sn*large_del(sn*head)
{
    if(head==NULL)
    {
        printf("\t List is empty \n");
        return head;
    }
    else if(head->next==NULL)
    {
        sn*p1=head->next;
        head=NULL;
        free(p1);
        return head;
    }
    else
    {
        sn*p1=head,*p2=NULL,*p3=NULL,*p4=head;
        int z=p1->info;
        while(p1!=NULL)
        {
            if(p1->info>z)
            {
                z=p1->info;
                p3=p2;
                p4=p1;
            }
            p2=p1;
            p1=p1->next;
        }
        if(p3==NULL)
        {
            head=p4->next;
            free(p4);
            return head;
        }
        else
        {
            p3->next=p4->next;
            free(p4);
            return head;
        }
    }
}


void display(sn*head)
{
    sn*p1=head;
    if(p1==NULL)
    {
        printf("\t List is empty ! \n");
    }

    else
    {
        while(p1!=NULL)
        {
            printf("%d ",p1->info);
            p1=p1->next;
        }
    }
}

int main()
{
    sn*head=NULL;
    sn*head2=NULL,*head3=NULL;
    int ch=0;
    while(ch!=13)
    {
        printf("\t Enter 1 to insert at the beginning \n\t Enter 2 to reverse the list \n\t Enter 3 to Delete the n th node \n\t Enter 4 to count prime numbers \n\t Enter 5 to delete alternate nodes \n\t Enter 6 to divide list into odd and even \n\t Enter 7 to delete duplicate nodes in sorted list \n\t Enter 8 to check if list is palindrome \n\t Enter 9 to split list at nth position \n\t Enter 10 find middle element of the list \n\t Enter 11 to delete the smallest node \n\t Enter 12 to delete the largest node \n\t Enter 13 to display the list \n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            head=insert_beg(head);
            break;

        case 2:
            head=rev(head);
            break;

        case 3:
            head=del(head);
            break;

        case 4:
            pc(head);
            break;

        case 5:
            head=del_alt(head);
            break;

        case 6:
            eo(head,&head2,&head3);
            display(head2);
            printf("\n");
            display(head3);
            break;

        case 7:
            head=dup(head);
            break;

        case 8:
            pal(head);
            break;

        case 9:
            split(head,&head2,&head3);
            display(head2);
            printf("\n");
            display(head3);
            break;

        case 10:
            mid(head);
            break;

        case 11:
            head=small_del(head);
            break;

        case 12:
            head=large_del(head);
            break;

        case 13:
            display(head);
            break;

        default:
            printf("\t INVALID \n");
            break;
        }
    }
    return 0;
}
