sn* insert_as(sn*head)
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
  sn*p2,*p3=head;
  if(head==NULL)
  {
  head=p1;
  p1->next=NULL;
  }
  else
  {
   p2=head;
   int z=0;
   while(p2!=NULL)
   {

    if(p2->info>p1->info)
    {
        if(p2==head)

        {
            head=p1;
            p1->next=p2;
            z+=1;
            break;
        }
     p3->next=p1;
     p1->next=p2;
     z+=1;
     break;
    }
    else
    {
        p3=p2;
        p2=p2->next;

    }
   }
   if(z==0)
   {
       p3->next=p1;
       p1->next=NULL;
   }
  return head;
 }
}
}
