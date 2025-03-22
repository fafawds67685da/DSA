void linear(int *arr, int n, int k)
{
    int z = 0;
    for(int i =0;i<n;i++)
    {
        if(arr[i]==k)
        {
            z+=1;
            break;
        }
    }
    if(z==1)
    {
        cout<<"\t Found it \n";
    }
    else
    {
        cout<<"Not found yet \n";
    }
}