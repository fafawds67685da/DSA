sn* insert_af(sn*head)
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
  int k,k2=1;
  if(head == NULL)
  {
   printf("\t List is empty \n");
   return head;
  }
  else
  {
  printf("\t Enter the number of node \n");
  scanf("%d",&k);
  sn*p2,*p3;
  p2=head;
   int z=0;
   while(p2->next!=head)
  {
   if(k==k2)
   {
    p3=p2->next;
    p1->next=p3;
    p3->prev=p1;
    p2->next=p1;
    p1->prev=p2;
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
    p3=p2->next;
    p1->next=p3;
    p3->prev=p1;
    p2->next=p1;
    p1->prev=p2;
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
}
