sn* rotate_clock(sn*head)
{
 if(head==NULL||head->next==NULL)
 {
  printf("\t Not enough nodes in the Linked list \n");
  return head;
 }
 sn*p1,*p3;
 int k;
  printf("\t Enter how many times the clock wise rotation to be done \n");
  scanf("%d",&k);
  for(int i=1;i<=k;i++)
  {
   sn*p2=head;
   while(p2->next!=NULL)
   {
    p2=p2->next;
   }
   p3=head;
   head=p3->next;
   p2->next=p3;
   p3->next=NULL;

  }
  return head;
 }
