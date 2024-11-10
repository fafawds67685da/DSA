sn* del_bef(sn*head)
{
 sn*p1;
  int k,k2=1;
  if(head == NULL||head->next==head)
  {
   printf("\t List does not have enough nodes \n");
   return head;
  }
  else
  {
  printf("\t Enter the number of node \n");
  scanf("%d",&k);
  sn*p2,*p3;
  p2=head;
  if(k==2)
  {
   p1=p2->next;
   p1->prev=p2->prev;

   while(p2->next!=head)
   {
    p2=p2->next;
   }
    p2->next =p1;
    head=p1;
   return head;
 }
 else
  {
      int z=0;
   while(p2->next!=head)
  {
   if(k==k2)
   {
    p3=p2->prev;
    p1=p3->prev;
    p1->next=p2;
    p2->prev=p1;
    free(p3);
    z=1;
    return head;
   }
   else
   {
       p2=p2->next;
       k2+=1;
   }
  }
  if(k==k2)
   {
    p3=p2->prev;
    p1=p3->prev;
    p1->next=p2;
    p2->prev=p1;
    free(p3);
    z=1;

    return head;
   }
  if(z==0)
  {
      printf("\t The value of k exceeds number of nodes \n");
  }
  return head;
 }
}
