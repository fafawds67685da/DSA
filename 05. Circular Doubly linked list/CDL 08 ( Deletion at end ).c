sn* del_end(sn*head)
{
  if(head == NULL)
  {
   printf("\t List is empty \n");
   return head;
  }
  if(head->next == head)
  {
   sn*p2=head;
   head=NULL;
   free(p2);
   return head;
  }

  sn*p2,*p3;
  p2=head;
  while(p2->next->next!=head)
  {
   p2=p2->next;
  }
   p3=p2->next;
   p2->next=head;
   head->prev=p2;
   free(p3);
   return head;
 }
