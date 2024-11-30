sn* del_at(sn*head)
{

 sn*p1;
  int k,k2=1;
  if(head == NULL)
  {
   printf("\t List does not have enough nodes \n");
   return head;
  }
  else
  {
  printf("\t Enter the position \n");
  scanf("%d",&k);
  sn*p2,*p3;
  p2=head;
  if(k==1)
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
    p1=p2->next;
    p3->next=p1;
    p1->prev=p3;
    free(p2);
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
    p1=p2->next;
    p3->next=p1;
    p1->prev=p3;
    free(p2);
    z=1;
    return head;
   }
  if(z==0)
  {
      printf("\t The value of postion exceeds number of nodes \n");
  }
  return head;
 }
}
}
