sn* del_af(sn*head)
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
       int z=0;
   while(p2->next->next!=head)
  {

   if(k==k2)
   {
    p3=p2->next;
    p1=p3->next;
    p1->prev=p2;
    p2->next=p1;
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
    p3=p2->next;
    head->prev=p2;;
    p2->next=head;
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

