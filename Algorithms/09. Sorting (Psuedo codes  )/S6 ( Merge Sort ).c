void merge(int* a, int l, int h)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        merge(a,l,mid);
        merge(a,mid+1,h);
        sort(a,l,mid,h);
    }
}
 void sort(int* a, int l, int mid, int h)
 {
     int b[100];
     int i=l,j=mid+1,k=l;
     while(i<=mid && j<=h)
     {
         if(a[i]<a[j])
         {
             b[k++]=a[i++];
         }
         else
         {
             b[k++]=a[j++];
         }
     }
     while(i<=mid)
     {
         b[k++]=a[i];
         i++;
     }

     while(j<=h)
     {
         b[k++]=a[j];
         j++;
     }
     for(i=l;i<=h;i++)
     {
         a[i]=b[i];
     }
 }
