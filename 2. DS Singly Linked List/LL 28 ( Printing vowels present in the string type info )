#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct snode
{
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

    printf("\t Enter the element \n");
    scanf("%s",&temp->info);
    temp->next=head;
    head = temp;

    }
    return head;
}

void vow(sn*head)
{
    sn*p1=head;
    while(p1!=NULL)
    {
        int z=0;
        int l =strlen(p1->info)-1;
        for(int i=0;i<l;i++)
        {
            if(p1->info[i]=='a'||p1->info[i]=='A'||p1->info[i]=='e'||p1->info[i]=='E'||p1->info[i]=='i'||p1->info[i]=='I'||p1->info[i]=='o'||p1->info[i]=='O'||p1->info[i]=='U'||p1->info[i]=='u')
            {
                z+=1;
            }
        }
        printf("vowel count of %s is %d",p1->info,z);

               printf("\n");
        p1=p1->next;
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
    while(temp->next!=NULL)
    {
        printf("%s ",temp->info);
        temp=temp->next;
    }
    printf("%s ",temp->info);

}
int main()
{
    int ch=0;
    sn *head = NULL;
    while(ch!=4)
    {
        printf("\t Enter 1 to insert at the begining \n\t Enter 2 to display the linked list \n \t Enter 3 to find vowels of the element \n");
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
                vow(head);
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
