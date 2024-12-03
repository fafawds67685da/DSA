int partition(int a[],int l,int h)
{
    int pivot = a[l];
    int i =l,j=h;
    do
    {
        do
        {
            i++;
        } while(a[i]<=pivot);


        do
        {
            j--;
        } while (a[j]>pivot);


        if(i<j)
        {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;

        }
    }while (i<j);

    int t=a[l];
    a[l]=a[j];
    a[j]=t;
    return j;

}

void quick(int *arr, int l, int h)
{
    int j;
    if(l<h)
    {
        j=partition(arr,l,h);
        quick(arr,l,j);
        quick(arr,j+1,h);
    }
}

case 6:
            quick(arr,0,n);
            break;
