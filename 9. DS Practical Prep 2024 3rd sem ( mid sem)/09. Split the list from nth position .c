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



        case 9:
            split(head,&head2,&head3);
            display(head2);
            printf("\n");
            display(head3);
            break;
