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


        case 6:
            eo(head,&head2,&head3);
            display(head2);
            printf("\n");
            display(head3);
            break;