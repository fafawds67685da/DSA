#include<stdio.h>
#include<string.h>

void selection(char *p,int l)
{
    for(int i=0;i<l-1;i++)
    {
        int y=i;
        for(int j=i+1;j<l;j++)
        {
            if(p[j]<p[y])
            {
                y=j;
            }
        }
        char x=p[i];
        p[i]=p[y];
        p[y]=x;
    }
}

void bubble(char *p,int l)
{
    for(int i=0;i<l-1;i++)
    {
        for(int j=0;j<l-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                char x=p[j];
                p[j]=p[j+1];
                p[j+1]=x;
            }
        }

    }
}

void insertion(char *p,int l)
{
    for(int i=1;i<l;i++)
    {
        int j = i-1;
        char y = p[i];
        while(j>=0 && p[j] > y)
        {
            p[j+1]=p[j];
            j=j-1;
        }
        p[j+1]=y;
    }
}

void heap(char *p, int l)
{
    if (l <= 1)
        return;

    buildmaxheap(p, l);

    char y = p[0];
    p[0] = p[l - 1];
    p[l - 1] = y;

    maxheapify(p, l - 1, 0);
    heap(p, l - 1);
}

void buildmaxheap(char *p, int l)
{
    for (int i = l / 2 - 1; i >= 0; i--)
        maxheapify(p, l, i);
}

void maxheapify(char *p, int heapsize, int l)
{
    int largest = l;
    int left = 2 * l + 1;
    int right = 2 * l + 2;


    if (left < heapsize && p[left] > p[largest])
        largest = left;

    if (right < heapsize && p[right] > p[largest])
        largest = right;


    if (largest != l)
    {

        char y = p[largest];
        p[largest] = p[l];
        p[l] = y;


        maxheapify(p, heapsize, largest);
    }
}



void quick(char *p, int low, int high, int l)
{
    if (low < high)
    {
        int pivot_index = partition(p, low, high);
        quick(p, low, pivot_index - 1,l);
        quick(p, pivot_index + 1, high,l);
    }
}

int partition(char *p, int low, int high)
{
    char pivot = p[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (p[j] <= pivot)
        {
            i++;
            char temp = p[i];
            p[i] = p[j];
            p[j] = temp;
        }
    }

    char temp = p[i + 1];
    p[i + 1] = p[high];
    p[high] = temp;

    return i + 1;
}

void merge(char *p, int l)
{
    if (l > 1)
    {
        int mid = l / 2;

        merge(p, mid);
        merge(p + mid, l - mid);

        mergesort(p, 0, mid, l);
    }
}

void mergesort(char *p, int low, int mid, int high)
{
    int left_size = mid;
    int right_size = high - mid;

    char left[left_size], right[right_size];

    for (int i = 0; i < left_size; i++)
        left[i] = p[low + i];
    for (int j = 0; j < right_size; j++)
        right[j] = p[mid + j];

    int i = 0, j = 0, k = low;
    while (i < left_size && j < right_size)
    {
        if (left[i] <= right[j])
        {
            p[k] = left[i];
            i++;
        }
        else
        {
            p[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < left_size)
    {
        p[k] = left[i];
        i++;
        k++;
    }

    while (j < right_size)
    {
        p[k] = right[j];
        j++;
        k++;
    }
}


void display(char *p,int l)
{
    for(int i=0;i<l;i++)
    {
        printf("%c ",p[i]);
    }
    printf("\n");
}
int main()
{
    char a[100],b[100],c[100];
    printf("\t Enter your name \n");
    fgets(a,100,stdin);
    printf("\t Enter your Father's name \n");
    fgets(b,100,stdin);
    printf("\t Enter your Mother's name \n");
    fgets(c,100,stdin);
    int l1=strlen(a)-1, l2=strlen(b)-1, l3=strlen(c)-1;
    int y=0;

    for(int i=l1;i<(l1+l2);i++)
    {
        a[i]=b[y];
        y+=1;

    }
    y=0;
    for(int i=l1+l2;i<(l1+l2+l3);i++)
    {
        a[i]=c[y];
        y+=1;

    }

    l1 = l2+ l3 + l1;
    char d[100];
    y=0;
    int z=0;
    for(int i=0;i<l1;i++)
    {
        if(a[i]==' ')
        {
            continue;
        }
        for(int j=i+1;j<l1;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=' ';
                z+=1;
            }

        }
        if(z==0)
        {
        d[y]=a[i];
        y+=1;

        }
        z=0;
    }

    int ch=0;
    while(ch!=8)
    {
        printf("\t Enter 1 for selection sort \n\t Enter 2 for Bubble sort \n\t Enter 3 for Insertion sort \n\t Enter 4 for Heap sort \n\t Enter 5 for Quick sort \n\t Enter 6 for Merge sort \n\t Enter 7 to display the sorted string \n\t Enter 8 to terminate \n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            selection(d,y);
            break;

        case 2:
            bubble(d,y);
            break;

        case 3:
            insertion(d,y);
            break;

        case 4:
            heap(d,y);
            break;

        case 5:
            quick(d,0,y-1,y);
            break;

        case 6:
            merge(d,y);
            break;

        case 7:
            display(d,y);
            break;

        case 8:
            break;

        default:
            printf("\tINVALID \n");
            break;
        }

    }
    return 0;

}

