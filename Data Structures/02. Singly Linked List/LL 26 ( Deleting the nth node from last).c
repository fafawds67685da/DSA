sn*dek_nth_last(sn*head)
{
 if(head==NULL)
 {
  printf("\t List is empty \n");
  return head;
 }
 sn*p1=head;
 int z=0;
 while(p1!=NULL)
 {
  z+=1;
  p1=p1->next;
 }
  int y;
  printf("\t Enter the value of n \n");
  scanf("%d",&y);
  if(y>z)
  {
   printf("\t Not enough nodes in the list \n");
   return head;
  }
  if(y==z)
  {
   sn*p2=head;
   head=p2->next;
   free(p2);
   return head;
  }
  z=z-y;
  int c=0;
  sn*p3=head,*p4;
  while(p3!=NULL)
  {
   p4=p3;
   p3=p3->next;
   c+=1;
   if(c==z)
   {
    p4->next=p3->next;
    free(p3);
    return head;
   }
  }

}
