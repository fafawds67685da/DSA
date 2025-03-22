#include<stdio.h>
#include<stdlib.h>

int* selection(int* a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int y=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[y])
            {
                y=j;
            }
        }
        int t=a[i];
        a[i]=a[y];
        a[y]=t;
    }
    return a;
}

int* bubble(int* a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                int t=a[j];
                a[j] = a[j+1];
                a[j+1]=t;
            }
        }
    }
    return a;
}

int* insertion (int* a, int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int y=a[i];
        while(j>=0 && a[j]>y)
        {
            a[j+1]=a[j];
            j-=1;
        }
        a[j+1]=y;
    }
    return a;
}

void quick(int* a, int l, int h)
{
    int j;
    if(l<h)
    {
        j = partition(a,l,h);
        quick(a,l,j);
        quick(a,j+1,h);
    }
}

int partition(int* a, int l, int h)
{
    int pivot = a[l];
    int i=l,j=h;
    do
    {
        do
        {
            i++;
        }while(a[i]<=pivot);

        do
        {
            j--;
        }while(a[j]>pivot);

        if(i<j)
        {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }while(i<j);

    int t=a[l];
    a[l]=a[j];
    a[j]=t;

    return j;
}

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


int main()
{
    int n;
    printf("\t Enter the range of the array \n");
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    printf("\n");
    int ch=0;

    while(ch!=8)
    {
        printf("\t Enter 1 to enter the array elements \n\t Enter 2 to display the array \n\t Enter 3 for selection sort \n\t Enter 4 for Bubble sort \n\t Enter 5 for insertion sort \n\t Enter 6 for quick sort \n\t Enter 7 for Merge sort \n\t Enter 8 to terminate \n");
        scanf("%d",&ch);

            switch(ch){
        case 1:
                printf("\t Enter the array elements \n");
                for(int i=0;i<n;i++)
                    {
                        scanf("%d",arr+i);
                    }
                    break;

        case 2:
            printf("\t Array is \n");
            for(int i=0;i<n;i++)
                {
                    printf("%d ",*(arr+i));
                }
                printf("\n");
                break;

        case 3:
            arr=selection(arr,n);
            break;

        case 4:
            arr=bubble(arr,n);
            break;

        case 5:
            arr=insertion(arr,n);
            break;

        case 6:
            quick(arr,0,n);
            break;

        case 7:
            merge(arr,0,n-1);
            break;

        case 8:
            break;

        default:
            printf("\t INVALID \n");
            break;
            }



    }
    return 0;
}
