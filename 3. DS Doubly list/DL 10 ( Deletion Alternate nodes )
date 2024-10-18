sn*Del_alt(sn*head)
{
    if(head==NULL||head->next==NULL)
    {
     printf("\t Not enough nodes in the list \n");
     return head;
    }

    int z=1;
    sn*p1=head,*p2,*p3;
    while(p1!=NULL)
    {
     if(z%2==0)
     {
      p2=p1->prev;
      p2->next=p1->next;
      p3=p1;
      p1=p1->next;
      free(p3);
      z+=1;
     }
     else
     {
     z+=1;
     p1=p1->next;
     }
    }
     return head;
}
