sn* asc_sort(sn*head)
{
 if(head==NULL)
 {
  printf("\t List is empty \n");
  return head;
 }
 else
 {
  sn*p1,*p2,*p0;
  p0=NULL;
  p2=head;
  p1=head;
  int z;
  while(p1!=NULL)
  {
   p2=p1;
   int max=999999;
   while(p2!=NULL)
    {
      z=p2->info;
      if(max>z)
      {
       max=z;
       p0=p2;
      }
      p2=p2->next;

    }
    int x=p1->info;
    p1->info = max;
    p0->info=x;
    p1=p1->next;
   }
 return head;
 }
}
