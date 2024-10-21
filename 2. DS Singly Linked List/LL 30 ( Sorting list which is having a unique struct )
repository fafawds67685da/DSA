#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct snode
{
    int roll;
    int marks;
    char info[100];
    struct snode *next;
};

typedef struct snode sn;

sn * insert_beg(sn*head)
{
    sn *temp;
    temp=(sn*)malloc(sizeof(sn));
    if(temp==NULL)
    {
        printf("\t Memory is not allocated \n");
    }
    else
    {
    printf("\t Enter the roll no \n");
    scanf("%d",&temp->roll);
    printf("\t Enter the marks \n");
    scanf("%d",&temp->marks);
    printf("\t Enter the name \n");
    scanf("%s",&temp->info);
    temp->next=head;
    head = temp;

    }
    return head;
}

sn*sort(sn*head)
{


 if(head==NULL)
 {
  printf("\t List is empty \n");
  return head;
 }
 else
 {
  sn*p1,*p2,*p0;
  p0=NULL;
  p2=head;
  p1=head;
  int z;
  while(p1!=NULL)
  {
   p2=p1;
   int max=999999;
   while(p2!=NULL)
    {
      z=p2->marks;
      if(max>z)
      {
       max=z;
       p0=p2;
      }
      p2=p2->next;

    }
    int x=p1->marks;
    p1->marks = max;
    p0->marks=x;
    p1=p1->next;
   }
 return head;
 }

}

void display(sn* head)
{
    sn*temp;
    temp=head;
    if(temp==NULL)
    {
        printf("\t Linked list is empty \n");
        return;
    }
    while(temp!=NULL)
    {
    printf("\t the roll no of student is :%d \n",temp->roll);
    printf("\t the marks  of student is  :%d \n",temp->marks);
    printf("\t the name of student is    :%s\n",temp->info);
    printf("\n");
        temp=temp->next;
    }


}
int main()
{
    int ch=0;
    sn *head = NULL;
    while(ch!=2)
    {
        printf("\t Enter 1 to insert at the begining \n\t Enter 2 to display the linked list \n \t Enter 3 to sort the list according to marks \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                head=insert_beg(head);
                break;
            }


            case 2:
            {
               display(head);
                break;
            }

            case 3:
            {
                head=sort(head);
                break;
            }

            default:
            {
                printf("\t INVALID CHOICE\n");
                break;
            }
        }
    }
    return 0;
}
