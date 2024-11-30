sn* insert_beg(sn*head)
{
 sn*p1;
 p1=(sn*)malloc(sizeof(sn));
 if(p1==NULL)
 {
  printf("\t Memory not allocated \n");
  return head;
 }
 else
 {
  printf("\t Enter the node element \n");
  scanf("%d",&p1->info);
  if(head == NULL)
  {
   head=p1;
   p1->next=p1;
   p1->prev=p1;
   return head;
  }
  sn*p2,*p3;
  p2=head;
  while(p2->next!=head)
  {
   p2=p2->next;
  }
  p3=head;

  p2->next=p1;
  p1->next=p3;
  p3->prev=p1;
  p1->prev=p2;
  head=p1;
  return head;
 }
}
