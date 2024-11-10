sn* rotate_anti_clock(sn*head)
{
 if(head==NULL||head->next==NULL)
 {
  printf("\t Not enough nodes in the Linked list \n");
  return head;
 }
 sn*p1,*p3,*p4;
 int k;
  printf("\t Enter how many times the anti clock wise rotation to be done \n");
  scanf("%d",&k);
  for(int i=1;i<=k;i++)
  {
   sn*p2=head;
   while(p2->next!=NULL)
   {
    p4=p2;
    p2=p2->next;
   }
   p3=head;
   head=p2;
   p2->next=p3;
   p4->next=NULL;

  }
  return head;
 }
